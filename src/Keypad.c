// File Keypad.c
// Version 1.0
// Author: Alex
// Contact: anyfilin@mail.ru

#include "mgos_gpio.h"
#include "mgos_time.h"
#include "Keypad.h"
#include "hc543.h"

/*
#define ROWS 4	// Numbers of rows
#define COLS 4	// Numbers of column

// Chars map
char chars_map[ROWS * COLS] = 
{
	'1','2','3','A', 
	'4','5','6','B',
	'7','8','9','C',
	'*','0','#','D'
};

int rows_pins[ROWS] = {12, 13, 15, 4}; 		// Row's pins map
int columns_pins[COLS] = {2, 22, 21, 18}; 	// Column's pins map
*/

uint8_t columns_num = 0;
uint8_t rows_num = 0;
uint8_t count = 0;

char tmp_key = '\0';
char last_key = '\0';
char command = '\0';
char cmd_str[MAX_COMMAND_LENGTH] = "";

uint64_t start_time = 0;
uint64_t delay_time = 0; 

void keypad_init(void)
{
	columns_num = COLS;
	rows_num = ROWS;
	
	set_delay_time(100); 
	
	for (uint8_t r = 0; r < rows_num; r++) 
	{
		set_pin_input_pull_none(rows_pins[r]);
	}
		
	for (uint8_t c = 0; c < columns_num; c++) 
	{
		set_pin_input_pull_up(columns_pins[c]);
	}
}

bool has_key(void)
{
	return tmp_key != '\0' ? true : false;
}

char get_key(void)
{
	char _key = '\0';
	
	if((mgos_uptime_micros() - start_time) > delay_time)
	{
		scan_key();
		if(has_key())
		{
			_key = tmp_key;
			tmp_key = '\0'; 
		}
		start_time = mgos_uptime_micros();
	}
	return _key;
}

char get_command(void)
{
	char _tmp = get_key();
	if(_tmp != '#' && _tmp != '\0')
	{
		command = _tmp;
	}
	else if(_tmp == '#' && command != '\0')
	{
		_tmp = command;
		command = '\0';
		return _tmp;
	}
	return '\0';
}

char * get_mul_ch_command(void)
{
	char _ch = get_key();
	
	if(_ch != '#' && _ch != '\0' && count < MAX_COMMAND_LENGTH)
	{
		cmd_str[count] = _ch;
		count++;
	}
	else if(_ch == '#' && count != 0)
	{
		cmd_str[count] = '\0';
		count = 0;
		return cmd_str;
	}
	return NULL;
}

void scan_key(void)
{
	char _key = '\0';
	
	for (uint8_t r = 0; r < rows_num; r++) 
	{
		set_pin_output(rows_pins[r], LOW);
		
		for (uint8_t c = 0; c < columns_num; c++) 
		{
			if(!mgos_gpio_read(columns_pins[c]))
			{
				_key = chars_map[r * columns_num + c];
			}
		}
		set_pin_input_pull_none(rows_pins[r]);
	}
	
	if(last_key != _key) 
	{	
		last_key = _key;		
		if(_key != '\0') 
		{			
			tmp_key = _key;
		}
	}
}

// Step of keyboard scan  
void set_delay_time(uint32_t millisec)
{
	delay_time = (millisec == 0 || millisec > MAX_DELAY_TIME) ? MILLI_TO_MICRO_SEC(1) : MILLI_TO_MICRO_SEC(millisec);
}

void set_pin_output(int pinNum, bool level) 
{ 
	mgos_gpio_setup_output(pinNum, level);
}

void set_pin_input_pull_up(int pinNum) 
{ 
	mgos_gpio_set_mode(pinNum, MGOS_GPIO_MODE_INPUT);
	mgos_gpio_set_pull(pinNum, MGOS_GPIO_PULL_UP);
}

void set_pin_input_pull_none(int pinNum) 
{ 
	mgos_gpio_set_mode(pinNum, MGOS_GPIO_MODE_INPUT);
	mgos_gpio_set_pull(pinNum, MGOS_GPIO_PULL_NONE);
}

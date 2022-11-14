// File Keypad.h
// Version 1.0
// Author: Alex
// Contact: anyfilin@mail.ru

#pragma once

#define HIGH true
#define LOW false
#define MAX_DELAY_TIME 5000
#define MAX_COMMAND_LENGTH 10

#define MILLI_TO_MICRO_SEC(x) x * 1000

void set_pin_output(int pinNum, bool level); 
void set_pin_input_pull_up(int pinNum);
void set_pin_input_pull_none(int pinNum);

void keypad_init(void);
char get_key(void);
char get_command(void);
char * get_mul_ch_command();
void scan_key(void);
bool has_key(void);
void set_delay_time(uint32_t millisec);

#include "mgos.h"
#include "mgos_jsar.h"
#include "Keypad.h"


static void loop(void *arg)
{
	//char ch = '\0';
	
	//ch = get_key();
	//ch = get_command();
	//if(ch != '\0')
		//LOG(LL_INFO, ("Value: %c ", ch));
	
	char *str = get_mul_ch_command();
	if(str != NULL)
		LOG(LL_INFO, ("Value: %s ", str));
		
	(void) arg;
}

enum mgos_app_init_result mgos_app_init(void) 
{
  keypad_init();
  mgos_set_timer(1 , MGOS_TIMER_REPEAT, loop, NULL);

  return MGOS_APP_INIT_SUCCESS;
}

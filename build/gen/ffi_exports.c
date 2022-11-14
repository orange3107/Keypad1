/* Auto-generated, do not edit. */

/*
 * Symbols filtered by the following globs:
 */

#include <stdbool.h>

#include "mgos_dlsym.h"

/* NOTE: signatures are fake */
double  ceil(double);
double  cos(double);
void  esp32_uart_config_set_fifo(int, void *, int, int, int, int);
void  esp32_uart_config_set_pins(int, void *, int, int, int, int);
double  exp(double);
double  fabs(double);
void  fclose(void *);
double  floor(double);
double  fmax(double, double);
double  fmin(double, double);
void * fopen(char *, char *);
int  fread(char *, int, int, void *);
void  free(void *);
void  free(void *);
int  fwrite(char *, int, int, void *);
int  hall_sens_read(void);
double  log(double);
void * malloc(int);
void  mbuf_remove(void *, int);
int  mg_conn_addr_to_str(void *, char *, int, int);
bool  mg_rpc_send_errorf(void *, int, char *, char *);
void  mg_send(void *, void *, int);
void  mg_set_protocol_http_websocket(void *);
double  mg_time(void);
void * mgos_bind(char *, void (*)(void *, int, void *, void *), void *);
void  mgos_bitbang_write_bits_js(int, int, int, void *, int);
void * mgos_bt_gap_get_srdd(void);
char * mgos_bt_gap_parse_name_js(struct mg_str *);
bool  mgos_bt_gap_scan_js(int, bool);
void * mgos_bt_gatt_js_get_conn_def(void);
void * mgos_bt_gatt_js_get_conn_def(void);
bool  mgos_bt_gattc_connect_js(char *);
bool  mgos_bt_gattc_disconnect(int);
bool  mgos_bt_gattc_discover(int);
void * mgos_bt_gattc_js_get_discovery_done_arg_def(void);
void * mgos_bt_gattc_js_get_discovery_result_arg_def(void);
void * mgos_bt_gattc_js_get_notify_arg_def(void);
void * mgos_bt_gattc_js_get_read_result_arg_def(void);
void * mgos_bt_gattc_js_get_write_result_arg_def(void);
bool  mgos_bt_gattc_read(int, int);
bool  mgos_bt_gattc_set_notify_mode_cccd(int, int, int);
bool  mgos_bt_gattc_write_js(int, int, struct mg_str *, bool);
void * mgos_bt_gatts_js_add_char(void *, char *, int);
void  mgos_bt_gatts_js_free_chars(void *);
void * mgos_bt_gatts_js_get_notify_mode_arg_def(void);
void * mgos_bt_gatts_js_get_read_arg_def(void);
void * mgos_bt_gatts_js_get_write_arg_def(void);
void  mgos_bt_gatts_notify_js(void *, int, int, struct mg_str *);
bool  mgos_bt_gatts_register_service(char *, int, void *, int (*)(void *, int, void *, void *), void *);
void  mgos_bt_gatts_send_resp_data_js(void *, void *, struct mg_str *);
void  mgos_clear_timer(int);
void * mgos_conf_find_schema_entry(char *, void *);
double  mgos_conf_value_double(void *, void *);
int  mgos_conf_value_int(void *, void *);
char * mgos_conf_value_string_nonnull(void *, void *);
int  mgos_conf_value_type(void *);
bool  mgos_config_apply(char *, bool);
void * mgos_config_schema();
void * mgos_connect(char *, void (*)(void *, int, void *, void *), void *);
void * mgos_connect_http(char *, void (*)(void *, int, void *, void *), void *);
void * mgos_connect_http_ssl(char *, void (*)(void *, int, void *, void *), void *, char *, char *, char *);
void * mgos_connect_ssl(char *, void (*)(void *, int, void *, void *), void *, char *, char *, char *);
int  mgos_debug_event_get_len(void *);
void * mgos_debug_event_get_ptr(void *);
void  mgos_disconnect(void *);
void  mgos_dxl_communicationSpeed(void *, int);
void * mgos_dxl_console_create(void);
void  mgos_dxl_console_loop(void *);
int  mgos_dxl_init(void *);
void  mgos_dxl_master_begin(int);
void  mgos_dxl_master_enable(int);
void * mgos_dxl_module_create(int);
void * mgos_dxl_motor_create(int);
int  mgos_dxl_motor_currentPosition(void *);
void  mgos_dxl_motor_enableTorque(void *, int);
int  mgos_dxl_motor_getComplianceMargins(void *, void *, void *, void *, void *);
int  mgos_dxl_motor_getCurrentPosition(void *, void *);
void  mgos_dxl_motor_goalPosition(void *, int);
int  mgos_dxl_motor_init(void *);
int  mgos_dxl_motor_isMoving(void *, void *);
void  mgos_dxl_motor_jointMode(void *, int, int);
void  mgos_dxl_motor_led(void *, int);
int  mgos_dxl_motor_setComplianceMargins(void *, void *, void *, void *, void *);
void  mgos_dxl_motor_speed(void *, int);
void  mgos_dxl_motor_wheelMode(void *);
int  mgos_dxl_ping(void *);
int  mgos_dxl_read(void *, int);
int  mgos_dxl_read16(void *, int);
int  mgos_dxl_reset(void *);
void  mgos_dxl_setUserUartCb( void(*)(int, void *, void *), void *);
int  mgos_dxl_status(void *);
int  mgos_dxl_write(void *, int, int );
int  mgos_dxl_write16(void *, int, int );
void  mgos_esp_deep_sleep_d(double);
bool  mgos_event_add_group_handler(int, void(*)(int, void *, void *), void *);
bool  mgos_event_add_handler(int, void(*)(int, void *, void *), void *);
bool  mgos_event_register_base(int, char *);
int  mgos_event_trigger(int, void *);
void * mgos_get_body_ptr(void *);
int  mgos_get_free_heap_size();
int  mgos_get_heap_size();
int  mgos_get_mbuf_len(void *);
void * mgos_get_mbuf_ptr(void *);
int  mgos_get_mgstr_len(void *);
void * mgos_get_mgstr_ptr(void *);
void * mgos_get_msg_ptr(void *);
void * mgos_get_recv_mbuf(void *);
int  mgos_gpio_blink(int, int, int);
int  mgos_gpio_disable_int(int);
int  mgos_gpio_enable_int(int);
int  mgos_gpio_read(int);
int  mgos_gpio_read_out(int);
int  mgos_gpio_set_button_handler(int,int,int,int,void(*)(int, void *), void *);
int  mgos_gpio_set_int_handler(int,int,void(*)(int,void *),void *);
int  mgos_gpio_set_mode(int,int);
int  mgos_gpio_set_pull(int,int);
int  mgos_gpio_setup_input(int,int);
int  mgos_gpio_setup_output(int,int);
int  mgos_gpio_toggle(int);
void  mgos_gpio_write(int,int);
bool  mgos_is_inbound(void *);
void  mgos_jsar_KeysBegin(void);
void  mgos_jsar_KeysDigitalWrite(int, int);
void  mgos_jsar_KeysDigitalWriteAll(int, int, int, int);
void  mgos_jsar_KeysEncodersEnable(void);
void  mgos_jsar_KeysLoopPeriodWrite(int);
void  mgos_jsar_KeysMaxPowerWrite(int);
void  mgos_jsar_KeysPidWrite(int, int, int);
int  mgos_jsar_KeysPositionRead(int);
void  mgos_jsar_KeysPositionReadAll(void *, void *, void *, void *);
int  mgos_jsar_KeysPowerRead(int);
void  mgos_jsar_KeysPowerWrite(int, int);
void  mgos_jsar_KeysPowerWriteAll(int, int, int, int);
int  mgos_jsar_KeysSpeedRead(int);
void  mgos_jsar_KeysSpeedReadAll(void *, void *, void *, void *);
void  mgos_jsar_KeysSpeedWrite(int, int);
void  mgos_jsar_KeysSpeedWriteAll(int, int, int, int);
void  mgos_jsar_MotorsBegin(void);
void  mgos_jsar_MotorsEncoderModeA(void);
void  mgos_jsar_MotorsEncoderModeAB(void);
void  mgos_jsar_MotorsEncoderModeARising(void);
void  mgos_jsar_MotorsLoopPeriodWrite(int);
void  mgos_jsar_MotorsMaxPowerWrite(int);
void  mgos_jsar_MotorsPidWrite(int, int, int);
int  mgos_jsar_MotorsPositionRead(int);
void  mgos_jsar_MotorsPositionReadAll(void *, void *);
int  mgos_jsar_MotorsPowerRead(int);
void  mgos_jsar_MotorsPowerReadAll(void *, void *);
void  mgos_jsar_MotorsPowerWrite(int, int);
void  mgos_jsar_MotorsPowerWriteAll(int, int);
void  mgos_jsar_MotorsReadAll(void *, void *, void *, void *);
int  mgos_jsar_MotorsSpeedRead(int);
void  mgos_jsar_MotorsSpeedReadAll(void *, void *);
void  mgos_jsar_MotorsSpeedWrite(int, int);
void  mgos_jsar_MotorsSpeedWriteAll(int, int);
int  mgos_jsar_begin(void);
void  mgos_jsar_disableCanModule(void);
void  mgos_jsar_disableEthernet(void);
void  mgos_jsar_disableI2CPins(void);
void  mgos_jsar_disableIrRx(void);
void  mgos_jsar_disableIrTx(void);
void  mgos_jsar_disableMisoPin(void);
void  mgos_jsar_disableSDPort(void);
void  mgos_jsar_disableSpiPins(void);
void  mgos_jsar_enableCanModule(void);
void  mgos_jsar_enableEthernet(void);
void  mgos_jsar_enableI2CPins(void);
void  mgos_jsar_enableIrRx(void);
void  mgos_jsar_enableIrTx(void);
void  mgos_jsar_enableMisoPin(void);
void  mgos_jsar_enableSDPort1BitMode(void);
void  mgos_jsar_enableSDPort4BitMode(void);
void  mgos_jsar_enableSDPortSpiMode(void);
void  mgos_jsar_enableSpiPins3V3Mode(void);
void  mgos_jsar_enableSpiPins5VMode(void);
void  mgos_jsar_enableSpiPinsFast3V3Mode(void);
void  mgos_jsar_enableSpiPinsFast5VMode(void);
int  mgos_jsar_expanderAnalogRead(int);
void  mgos_jsar_expanderAnalogWrite(int, int);
int  mgos_jsar_expanderDigitalRead(int);
void  mgos_jsar_expanderDigitalWrite(int, int);
void  mgos_jsar_expanderPinMode(int, int);
void  mgos_jsar_expanderWriteLed(int);
void  mgos_jsar_lockExpander(int);
double  mgos_jsar_readVoltage(void);
void  mgos_jsar_replacePin34By27AsOUTPUT(void);
void  mgos_jsar_replacePin35By26AsDAC(void);
void  mgos_jsar_replacePin35By26AsOUTPUT(void);
void  mgos_jsar_replacePin36By25AsDAC(void);
void  mgos_jsar_replacePin36By25AsOUTPUT(void);
void  mgos_jsar_replacePinByExpander(int);
void  mgos_jsar_timMode(int, int, int);
int  mgos_jsar_unlockExpander(void);
int  mgos_jsar_updateFirmware(void);
void  mgos_jsar_writeMinVoltageToStart(double);
void  mgos_jsar_writeMinVoltageToWork(double);
void  mgos_log(char *, int, int, char *);
void * mgos_mjs_get_config();
void * mgos_rpc_add_handler(void *, void (*)(void *, char *, char *, void *), void *);
bool  mgos_rpc_call(char *, char *, char *, void (*)(char *, int, char *, void *), void *);
bool  mgos_rpc_send_response(void *, char *);
int  mgos_set_timer(int,int,void(*)(void *),void *);
int  mgos_strftime(char *, int, char *, int);
void  mgos_system_restart_after(int);
void * mgos_uart_config_get_default(int);
void  mgos_uart_config_set_basic_params(void *, int, int, int, int);
void  mgos_uart_config_set_rx_params(void *, int, int, int);
void  mgos_uart_config_set_tx_params(void *, int, int);
int  mgos_uart_configure(int, void *);
void  mgos_uart_flush(int);
int  mgos_uart_is_rx_enabled(int);
int  mgos_uart_read(int, void *, int);
int  mgos_uart_read_avail(int);
void  mgos_uart_set_dispatcher(int, void(*)(int, void *), void *);
void  mgos_uart_set_rx_enabled(int, int);
int  mgos_uart_write(int, char *, int);
int  mgos_uart_write_avail(int);
double  mgos_uptime();
void  mgos_usleep(int);
void  mgos_wdt_feed();
char * mjs_get_bcode_filename_by_offset(void *, int);
int  mjs_get_lineno_by_offset(void *, int);
int  mjs_get_offset_by_call_frame_num(void *, int);
double  mjs_mem_get_int(void *, int, int);
void * mjs_mem_get_ptr(void *, int);
double  mjs_mem_get_uint(void *, int, int);
void  mjs_mem_set_uint(void *, int, int, int);
void * mjs_mem_to_ptr(int);
double  pow(double, double);
int  rand();
int  remove(char *);
int  rename(char *, char *);
double  round(double);
double  sin(double);
double  sqrt(double);
void * strdup(char *);
int  temprature_sens_read(void);

const struct mgos_ffi_export ffi_exports[] = {
  {"ceil", ceil},
  {"cos", cos},
  {"esp32_uart_config_set_fifo", esp32_uart_config_set_fifo},
  {"esp32_uart_config_set_pins", esp32_uart_config_set_pins},
  {"exp", exp},
  {"fabs", fabs},
  {"fclose", fclose},
  {"floor", floor},
  {"fmax", fmax},
  {"fmin", fmin},
  {"fopen", fopen},
  {"fread", fread},
  {"free", free},
  {"free", free},
  {"fwrite", fwrite},
  {"hall_sens_read", hall_sens_read},
  {"log", log},
  {"malloc", malloc},
  {"mbuf_remove", mbuf_remove},
  {"mg_conn_addr_to_str", mg_conn_addr_to_str},
  {"mg_rpc_send_errorf", mg_rpc_send_errorf},
  {"mg_send", mg_send},
  {"mg_set_protocol_http_websocket", mg_set_protocol_http_websocket},
  {"mg_time", mg_time},
  {"mgos_bind", mgos_bind},
  {"mgos_bitbang_write_bits_js", mgos_bitbang_write_bits_js},
  {"mgos_bt_gap_get_srdd", mgos_bt_gap_get_srdd},
  {"mgos_bt_gap_parse_name_js", mgos_bt_gap_parse_name_js},
  {"mgos_bt_gap_scan_js", mgos_bt_gap_scan_js},
  {"mgos_bt_gatt_js_get_conn_def", mgos_bt_gatt_js_get_conn_def},
  {"mgos_bt_gatt_js_get_conn_def", mgos_bt_gatt_js_get_conn_def},
  {"mgos_bt_gattc_connect_js", mgos_bt_gattc_connect_js},
  {"mgos_bt_gattc_disconnect", mgos_bt_gattc_disconnect},
  {"mgos_bt_gattc_discover", mgos_bt_gattc_discover},
  {"mgos_bt_gattc_js_get_discovery_done_arg_def", mgos_bt_gattc_js_get_discovery_done_arg_def},
  {"mgos_bt_gattc_js_get_discovery_result_arg_def", mgos_bt_gattc_js_get_discovery_result_arg_def},
  {"mgos_bt_gattc_js_get_notify_arg_def", mgos_bt_gattc_js_get_notify_arg_def},
  {"mgos_bt_gattc_js_get_read_result_arg_def", mgos_bt_gattc_js_get_read_result_arg_def},
  {"mgos_bt_gattc_js_get_write_result_arg_def", mgos_bt_gattc_js_get_write_result_arg_def},
  {"mgos_bt_gattc_read", mgos_bt_gattc_read},
  {"mgos_bt_gattc_set_notify_mode_cccd", mgos_bt_gattc_set_notify_mode_cccd},
  {"mgos_bt_gattc_write_js", mgos_bt_gattc_write_js},
  {"mgos_bt_gatts_js_add_char", mgos_bt_gatts_js_add_char},
  {"mgos_bt_gatts_js_free_chars", mgos_bt_gatts_js_free_chars},
  {"mgos_bt_gatts_js_get_notify_mode_arg_def", mgos_bt_gatts_js_get_notify_mode_arg_def},
  {"mgos_bt_gatts_js_get_read_arg_def", mgos_bt_gatts_js_get_read_arg_def},
  {"mgos_bt_gatts_js_get_write_arg_def", mgos_bt_gatts_js_get_write_arg_def},
  {"mgos_bt_gatts_notify_js", mgos_bt_gatts_notify_js},
  {"mgos_bt_gatts_register_service", mgos_bt_gatts_register_service},
  {"mgos_bt_gatts_send_resp_data_js", mgos_bt_gatts_send_resp_data_js},
  {"mgos_clear_timer", mgos_clear_timer},
  {"mgos_conf_find_schema_entry", mgos_conf_find_schema_entry},
  {"mgos_conf_value_double", mgos_conf_value_double},
  {"mgos_conf_value_int", mgos_conf_value_int},
  {"mgos_conf_value_string_nonnull", mgos_conf_value_string_nonnull},
  {"mgos_conf_value_type", mgos_conf_value_type},
  {"mgos_config_apply", mgos_config_apply},
  {"mgos_config_schema", mgos_config_schema},
  {"mgos_connect", mgos_connect},
  {"mgos_connect_http", mgos_connect_http},
  {"mgos_connect_http_ssl", mgos_connect_http_ssl},
  {"mgos_connect_ssl", mgos_connect_ssl},
  {"mgos_debug_event_get_len", mgos_debug_event_get_len},
  {"mgos_debug_event_get_ptr", mgos_debug_event_get_ptr},
  {"mgos_disconnect", mgos_disconnect},
  {"mgos_dxl_communicationSpeed", mgos_dxl_communicationSpeed},
  {"mgos_dxl_console_create", mgos_dxl_console_create},
  {"mgos_dxl_console_loop", mgos_dxl_console_loop},
  {"mgos_dxl_init", mgos_dxl_init},
  {"mgos_dxl_master_begin", mgos_dxl_master_begin},
  {"mgos_dxl_master_enable", mgos_dxl_master_enable},
  {"mgos_dxl_module_create", mgos_dxl_module_create},
  {"mgos_dxl_motor_create", mgos_dxl_motor_create},
  {"mgos_dxl_motor_currentPosition", mgos_dxl_motor_currentPosition},
  {"mgos_dxl_motor_enableTorque", mgos_dxl_motor_enableTorque},
  {"mgos_dxl_motor_getComplianceMargins", mgos_dxl_motor_getComplianceMargins},
  {"mgos_dxl_motor_getCurrentPosition", mgos_dxl_motor_getCurrentPosition},
  {"mgos_dxl_motor_goalPosition", mgos_dxl_motor_goalPosition},
  {"mgos_dxl_motor_init", mgos_dxl_motor_init},
  {"mgos_dxl_motor_isMoving", mgos_dxl_motor_isMoving},
  {"mgos_dxl_motor_jointMode", mgos_dxl_motor_jointMode},
  {"mgos_dxl_motor_led", mgos_dxl_motor_led},
  {"mgos_dxl_motor_setComplianceMargins", mgos_dxl_motor_setComplianceMargins},
  {"mgos_dxl_motor_speed", mgos_dxl_motor_speed},
  {"mgos_dxl_motor_wheelMode", mgos_dxl_motor_wheelMode},
  {"mgos_dxl_ping", mgos_dxl_ping},
  {"mgos_dxl_read", mgos_dxl_read},
  {"mgos_dxl_read16", mgos_dxl_read16},
  {"mgos_dxl_reset", mgos_dxl_reset},
  {"mgos_dxl_setUserUartCb", mgos_dxl_setUserUartCb},
  {"mgos_dxl_status", mgos_dxl_status},
  {"mgos_dxl_write", mgos_dxl_write},
  {"mgos_dxl_write16", mgos_dxl_write16},
  {"mgos_esp_deep_sleep_d", mgos_esp_deep_sleep_d},
  {"mgos_event_add_group_handler", mgos_event_add_group_handler},
  {"mgos_event_add_handler", mgos_event_add_handler},
  {"mgos_event_register_base", mgos_event_register_base},
  {"mgos_event_trigger", mgos_event_trigger},
  {"mgos_get_body_ptr", mgos_get_body_ptr},
  {"mgos_get_free_heap_size", mgos_get_free_heap_size},
  {"mgos_get_heap_size", mgos_get_heap_size},
  {"mgos_get_mbuf_len", mgos_get_mbuf_len},
  {"mgos_get_mbuf_ptr", mgos_get_mbuf_ptr},
  {"mgos_get_mgstr_len", mgos_get_mgstr_len},
  {"mgos_get_mgstr_ptr", mgos_get_mgstr_ptr},
  {"mgos_get_msg_ptr", mgos_get_msg_ptr},
  {"mgos_get_recv_mbuf", mgos_get_recv_mbuf},
  {"mgos_gpio_blink", mgos_gpio_blink},
  {"mgos_gpio_disable_int", mgos_gpio_disable_int},
  {"mgos_gpio_enable_int", mgos_gpio_enable_int},
  {"mgos_gpio_read", mgos_gpio_read},
  {"mgos_gpio_read_out", mgos_gpio_read_out},
  {"mgos_gpio_set_button_handler", mgos_gpio_set_button_handler},
  {"mgos_gpio_set_int_handler", mgos_gpio_set_int_handler},
  {"mgos_gpio_set_mode", mgos_gpio_set_mode},
  {"mgos_gpio_set_pull", mgos_gpio_set_pull},
  {"mgos_gpio_setup_input", mgos_gpio_setup_input},
  {"mgos_gpio_setup_output", mgos_gpio_setup_output},
  {"mgos_gpio_toggle", mgos_gpio_toggle},
  {"mgos_gpio_write", mgos_gpio_write},
  {"mgos_is_inbound", mgos_is_inbound},
  {"mgos_jsar_KeysBegin", mgos_jsar_KeysBegin},
  {"mgos_jsar_KeysDigitalWrite", mgos_jsar_KeysDigitalWrite},
  {"mgos_jsar_KeysDigitalWriteAll", mgos_jsar_KeysDigitalWriteAll},
  {"mgos_jsar_KeysEncodersEnable", mgos_jsar_KeysEncodersEnable},
  {"mgos_jsar_KeysLoopPeriodWrite", mgos_jsar_KeysLoopPeriodWrite},
  {"mgos_jsar_KeysMaxPowerWrite", mgos_jsar_KeysMaxPowerWrite},
  {"mgos_jsar_KeysPidWrite", mgos_jsar_KeysPidWrite},
  {"mgos_jsar_KeysPositionRead", mgos_jsar_KeysPositionRead},
  {"mgos_jsar_KeysPositionReadAll", mgos_jsar_KeysPositionReadAll},
  {"mgos_jsar_KeysPowerRead", mgos_jsar_KeysPowerRead},
  {"mgos_jsar_KeysPowerWrite", mgos_jsar_KeysPowerWrite},
  {"mgos_jsar_KeysPowerWriteAll", mgos_jsar_KeysPowerWriteAll},
  {"mgos_jsar_KeysSpeedRead", mgos_jsar_KeysSpeedRead},
  {"mgos_jsar_KeysSpeedReadAll", mgos_jsar_KeysSpeedReadAll},
  {"mgos_jsar_KeysSpeedWrite", mgos_jsar_KeysSpeedWrite},
  {"mgos_jsar_KeysSpeedWriteAll", mgos_jsar_KeysSpeedWriteAll},
  {"mgos_jsar_MotorsBegin", mgos_jsar_MotorsBegin},
  {"mgos_jsar_MotorsEncoderModeA", mgos_jsar_MotorsEncoderModeA},
  {"mgos_jsar_MotorsEncoderModeAB", mgos_jsar_MotorsEncoderModeAB},
  {"mgos_jsar_MotorsEncoderModeARising", mgos_jsar_MotorsEncoderModeARising},
  {"mgos_jsar_MotorsLoopPeriodWrite", mgos_jsar_MotorsLoopPeriodWrite},
  {"mgos_jsar_MotorsMaxPowerWrite", mgos_jsar_MotorsMaxPowerWrite},
  {"mgos_jsar_MotorsPidWrite", mgos_jsar_MotorsPidWrite},
  {"mgos_jsar_MotorsPositionRead", mgos_jsar_MotorsPositionRead},
  {"mgos_jsar_MotorsPositionReadAll", mgos_jsar_MotorsPositionReadAll},
  {"mgos_jsar_MotorsPowerRead", mgos_jsar_MotorsPowerRead},
  {"mgos_jsar_MotorsPowerReadAll", mgos_jsar_MotorsPowerReadAll},
  {"mgos_jsar_MotorsPowerWrite", mgos_jsar_MotorsPowerWrite},
  {"mgos_jsar_MotorsPowerWriteAll", mgos_jsar_MotorsPowerWriteAll},
  {"mgos_jsar_MotorsReadAll", mgos_jsar_MotorsReadAll},
  {"mgos_jsar_MotorsSpeedRead", mgos_jsar_MotorsSpeedRead},
  {"mgos_jsar_MotorsSpeedReadAll", mgos_jsar_MotorsSpeedReadAll},
  {"mgos_jsar_MotorsSpeedWrite", mgos_jsar_MotorsSpeedWrite},
  {"mgos_jsar_MotorsSpeedWriteAll", mgos_jsar_MotorsSpeedWriteAll},
  {"mgos_jsar_begin", mgos_jsar_begin},
  {"mgos_jsar_disableCanModule", mgos_jsar_disableCanModule},
  {"mgos_jsar_disableEthernet", mgos_jsar_disableEthernet},
  {"mgos_jsar_disableI2CPins", mgos_jsar_disableI2CPins},
  {"mgos_jsar_disableIrRx", mgos_jsar_disableIrRx},
  {"mgos_jsar_disableIrTx", mgos_jsar_disableIrTx},
  {"mgos_jsar_disableMisoPin", mgos_jsar_disableMisoPin},
  {"mgos_jsar_disableSDPort", mgos_jsar_disableSDPort},
  {"mgos_jsar_disableSpiPins", mgos_jsar_disableSpiPins},
  {"mgos_jsar_enableCanModule", mgos_jsar_enableCanModule},
  {"mgos_jsar_enableEthernet", mgos_jsar_enableEthernet},
  {"mgos_jsar_enableI2CPins", mgos_jsar_enableI2CPins},
  {"mgos_jsar_enableIrRx", mgos_jsar_enableIrRx},
  {"mgos_jsar_enableIrTx", mgos_jsar_enableIrTx},
  {"mgos_jsar_enableMisoPin", mgos_jsar_enableMisoPin},
  {"mgos_jsar_enableSDPort1BitMode", mgos_jsar_enableSDPort1BitMode},
  {"mgos_jsar_enableSDPort4BitMode", mgos_jsar_enableSDPort4BitMode},
  {"mgos_jsar_enableSDPortSpiMode", mgos_jsar_enableSDPortSpiMode},
  {"mgos_jsar_enableSpiPins3V3Mode", mgos_jsar_enableSpiPins3V3Mode},
  {"mgos_jsar_enableSpiPins5VMode", mgos_jsar_enableSpiPins5VMode},
  {"mgos_jsar_enableSpiPinsFast3V3Mode", mgos_jsar_enableSpiPinsFast3V3Mode},
  {"mgos_jsar_enableSpiPinsFast5VMode", mgos_jsar_enableSpiPinsFast5VMode},
  {"mgos_jsar_expanderAnalogRead", mgos_jsar_expanderAnalogRead},
  {"mgos_jsar_expanderAnalogWrite", mgos_jsar_expanderAnalogWrite},
  {"mgos_jsar_expanderDigitalRead", mgos_jsar_expanderDigitalRead},
  {"mgos_jsar_expanderDigitalWrite", mgos_jsar_expanderDigitalWrite},
  {"mgos_jsar_expanderPinMode", mgos_jsar_expanderPinMode},
  {"mgos_jsar_expanderWriteLed", mgos_jsar_expanderWriteLed},
  {"mgos_jsar_lockExpander", mgos_jsar_lockExpander},
  {"mgos_jsar_readVoltage", mgos_jsar_readVoltage},
  {"mgos_jsar_replacePin34By27AsOUTPUT", mgos_jsar_replacePin34By27AsOUTPUT},
  {"mgos_jsar_replacePin35By26AsDAC", mgos_jsar_replacePin35By26AsDAC},
  {"mgos_jsar_replacePin35By26AsOUTPUT", mgos_jsar_replacePin35By26AsOUTPUT},
  {"mgos_jsar_replacePin36By25AsDAC", mgos_jsar_replacePin36By25AsDAC},
  {"mgos_jsar_replacePin36By25AsOUTPUT", mgos_jsar_replacePin36By25AsOUTPUT},
  {"mgos_jsar_replacePinByExpander", mgos_jsar_replacePinByExpander},
  {"mgos_jsar_timMode", mgos_jsar_timMode},
  {"mgos_jsar_unlockExpander", mgos_jsar_unlockExpander},
  {"mgos_jsar_updateFirmware", mgos_jsar_updateFirmware},
  {"mgos_jsar_writeMinVoltageToStart", mgos_jsar_writeMinVoltageToStart},
  {"mgos_jsar_writeMinVoltageToWork", mgos_jsar_writeMinVoltageToWork},
  {"mgos_log", mgos_log},
  {"mgos_mjs_get_config", mgos_mjs_get_config},
  {"mgos_rpc_add_handler", mgos_rpc_add_handler},
  {"mgos_rpc_call", mgos_rpc_call},
  {"mgos_rpc_send_response", mgos_rpc_send_response},
  {"mgos_set_timer", mgos_set_timer},
  {"mgos_strftime", mgos_strftime},
  {"mgos_system_restart_after", mgos_system_restart_after},
  {"mgos_uart_config_get_default", mgos_uart_config_get_default},
  {"mgos_uart_config_set_basic_params", mgos_uart_config_set_basic_params},
  {"mgos_uart_config_set_rx_params", mgos_uart_config_set_rx_params},
  {"mgos_uart_config_set_tx_params", mgos_uart_config_set_tx_params},
  {"mgos_uart_configure", mgos_uart_configure},
  {"mgos_uart_flush", mgos_uart_flush},
  {"mgos_uart_is_rx_enabled", mgos_uart_is_rx_enabled},
  {"mgos_uart_read", mgos_uart_read},
  {"mgos_uart_read_avail", mgos_uart_read_avail},
  {"mgos_uart_set_dispatcher", mgos_uart_set_dispatcher},
  {"mgos_uart_set_rx_enabled", mgos_uart_set_rx_enabled},
  {"mgos_uart_write", mgos_uart_write},
  {"mgos_uart_write_avail", mgos_uart_write_avail},
  {"mgos_uptime", mgos_uptime},
  {"mgos_usleep", mgos_usleep},
  {"mgos_wdt_feed", mgos_wdt_feed},
  {"mjs_get_bcode_filename_by_offset", mjs_get_bcode_filename_by_offset},
  {"mjs_get_lineno_by_offset", mjs_get_lineno_by_offset},
  {"mjs_get_offset_by_call_frame_num", mjs_get_offset_by_call_frame_num},
  {"mjs_mem_get_int", mjs_mem_get_int},
  {"mjs_mem_get_ptr", mjs_mem_get_ptr},
  {"mjs_mem_get_uint", mjs_mem_get_uint},
  {"mjs_mem_set_uint", mjs_mem_set_uint},
  {"mjs_mem_to_ptr", mjs_mem_to_ptr},
  {"pow", pow},
  {"rand", rand},
  {"remove", remove},
  {"rename", rename},
  {"round", round},
  {"sin", sin},
  {"sqrt", sqrt},
  {"strdup", strdup},
  {"temprature_sens_read", temprature_sens_read},
};
const int ffi_exports_cnt = 237;

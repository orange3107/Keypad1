/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.20.0/apps/keypad/esp32/build_contexts/build_ctx_470906910/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.20.0/apps/keypad/esp32/build_contexts/build_ctx_470906910/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stdbool.h>

#include "common/cs_file.h"

#include "mgos_config_util.h"


/* struct mgos_config */
static const struct mgos_conf_entry mgos_config_schema_[] = {
    {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 81},
    {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 10},
    {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
    {.type = CONF_TYPE_INT, .key = "udp_log_level", .offset = offsetof(struct mgos_config, debug.udp_log_level)},
    {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
    {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
    {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
    {.type = CONF_TYPE_INT, .key = "event_level", .offset = offsetof(struct mgos_config, debug.event_level)},
    {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
    {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
    {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
    {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
    {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
    {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
    {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
    {.type = CONF_TYPE_STRING, .key = "public_key", .offset = offsetof(struct mgos_config, device.public_key)},
    {.type = CONF_TYPE_STRING, .key = "sn", .offset = offsetof(struct mgos_config, device.sn)},
    {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 3},
    {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
    {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
    {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
    {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
    {.type = CONF_TYPE_OBJECT, .key = "bt", .offset = offsetof(struct mgos_config, bt), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, bt.enable)},
    {.type = CONF_TYPE_STRING, .key = "dev_name", .offset = offsetof(struct mgos_config, bt.dev_name)},
    {.type = CONF_TYPE_BOOL, .key = "adv_enable", .offset = offsetof(struct mgos_config, bt.adv_enable)},
    {.type = CONF_TYPE_STRING, .key = "scan_rsp_data_hex", .offset = offsetof(struct mgos_config, bt.scan_rsp_data_hex)},
    {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, bt.keep_enabled)},
    {.type = CONF_TYPE_BOOL, .key = "allow_pairing", .offset = offsetof(struct mgos_config, bt.allow_pairing)},
    {.type = CONF_TYPE_INT, .key = "max_paired_devices", .offset = offsetof(struct mgos_config, bt.max_paired_devices)},
    {.type = CONF_TYPE_BOOL, .key = "random_address", .offset = offsetof(struct mgos_config, bt.random_address)},
    {.type = CONF_TYPE_INT, .key = "gatt_mtu", .offset = offsetof(struct mgos_config, bt.gatt_mtu)},
    {.type = CONF_TYPE_OBJECT, .key = "gatts", .offset = offsetof(struct mgos_config, bt.gatts), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "min_sec_level", .offset = offsetof(struct mgos_config, bt.gatts.min_sec_level)},
    {.type = CONF_TYPE_BOOL, .key = "debug_svc_enable", .offset = offsetof(struct mgos_config, bt.debug_svc_enable)},
    {.type = CONF_TYPE_INT, .key = "debug_svc_sec_level", .offset = offsetof(struct mgos_config, bt.debug_svc_sec_level)},
    {.type = CONF_TYPE_OBJECT, .key = "eth", .offset = offsetof(struct mgos_config, eth), .num_desc = 11},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, eth.enable)},
    {.type = CONF_TYPE_INT, .key = "phy_addr", .offset = offsetof(struct mgos_config, eth.phy_addr)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, eth.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, eth.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, eth.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, eth.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, eth.dhcp_hostname)},
    {.type = CONF_TYPE_INT, .key = "clk_mode", .offset = offsetof(struct mgos_config, eth.clk_mode)},
    {.type = CONF_TYPE_INT, .key = "mdc_gpio", .offset = offsetof(struct mgos_config, eth.mdc_gpio)},
    {.type = CONF_TYPE_INT, .key = "mdio_gpio", .offset = offsetof(struct mgos_config, eth.mdio_gpio)},
    {.type = CONF_TYPE_INT, .key = "phy_pwr_gpio", .offset = offsetof(struct mgos_config, eth.phy_pwr_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "mjs", .offset = offsetof(struct mgos_config, mjs), .num_desc = 1},
    {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
    {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 17},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
    {.type = CONF_TYPE_BOOL, .key = "http_enable", .offset = offsetof(struct mgos_config, rpc.http_enable)},
    {.type = CONF_TYPE_BOOL, .key = "service_sys_enable", .offset = offsetof(struct mgos_config, rpc.service_sys_enable)},
    {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
    {.type = CONF_TYPE_INT, .key = "max_non_persistent_channels", .offset = offsetof(struct mgos_config, rpc.max_non_persistent_channels)},
    {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
    {.type = CONF_TYPE_STRING, .key = "acl", .offset = offsetof(struct mgos_config, rpc.acl)},
    {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
    {.type = CONF_TYPE_INT, .key = "auth_algo", .offset = offsetof(struct mgos_config, rpc.auth_algo)},
    {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
    {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
    {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
    {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
    {.type = CONF_TYPE_OBJECT, .key = "user", .offset = offsetof(struct mgos_config, user), .num_desc = 12},
    {.type = CONF_TYPE_OBJECT, .key = "lan", .offset = offsetof(struct mgos_config, user.lan), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "enable", .offset = offsetof(struct mgos_config, user.lan.enable)},
    {.type = CONF_TYPE_OBJECT, .key = "can", .offset = offsetof(struct mgos_config, user.can), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "enable", .offset = offsetof(struct mgos_config, user.can.enable)},
    {.type = CONF_TYPE_OBJECT, .key = "spi", .offset = offsetof(struct mgos_config, user.spi), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "enable", .offset = offsetof(struct mgos_config, user.spi.enable)},
    {.type = CONF_TYPE_OBJECT, .key = "irtx", .offset = offsetof(struct mgos_config, user.irtx), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "enable", .offset = offsetof(struct mgos_config, user.irtx.enable)},
    {.type = CONF_TYPE_OBJECT, .key = "irrx", .offset = offsetof(struct mgos_config, user.irrx), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "enable", .offset = offsetof(struct mgos_config, user.irrx.enable)},
    {.type = CONF_TYPE_OBJECT, .key = "sdcard", .offset = offsetof(struct mgos_config, user.sdcard), .num_desc = 1},
    {.type = CONF_TYPE_INT, .key = "enable", .offset = offsetof(struct mgos_config, user.sdcard.enable)},
};

/* struct mgos_config_debug */
const struct mgos_conf_entry *mgos_config_debug_get_schema(void) {
  return &mgos_config_schema_[1];
}

void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg) {
  cfg->udp_log_addr = NULL;
  cfg->udp_log_level = 3;
  cfg->mbedtls_level = 0;
  cfg->level = 2;
  cfg->file_level = NULL;
  cfg->event_level = 2;
  cfg->stdout_uart = 0;
  cfg->stderr_uart = 0;
  cfg->factory_reset_gpio = -1;
  cfg->mg_mgr_hexdump_file = NULL;
}
bool mgos_config_debug_parse_f(const char *fname, struct mgos_config_debug *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_debug_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_device */
const struct mgos_conf_entry *mgos_config_device_get_schema(void) {
  return &mgos_config_schema_[12];
}

void mgos_config_device_set_defaults(struct mgos_config_device *cfg) {
  cfg->id = "esp32_??????";
  cfg->license = NULL;
  cfg->mac = NULL;
  cfg->public_key = NULL;
  cfg->sn = NULL;
}
bool mgos_config_device_parse_f(const char *fname, struct mgos_config_device *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_device_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_sys */
const struct mgos_conf_entry *mgos_config_sys_get_schema(void) {
  return &mgos_config_schema_[18];
}

void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg) {
  cfg->tz_spec = NULL;
  cfg->wdt_timeout = 30;
  cfg->pref_ota_lib = NULL;
}
bool mgos_config_sys_parse_f(const char *fname, struct mgos_config_sys *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_sys_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_bt_gatts */
const struct mgos_conf_entry *mgos_config_bt_gatts_get_schema(void) {
  return &mgos_config_schema_[33];
}

void mgos_config_bt_gatts_set_defaults(struct mgos_config_bt_gatts *cfg) {
  cfg->min_sec_level = 0;
}
bool mgos_config_bt_gatts_parse_f(const char *fname, struct mgos_config_bt_gatts *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_bt_gatts_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_bt */
const struct mgos_conf_entry *mgos_config_bt_get_schema(void) {
  return &mgos_config_schema_[23];
}

void mgos_config_bt_set_defaults(struct mgos_config_bt *cfg) {
  cfg->enable = false;
  cfg->dev_name = NULL;
  cfg->adv_enable = true;
  cfg->scan_rsp_data_hex = NULL;
  cfg->keep_enabled = false;
  cfg->allow_pairing = true;
  cfg->max_paired_devices = -1;
  cfg->random_address = false;
  cfg->gatt_mtu = 500;
  mgos_config_bt_gatts_set_defaults(&cfg->gatts);
  cfg->debug_svc_enable = true;
  cfg->debug_svc_sec_level = 0;
}
bool mgos_config_bt_parse_f(const char *fname, struct mgos_config_bt *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_bt_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_eth */
const struct mgos_conf_entry *mgos_config_eth_get_schema(void) {
  return &mgos_config_schema_[37];
}

void mgos_config_eth_set_defaults(struct mgos_config_eth *cfg) {
  cfg->enable = false;
  cfg->phy_addr = 0;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
  cfg->clk_mode = 0;
  cfg->mdc_gpio = 23;
  cfg->mdio_gpio = 18;
  cfg->phy_pwr_gpio = -1;
}
bool mgos_config_eth_parse_f(const char *fname, struct mgos_config_eth *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_eth_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_mjs */
const struct mgos_conf_entry *mgos_config_mjs_get_schema(void) {
  return &mgos_config_schema_[49];
}

void mgos_config_mjs_set_defaults(struct mgos_config_mjs *cfg) {
  cfg->generate_jsc = true;
}
bool mgos_config_mjs_parse_f(const char *fname, struct mgos_config_mjs *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_mjs_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc_uart */
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void) {
  return &mgos_config_schema_[64];
}

void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg) {
  cfg->uart_no = 0;
  cfg->baud_rate = 115200;
  cfg->fc_type = 0;
  cfg->dst = NULL;
}
bool mgos_config_rpc_uart_parse_f(const char *fname, struct mgos_config_rpc_uart *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_uart_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_rpc */
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void) {
  return &mgos_config_schema_[51];
}

void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg) {
  cfg->enable = true;
  cfg->http_enable = true;
  cfg->service_sys_enable = true;
  cfg->max_frame_size = 4096;
  cfg->max_queue_length = 25;
  cfg->max_non_persistent_channels = 20;
  cfg->default_out_channel_idle_close_timeout = 10;
  cfg->acl = NULL;
  cfg->acl_file = NULL;
  cfg->auth_domain = "RPC";
  cfg->auth_file = NULL;
  cfg->auth_algo = 0;
  mgos_config_rpc_uart_set_defaults(&cfg->uart);
}
bool mgos_config_rpc_parse_f(const char *fname, struct mgos_config_rpc *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_rpc_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user_lan */
const struct mgos_conf_entry *mgos_config_user_lan_get_schema(void) {
  return &mgos_config_schema_[70];
}

void mgos_config_user_lan_set_defaults(struct mgos_config_user_lan *cfg) {
  cfg->enable = 1;
}
bool mgos_config_user_lan_parse_f(const char *fname, struct mgos_config_user_lan *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_lan_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user_can */
const struct mgos_conf_entry *mgos_config_user_can_get_schema(void) {
  return &mgos_config_schema_[72];
}

void mgos_config_user_can_set_defaults(struct mgos_config_user_can *cfg) {
  cfg->enable = 0;
}
bool mgos_config_user_can_parse_f(const char *fname, struct mgos_config_user_can *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_can_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user_spi */
const struct mgos_conf_entry *mgos_config_user_spi_get_schema(void) {
  return &mgos_config_schema_[74];
}

void mgos_config_user_spi_set_defaults(struct mgos_config_user_spi *cfg) {
  cfg->enable = 0;
}
bool mgos_config_user_spi_parse_f(const char *fname, struct mgos_config_user_spi *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_spi_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user_irtx */
const struct mgos_conf_entry *mgos_config_user_irtx_get_schema(void) {
  return &mgos_config_schema_[76];
}

void mgos_config_user_irtx_set_defaults(struct mgos_config_user_irtx *cfg) {
  cfg->enable = 0;
}
bool mgos_config_user_irtx_parse_f(const char *fname, struct mgos_config_user_irtx *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_irtx_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user_irrx */
const struct mgos_conf_entry *mgos_config_user_irrx_get_schema(void) {
  return &mgos_config_schema_[78];
}

void mgos_config_user_irrx_set_defaults(struct mgos_config_user_irrx *cfg) {
  cfg->enable = 0;
}
bool mgos_config_user_irrx_parse_f(const char *fname, struct mgos_config_user_irrx *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_irrx_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user_sdcard */
const struct mgos_conf_entry *mgos_config_user_sdcard_get_schema(void) {
  return &mgos_config_schema_[80];
}

void mgos_config_user_sdcard_set_defaults(struct mgos_config_user_sdcard *cfg) {
  cfg->enable = 0;
}
bool mgos_config_user_sdcard_parse_f(const char *fname, struct mgos_config_user_sdcard *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_sdcard_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config_user */
const struct mgos_conf_entry *mgos_config_user_get_schema(void) {
  return &mgos_config_schema_[69];
}

void mgos_config_user_set_defaults(struct mgos_config_user *cfg) {
  mgos_config_user_lan_set_defaults(&cfg->lan);
  mgos_config_user_can_set_defaults(&cfg->can);
  mgos_config_user_spi_set_defaults(&cfg->spi);
  mgos_config_user_irtx_set_defaults(&cfg->irtx);
  mgos_config_user_irrx_set_defaults(&cfg->irrx);
  mgos_config_user_sdcard_set_defaults(&cfg->sdcard);
}
bool mgos_config_user_parse_f(const char *fname, struct mgos_config_user *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_user_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* struct mgos_config */
const struct mgos_conf_entry *mgos_config_get_schema(void) {
  return &mgos_config_schema_[0];
}

void mgos_config_set_defaults(struct mgos_config *cfg) {
  mgos_config_debug_set_defaults(&cfg->debug);
  mgos_config_device_set_defaults(&cfg->device);
  mgos_config_sys_set_defaults(&cfg->sys);
  cfg->conf_acl = "*";
  mgos_config_bt_set_defaults(&cfg->bt);
  mgos_config_eth_set_defaults(&cfg->eth);
  mgos_config_mjs_set_defaults(&cfg->mjs);
  mgos_config_rpc_set_defaults(&cfg->rpc);
  mgos_config_user_set_defaults(&cfg->user);
}
bool mgos_config_parse_f(const char *fname, struct mgos_config *cfg) {
  size_t len;
  char *data = cs_read_file(fname, &len);
  if (data == NULL) return false;
  bool res = mgos_config_parse(mg_mk_str_n(data, len), cfg);
  free(data);
  return res;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Accessors */

/* debug */
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg) { return &cfg->debug; }

/* debug.udp_log_addr */
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg) { return cfg->debug.udp_log_addr; }
const char * mgos_config_get_default_debug_udp_log_addr(void) { return NULL; }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.udp_log_addr, v); }

/* debug.udp_log_level */
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg) { return cfg->debug.udp_log_level; }
int mgos_config_get_default_debug_udp_log_level(void) { return 3; }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v) { cfg->debug.udp_log_level = v; }

/* debug.mbedtls_level */
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg) { return cfg->debug.mbedtls_level; }
int mgos_config_get_default_debug_mbedtls_level(void) { return 0; }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) { cfg->debug.mbedtls_level = v; }

/* debug.level */
int mgos_config_get_debug_level(const struct mgos_config *cfg) { return cfg->debug.level; }
int mgos_config_get_default_debug_level(void) { return 2; }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) { cfg->debug.level = v; }

/* debug.file_level */
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg) { return cfg->debug.file_level; }
const char * mgos_config_get_default_debug_file_level(void) { return NULL; }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.file_level, v); }

/* debug.event_level */
int mgos_config_get_debug_event_level(const struct mgos_config *cfg) { return cfg->debug.event_level; }
int mgos_config_get_default_debug_event_level(void) { return 2; }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v) { cfg->debug.event_level = v; }

/* debug.stdout_uart */
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg) { return cfg->debug.stdout_uart; }
int mgos_config_get_default_debug_stdout_uart(void) { return 0; }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) { cfg->debug.stdout_uart = v; }

/* debug.stderr_uart */
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg) { return cfg->debug.stderr_uart; }
int mgos_config_get_default_debug_stderr_uart(void) { return 0; }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) { cfg->debug.stderr_uart = v; }

/* debug.factory_reset_gpio */
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg) { return cfg->debug.factory_reset_gpio; }
int mgos_config_get_default_debug_factory_reset_gpio(void) { return -1; }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) { cfg->debug.factory_reset_gpio = v; }

/* debug.mg_mgr_hexdump_file */
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg) { return cfg->debug.mg_mgr_hexdump_file; }
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void) { return NULL; }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v); }

/* device */
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg) { return &cfg->device; }

/* device.id */
const char * mgos_config_get_device_id(const struct mgos_config *cfg) { return cfg->device.id; }
const char * mgos_config_get_default_device_id(void) { return "esp32_??????"; }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.id, v); }

/* device.license */
const char * mgos_config_get_device_license(const struct mgos_config *cfg) { return cfg->device.license; }
const char * mgos_config_get_default_device_license(void) { return NULL; }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.license, v); }

/* device.mac */
const char * mgos_config_get_device_mac(const struct mgos_config *cfg) { return cfg->device.mac; }
const char * mgos_config_get_default_device_mac(void) { return NULL; }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.mac, v); }

/* device.public_key */
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg) { return cfg->device.public_key; }
const char * mgos_config_get_default_device_public_key(void) { return NULL; }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.public_key, v); }

/* device.sn */
const char * mgos_config_get_device_sn(const struct mgos_config *cfg) { return cfg->device.sn; }
const char * mgos_config_get_default_device_sn(void) { return NULL; }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.sn, v); }

/* sys */
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg) { return &cfg->sys; }

/* sys.tz_spec */
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg) { return cfg->sys.tz_spec; }
const char * mgos_config_get_default_sys_tz_spec(void) { return NULL; }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.tz_spec, v); }

/* sys.wdt_timeout */
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg) { return cfg->sys.wdt_timeout; }
int mgos_config_get_default_sys_wdt_timeout(void) { return 30; }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) { cfg->sys.wdt_timeout = v; }

/* sys.pref_ota_lib */
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg) { return cfg->sys.pref_ota_lib; }
const char * mgos_config_get_default_sys_pref_ota_lib(void) { return NULL; }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.pref_ota_lib, v); }

/* conf_acl */
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg) { return cfg->conf_acl; }
const char * mgos_config_get_default_conf_acl(void) { return "*"; }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->conf_acl, v); }

/* bt */
const struct mgos_config_bt *mgos_config_get_bt(const struct mgos_config *cfg) { return &cfg->bt; }

/* bt.enable */
int mgos_config_get_bt_enable(const struct mgos_config *cfg) { return cfg->bt.enable; }
int mgos_config_get_default_bt_enable(void) { return false; }
void mgos_config_set_bt_enable(struct mgos_config *cfg, int v) { cfg->bt.enable = v; }

/* bt.dev_name */
const char * mgos_config_get_bt_dev_name(const struct mgos_config *cfg) { return cfg->bt.dev_name; }
const char * mgos_config_get_default_bt_dev_name(void) { return NULL; }
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->bt.dev_name, v); }

/* bt.adv_enable */
int mgos_config_get_bt_adv_enable(const struct mgos_config *cfg) { return cfg->bt.adv_enable; }
int mgos_config_get_default_bt_adv_enable(void) { return true; }
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int v) { cfg->bt.adv_enable = v; }

/* bt.scan_rsp_data_hex */
const char * mgos_config_get_bt_scan_rsp_data_hex(const struct mgos_config *cfg) { return cfg->bt.scan_rsp_data_hex; }
const char * mgos_config_get_default_bt_scan_rsp_data_hex(void) { return NULL; }
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->bt.scan_rsp_data_hex, v); }

/* bt.keep_enabled */
int mgos_config_get_bt_keep_enabled(const struct mgos_config *cfg) { return cfg->bt.keep_enabled; }
int mgos_config_get_default_bt_keep_enabled(void) { return false; }
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int v) { cfg->bt.keep_enabled = v; }

/* bt.allow_pairing */
int mgos_config_get_bt_allow_pairing(const struct mgos_config *cfg) { return cfg->bt.allow_pairing; }
int mgos_config_get_default_bt_allow_pairing(void) { return true; }
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int v) { cfg->bt.allow_pairing = v; }

/* bt.max_paired_devices */
int mgos_config_get_bt_max_paired_devices(const struct mgos_config *cfg) { return cfg->bt.max_paired_devices; }
int mgos_config_get_default_bt_max_paired_devices(void) { return -1; }
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int v) { cfg->bt.max_paired_devices = v; }

/* bt.random_address */
int mgos_config_get_bt_random_address(const struct mgos_config *cfg) { return cfg->bt.random_address; }
int mgos_config_get_default_bt_random_address(void) { return false; }
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int v) { cfg->bt.random_address = v; }

/* bt.gatt_mtu */
int mgos_config_get_bt_gatt_mtu(const struct mgos_config *cfg) { return cfg->bt.gatt_mtu; }
int mgos_config_get_default_bt_gatt_mtu(void) { return 500; }
void mgos_config_set_bt_gatt_mtu(struct mgos_config *cfg, int v) { cfg->bt.gatt_mtu = v; }

/* bt.gatts */
const struct mgos_config_bt_gatts *mgos_config_get_bt_gatts(const struct mgos_config *cfg) { return &cfg->bt.gatts; }

/* bt.gatts.min_sec_level */
int mgos_config_get_bt_gatts_min_sec_level(const struct mgos_config *cfg) { return cfg->bt.gatts.min_sec_level; }
int mgos_config_get_default_bt_gatts_min_sec_level(void) { return 0; }
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int v) { cfg->bt.gatts.min_sec_level = v; }

/* bt.debug_svc_enable */
int mgos_config_get_bt_debug_svc_enable(const struct mgos_config *cfg) { return cfg->bt.debug_svc_enable; }
int mgos_config_get_default_bt_debug_svc_enable(void) { return true; }
void mgos_config_set_bt_debug_svc_enable(struct mgos_config *cfg, int v) { cfg->bt.debug_svc_enable = v; }

/* bt.debug_svc_sec_level */
int mgos_config_get_bt_debug_svc_sec_level(const struct mgos_config *cfg) { return cfg->bt.debug_svc_sec_level; }
int mgos_config_get_default_bt_debug_svc_sec_level(void) { return 0; }
void mgos_config_set_bt_debug_svc_sec_level(struct mgos_config *cfg, int v) { cfg->bt.debug_svc_sec_level = v; }

/* eth */
const struct mgos_config_eth *mgos_config_get_eth(const struct mgos_config *cfg) { return &cfg->eth; }

/* eth.enable */
int mgos_config_get_eth_enable(const struct mgos_config *cfg) { return cfg->eth.enable; }
int mgos_config_get_default_eth_enable(void) { return false; }
void mgos_config_set_eth_enable(struct mgos_config *cfg, int v) { cfg->eth.enable = v; }

/* eth.phy_addr */
int mgos_config_get_eth_phy_addr(const struct mgos_config *cfg) { return cfg->eth.phy_addr; }
int mgos_config_get_default_eth_phy_addr(void) { return 0; }
void mgos_config_set_eth_phy_addr(struct mgos_config *cfg, int v) { cfg->eth.phy_addr = v; }

/* eth.ip */
const char * mgos_config_get_eth_ip(const struct mgos_config *cfg) { return cfg->eth.ip; }
const char * mgos_config_get_default_eth_ip(void) { return NULL; }
void mgos_config_set_eth_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.ip, v); }

/* eth.netmask */
const char * mgos_config_get_eth_netmask(const struct mgos_config *cfg) { return cfg->eth.netmask; }
const char * mgos_config_get_default_eth_netmask(void) { return NULL; }
void mgos_config_set_eth_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.netmask, v); }

/* eth.gw */
const char * mgos_config_get_eth_gw(const struct mgos_config *cfg) { return cfg->eth.gw; }
const char * mgos_config_get_default_eth_gw(void) { return NULL; }
void mgos_config_set_eth_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.gw, v); }

/* eth.nameserver */
const char * mgos_config_get_eth_nameserver(const struct mgos_config *cfg) { return cfg->eth.nameserver; }
const char * mgos_config_get_default_eth_nameserver(void) { return NULL; }
void mgos_config_set_eth_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.nameserver, v); }

/* eth.dhcp_hostname */
const char * mgos_config_get_eth_dhcp_hostname(const struct mgos_config *cfg) { return cfg->eth.dhcp_hostname; }
const char * mgos_config_get_default_eth_dhcp_hostname(void) { return NULL; }
void mgos_config_set_eth_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->eth.dhcp_hostname, v); }

/* eth.clk_mode */
int mgos_config_get_eth_clk_mode(const struct mgos_config *cfg) { return cfg->eth.clk_mode; }
int mgos_config_get_default_eth_clk_mode(void) { return 0; }
void mgos_config_set_eth_clk_mode(struct mgos_config *cfg, int v) { cfg->eth.clk_mode = v; }

/* eth.mdc_gpio */
int mgos_config_get_eth_mdc_gpio(const struct mgos_config *cfg) { return cfg->eth.mdc_gpio; }
int mgos_config_get_default_eth_mdc_gpio(void) { return 23; }
void mgos_config_set_eth_mdc_gpio(struct mgos_config *cfg, int v) { cfg->eth.mdc_gpio = v; }

/* eth.mdio_gpio */
int mgos_config_get_eth_mdio_gpio(const struct mgos_config *cfg) { return cfg->eth.mdio_gpio; }
int mgos_config_get_default_eth_mdio_gpio(void) { return 18; }
void mgos_config_set_eth_mdio_gpio(struct mgos_config *cfg, int v) { cfg->eth.mdio_gpio = v; }

/* eth.phy_pwr_gpio */
int mgos_config_get_eth_phy_pwr_gpio(const struct mgos_config *cfg) { return cfg->eth.phy_pwr_gpio; }
int mgos_config_get_default_eth_phy_pwr_gpio(void) { return -1; }
void mgos_config_set_eth_phy_pwr_gpio(struct mgos_config *cfg, int v) { cfg->eth.phy_pwr_gpio = v; }

/* mjs */
const struct mgos_config_mjs *mgos_config_get_mjs(const struct mgos_config *cfg) { return &cfg->mjs; }

/* mjs.generate_jsc */
int mgos_config_get_mjs_generate_jsc(const struct mgos_config *cfg) { return cfg->mjs.generate_jsc; }
int mgos_config_get_default_mjs_generate_jsc(void) { return true; }
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v) { cfg->mjs.generate_jsc = v; }

/* rpc */
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg) { return &cfg->rpc; }

/* rpc.enable */
int mgos_config_get_rpc_enable(const struct mgos_config *cfg) { return cfg->rpc.enable; }
int mgos_config_get_default_rpc_enable(void) { return true; }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) { cfg->rpc.enable = v; }

/* rpc.http_enable */
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg) { return cfg->rpc.http_enable; }
int mgos_config_get_default_rpc_http_enable(void) { return true; }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v) { cfg->rpc.http_enable = v; }

/* rpc.service_sys_enable */
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg) { return cfg->rpc.service_sys_enable; }
int mgos_config_get_default_rpc_service_sys_enable(void) { return true; }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v) { cfg->rpc.service_sys_enable = v; }

/* rpc.max_frame_size */
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg) { return cfg->rpc.max_frame_size; }
int mgos_config_get_default_rpc_max_frame_size(void) { return 4096; }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) { cfg->rpc.max_frame_size = v; }

/* rpc.max_queue_length */
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg) { return cfg->rpc.max_queue_length; }
int mgos_config_get_default_rpc_max_queue_length(void) { return 25; }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) { cfg->rpc.max_queue_length = v; }

/* rpc.max_non_persistent_channels */
int mgos_config_get_rpc_max_non_persistent_channels(const struct mgos_config *cfg) { return cfg->rpc.max_non_persistent_channels; }
int mgos_config_get_default_rpc_max_non_persistent_channels(void) { return 20; }
void mgos_config_set_rpc_max_non_persistent_channels(struct mgos_config *cfg, int v) { cfg->rpc.max_non_persistent_channels = v; }

/* rpc.default_out_channel_idle_close_timeout */
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg) { return cfg->rpc.default_out_channel_idle_close_timeout; }
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return 10; }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) { cfg->rpc.default_out_channel_idle_close_timeout = v; }

/* rpc.acl */
const char * mgos_config_get_rpc_acl(const struct mgos_config *cfg) { return cfg->rpc.acl; }
const char * mgos_config_get_default_rpc_acl(void) { return NULL; }
void mgos_config_set_rpc_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl, v); }

/* rpc.acl_file */
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg) { return cfg->rpc.acl_file; }
const char * mgos_config_get_default_rpc_acl_file(void) { return NULL; }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl_file, v); }

/* rpc.auth_domain */
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg) { return cfg->rpc.auth_domain; }
const char * mgos_config_get_default_rpc_auth_domain(void) { return "RPC"; }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_domain, v); }

/* rpc.auth_file */
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg) { return cfg->rpc.auth_file; }
const char * mgos_config_get_default_rpc_auth_file(void) { return NULL; }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_file, v); }

/* rpc.auth_algo */
int mgos_config_get_rpc_auth_algo(const struct mgos_config *cfg) { return cfg->rpc.auth_algo; }
int mgos_config_get_default_rpc_auth_algo(void) { return 0; }
void mgos_config_set_rpc_auth_algo(struct mgos_config *cfg, int v) { cfg->rpc.auth_algo = v; }

/* rpc.uart */
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg) { return &cfg->rpc.uart; }

/* rpc.uart.uart_no */
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg) { return cfg->rpc.uart.uart_no; }
int mgos_config_get_default_rpc_uart_uart_no(void) { return 0; }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) { cfg->rpc.uart.uart_no = v; }

/* rpc.uart.baud_rate */
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg) { return cfg->rpc.uart.baud_rate; }
int mgos_config_get_default_rpc_uart_baud_rate(void) { return 115200; }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) { cfg->rpc.uart.baud_rate = v; }

/* rpc.uart.fc_type */
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg) { return cfg->rpc.uart.fc_type; }
int mgos_config_get_default_rpc_uart_fc_type(void) { return 0; }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) { cfg->rpc.uart.fc_type = v; }

/* rpc.uart.dst */
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg) { return cfg->rpc.uart.dst; }
const char * mgos_config_get_default_rpc_uart_dst(void) { return NULL; }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.uart.dst, v); }

/* user */
const struct mgos_config_user *mgos_config_get_user(const struct mgos_config *cfg) { return &cfg->user; }

/* user.lan */
const struct mgos_config_user_lan *mgos_config_get_user_lan(const struct mgos_config *cfg) { return &cfg->user.lan; }

/* user.lan.enable */
int mgos_config_get_user_lan_enable(const struct mgos_config *cfg) { return cfg->user.lan.enable; }
int mgos_config_get_default_user_lan_enable(void) { return 1; }
void mgos_config_set_user_lan_enable(struct mgos_config *cfg, int v) { cfg->user.lan.enable = v; }

/* user.can */
const struct mgos_config_user_can *mgos_config_get_user_can(const struct mgos_config *cfg) { return &cfg->user.can; }

/* user.can.enable */
int mgos_config_get_user_can_enable(const struct mgos_config *cfg) { return cfg->user.can.enable; }
int mgos_config_get_default_user_can_enable(void) { return 0; }
void mgos_config_set_user_can_enable(struct mgos_config *cfg, int v) { cfg->user.can.enable = v; }

/* user.spi */
const struct mgos_config_user_spi *mgos_config_get_user_spi(const struct mgos_config *cfg) { return &cfg->user.spi; }

/* user.spi.enable */
int mgos_config_get_user_spi_enable(const struct mgos_config *cfg) { return cfg->user.spi.enable; }
int mgos_config_get_default_user_spi_enable(void) { return 0; }
void mgos_config_set_user_spi_enable(struct mgos_config *cfg, int v) { cfg->user.spi.enable = v; }

/* user.irtx */
const struct mgos_config_user_irtx *mgos_config_get_user_irtx(const struct mgos_config *cfg) { return &cfg->user.irtx; }

/* user.irtx.enable */
int mgos_config_get_user_irtx_enable(const struct mgos_config *cfg) { return cfg->user.irtx.enable; }
int mgos_config_get_default_user_irtx_enable(void) { return 0; }
void mgos_config_set_user_irtx_enable(struct mgos_config *cfg, int v) { cfg->user.irtx.enable = v; }

/* user.irrx */
const struct mgos_config_user_irrx *mgos_config_get_user_irrx(const struct mgos_config *cfg) { return &cfg->user.irrx; }

/* user.irrx.enable */
int mgos_config_get_user_irrx_enable(const struct mgos_config *cfg) { return cfg->user.irrx.enable; }
int mgos_config_get_default_user_irrx_enable(void) { return 0; }
void mgos_config_set_user_irrx_enable(struct mgos_config *cfg, int v) { cfg->user.irrx.enable = v; }

/* user.sdcard */
const struct mgos_config_user_sdcard *mgos_config_get_user_sdcard(const struct mgos_config *cfg) { return &cfg->user.sdcard; }

/* user.sdcard.enable */
int mgos_config_get_user_sdcard_enable(const struct mgos_config *cfg) { return cfg->user.sdcard.enable; }
int mgos_config_get_default_user_sdcard_enable(void) { return 0; }
void mgos_config_set_user_sdcard_enable(struct mgos_config *cfg, int v) { cfg->user.sdcard.enable = v; }
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}

const struct mgos_conf_entry *mgos_config_schema(void) {
  return mgos_config_get_schema();
}

/* Strings */
static const char *mgos_config_str_table[] = {
  "*",
  "RPC",
  "esp32_??????",
};

bool mgos_config_is_default_str(const char *s) {
  int num_str = (sizeof(mgos_config_str_table) / sizeof(mgos_config_str_table[0]));
  for (int i = 0; i < num_str; i++) {
    if (mgos_config_str_table[i] == s) return true;
  }
  return false;
}

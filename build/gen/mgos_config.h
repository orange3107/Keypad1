/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.20.0/apps/keypad/esp32/build_contexts/build_ctx_470906910/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.20.0/apps/keypad/esp32/build_contexts/build_ctx_470906910/build/gen/mos_conf_schema.yml
 */

#pragma once

#include <stdbool.h>

#include "common/mg_str.h"

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif


/* debug type struct mgos_config_debug */
struct mgos_config_debug {
  const char * udp_log_addr;
  int udp_log_level;
  int mbedtls_level;
  int level;
  const char * file_level;
  int event_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  const char * mg_mgr_hexdump_file;
};
const struct mgos_conf_entry *mgos_config_debug_get_schema(void);
void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg);
static inline bool mgos_config_debug_parse(struct mg_str json, struct mgos_config_debug *cfg) {
  mgos_config_debug_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_debug_get_schema(), cfg);
}
bool mgos_config_debug_parse_f(const char *fname, struct mgos_config_debug *cfg);
static inline bool mgos_config_debug_emit(const struct mgos_config_debug *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_debug_get_schema(), pretty, out);
}
static inline bool mgos_config_debug_emit_f(const struct mgos_config_debug *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_debug_get_schema(), pretty, fname);
}
static inline bool mgos_config_debug_copy(const struct mgos_config_debug *src, struct mgos_config_debug *dst) {
  return mgos_conf_copy(mgos_config_debug_get_schema(), src, dst);
}
static inline void mgos_config_debug_free(struct mgos_config_debug *cfg) {
  return mgos_conf_free(mgos_config_debug_get_schema(), cfg);
}

/* device type struct mgos_config_device */
struct mgos_config_device {
  const char * id;
  const char * license;
  const char * mac;
  const char * public_key;
  const char * sn;
};
const struct mgos_conf_entry *mgos_config_device_get_schema(void);
void mgos_config_device_set_defaults(struct mgos_config_device *cfg);
static inline bool mgos_config_device_parse(struct mg_str json, struct mgos_config_device *cfg) {
  mgos_config_device_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_device_get_schema(), cfg);
}
bool mgos_config_device_parse_f(const char *fname, struct mgos_config_device *cfg);
static inline bool mgos_config_device_emit(const struct mgos_config_device *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_device_get_schema(), pretty, out);
}
static inline bool mgos_config_device_emit_f(const struct mgos_config_device *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_device_get_schema(), pretty, fname);
}
static inline bool mgos_config_device_copy(const struct mgos_config_device *src, struct mgos_config_device *dst) {
  return mgos_conf_copy(mgos_config_device_get_schema(), src, dst);
}
static inline void mgos_config_device_free(struct mgos_config_device *cfg) {
  return mgos_conf_free(mgos_config_device_get_schema(), cfg);
}

/* sys type struct mgos_config_sys */
struct mgos_config_sys {
  const char * tz_spec;
  int wdt_timeout;
  const char * pref_ota_lib;
};
const struct mgos_conf_entry *mgos_config_sys_get_schema(void);
void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg);
static inline bool mgos_config_sys_parse(struct mg_str json, struct mgos_config_sys *cfg) {
  mgos_config_sys_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_sys_get_schema(), cfg);
}
bool mgos_config_sys_parse_f(const char *fname, struct mgos_config_sys *cfg);
static inline bool mgos_config_sys_emit(const struct mgos_config_sys *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_sys_get_schema(), pretty, out);
}
static inline bool mgos_config_sys_emit_f(const struct mgos_config_sys *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_sys_get_schema(), pretty, fname);
}
static inline bool mgos_config_sys_copy(const struct mgos_config_sys *src, struct mgos_config_sys *dst) {
  return mgos_conf_copy(mgos_config_sys_get_schema(), src, dst);
}
static inline void mgos_config_sys_free(struct mgos_config_sys *cfg) {
  return mgos_conf_free(mgos_config_sys_get_schema(), cfg);
}

/* bt.gatts type struct mgos_config_bt_gatts */
struct mgos_config_bt_gatts {
  int min_sec_level;
};
const struct mgos_conf_entry *mgos_config_bt_gatts_get_schema(void);
void mgos_config_bt_gatts_set_defaults(struct mgos_config_bt_gatts *cfg);
static inline bool mgos_config_bt_gatts_parse(struct mg_str json, struct mgos_config_bt_gatts *cfg) {
  mgos_config_bt_gatts_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_bt_gatts_get_schema(), cfg);
}
bool mgos_config_bt_gatts_parse_f(const char *fname, struct mgos_config_bt_gatts *cfg);
static inline bool mgos_config_bt_gatts_emit(const struct mgos_config_bt_gatts *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_bt_gatts_get_schema(), pretty, out);
}
static inline bool mgos_config_bt_gatts_emit_f(const struct mgos_config_bt_gatts *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_bt_gatts_get_schema(), pretty, fname);
}
static inline bool mgos_config_bt_gatts_copy(const struct mgos_config_bt_gatts *src, struct mgos_config_bt_gatts *dst) {
  return mgos_conf_copy(mgos_config_bt_gatts_get_schema(), src, dst);
}
static inline void mgos_config_bt_gatts_free(struct mgos_config_bt_gatts *cfg) {
  return mgos_conf_free(mgos_config_bt_gatts_get_schema(), cfg);
}

/* bt type struct mgos_config_bt */
struct mgos_config_bt {
  int enable;
  const char * dev_name;
  int adv_enable;
  const char * scan_rsp_data_hex;
  int keep_enabled;
  int allow_pairing;
  int max_paired_devices;
  int random_address;
  int gatt_mtu;
  struct mgos_config_bt_gatts gatts;
  int debug_svc_enable;
  int debug_svc_sec_level;
};
const struct mgos_conf_entry *mgos_config_bt_get_schema(void);
void mgos_config_bt_set_defaults(struct mgos_config_bt *cfg);
static inline bool mgos_config_bt_parse(struct mg_str json, struct mgos_config_bt *cfg) {
  mgos_config_bt_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_bt_get_schema(), cfg);
}
bool mgos_config_bt_parse_f(const char *fname, struct mgos_config_bt *cfg);
static inline bool mgos_config_bt_emit(const struct mgos_config_bt *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_bt_get_schema(), pretty, out);
}
static inline bool mgos_config_bt_emit_f(const struct mgos_config_bt *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_bt_get_schema(), pretty, fname);
}
static inline bool mgos_config_bt_copy(const struct mgos_config_bt *src, struct mgos_config_bt *dst) {
  return mgos_conf_copy(mgos_config_bt_get_schema(), src, dst);
}
static inline void mgos_config_bt_free(struct mgos_config_bt *cfg) {
  return mgos_conf_free(mgos_config_bt_get_schema(), cfg);
}

/* eth type struct mgos_config_eth */
struct mgos_config_eth {
  int enable;
  int phy_addr;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * nameserver;
  const char * dhcp_hostname;
  int clk_mode;
  int mdc_gpio;
  int mdio_gpio;
  int phy_pwr_gpio;
};
const struct mgos_conf_entry *mgos_config_eth_get_schema(void);
void mgos_config_eth_set_defaults(struct mgos_config_eth *cfg);
static inline bool mgos_config_eth_parse(struct mg_str json, struct mgos_config_eth *cfg) {
  mgos_config_eth_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_eth_get_schema(), cfg);
}
bool mgos_config_eth_parse_f(const char *fname, struct mgos_config_eth *cfg);
static inline bool mgos_config_eth_emit(const struct mgos_config_eth *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_eth_get_schema(), pretty, out);
}
static inline bool mgos_config_eth_emit_f(const struct mgos_config_eth *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_eth_get_schema(), pretty, fname);
}
static inline bool mgos_config_eth_copy(const struct mgos_config_eth *src, struct mgos_config_eth *dst) {
  return mgos_conf_copy(mgos_config_eth_get_schema(), src, dst);
}
static inline void mgos_config_eth_free(struct mgos_config_eth *cfg) {
  return mgos_conf_free(mgos_config_eth_get_schema(), cfg);
}

/* mjs type struct mgos_config_mjs */
struct mgos_config_mjs {
  int generate_jsc;
};
const struct mgos_conf_entry *mgos_config_mjs_get_schema(void);
void mgos_config_mjs_set_defaults(struct mgos_config_mjs *cfg);
static inline bool mgos_config_mjs_parse(struct mg_str json, struct mgos_config_mjs *cfg) {
  mgos_config_mjs_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mjs_get_schema(), cfg);
}
bool mgos_config_mjs_parse_f(const char *fname, struct mgos_config_mjs *cfg);
static inline bool mgos_config_mjs_emit(const struct mgos_config_mjs *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mjs_get_schema(), pretty, out);
}
static inline bool mgos_config_mjs_emit_f(const struct mgos_config_mjs *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mjs_get_schema(), pretty, fname);
}
static inline bool mgos_config_mjs_copy(const struct mgos_config_mjs *src, struct mgos_config_mjs *dst) {
  return mgos_conf_copy(mgos_config_mjs_get_schema(), src, dst);
}
static inline void mgos_config_mjs_free(struct mgos_config_mjs *cfg) {
  return mgos_conf_free(mgos_config_mjs_get_schema(), cfg);
}

/* rpc.uart type struct mgos_config_rpc_uart */
struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  const char * dst;
};
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void);
void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg);
static inline bool mgos_config_rpc_uart_parse(struct mg_str json, struct mgos_config_rpc_uart *cfg) {
  mgos_config_rpc_uart_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_uart_get_schema(), cfg);
}
bool mgos_config_rpc_uart_parse_f(const char *fname, struct mgos_config_rpc_uart *cfg);
static inline bool mgos_config_rpc_uart_emit(const struct mgos_config_rpc_uart *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_uart_emit_f(const struct mgos_config_rpc_uart *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_uart_copy(const struct mgos_config_rpc_uart *src, struct mgos_config_rpc_uart *dst) {
  return mgos_conf_copy(mgos_config_rpc_uart_get_schema(), src, dst);
}
static inline void mgos_config_rpc_uart_free(struct mgos_config_rpc_uart *cfg) {
  return mgos_conf_free(mgos_config_rpc_uart_get_schema(), cfg);
}

/* rpc type struct mgos_config_rpc */
struct mgos_config_rpc {
  int enable;
  int http_enable;
  int service_sys_enable;
  int max_frame_size;
  int max_queue_length;
  int max_non_persistent_channels;
  int default_out_channel_idle_close_timeout;
  const char * acl;
  const char * acl_file;
  const char * auth_domain;
  const char * auth_file;
  int auth_algo;
  struct mgos_config_rpc_uart uart;
};
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void);
void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg);
static inline bool mgos_config_rpc_parse(struct mg_str json, struct mgos_config_rpc *cfg) {
  mgos_config_rpc_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_get_schema(), cfg);
}
bool mgos_config_rpc_parse_f(const char *fname, struct mgos_config_rpc *cfg);
static inline bool mgos_config_rpc_emit(const struct mgos_config_rpc *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_emit_f(const struct mgos_config_rpc *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_copy(const struct mgos_config_rpc *src, struct mgos_config_rpc *dst) {
  return mgos_conf_copy(mgos_config_rpc_get_schema(), src, dst);
}
static inline void mgos_config_rpc_free(struct mgos_config_rpc *cfg) {
  return mgos_conf_free(mgos_config_rpc_get_schema(), cfg);
}

/* user.lan type struct mgos_config_user_lan */
struct mgos_config_user_lan {
  int enable;
};
const struct mgos_conf_entry *mgos_config_user_lan_get_schema(void);
void mgos_config_user_lan_set_defaults(struct mgos_config_user_lan *cfg);
static inline bool mgos_config_user_lan_parse(struct mg_str json, struct mgos_config_user_lan *cfg) {
  mgos_config_user_lan_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_lan_get_schema(), cfg);
}
bool mgos_config_user_lan_parse_f(const char *fname, struct mgos_config_user_lan *cfg);
static inline bool mgos_config_user_lan_emit(const struct mgos_config_user_lan *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_lan_get_schema(), pretty, out);
}
static inline bool mgos_config_user_lan_emit_f(const struct mgos_config_user_lan *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_lan_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_lan_copy(const struct mgos_config_user_lan *src, struct mgos_config_user_lan *dst) {
  return mgos_conf_copy(mgos_config_user_lan_get_schema(), src, dst);
}
static inline void mgos_config_user_lan_free(struct mgos_config_user_lan *cfg) {
  return mgos_conf_free(mgos_config_user_lan_get_schema(), cfg);
}

/* user.can type struct mgos_config_user_can */
struct mgos_config_user_can {
  int enable;
};
const struct mgos_conf_entry *mgos_config_user_can_get_schema(void);
void mgos_config_user_can_set_defaults(struct mgos_config_user_can *cfg);
static inline bool mgos_config_user_can_parse(struct mg_str json, struct mgos_config_user_can *cfg) {
  mgos_config_user_can_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_can_get_schema(), cfg);
}
bool mgos_config_user_can_parse_f(const char *fname, struct mgos_config_user_can *cfg);
static inline bool mgos_config_user_can_emit(const struct mgos_config_user_can *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_can_get_schema(), pretty, out);
}
static inline bool mgos_config_user_can_emit_f(const struct mgos_config_user_can *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_can_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_can_copy(const struct mgos_config_user_can *src, struct mgos_config_user_can *dst) {
  return mgos_conf_copy(mgos_config_user_can_get_schema(), src, dst);
}
static inline void mgos_config_user_can_free(struct mgos_config_user_can *cfg) {
  return mgos_conf_free(mgos_config_user_can_get_schema(), cfg);
}

/* user.spi type struct mgos_config_user_spi */
struct mgos_config_user_spi {
  int enable;
};
const struct mgos_conf_entry *mgos_config_user_spi_get_schema(void);
void mgos_config_user_spi_set_defaults(struct mgos_config_user_spi *cfg);
static inline bool mgos_config_user_spi_parse(struct mg_str json, struct mgos_config_user_spi *cfg) {
  mgos_config_user_spi_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_spi_get_schema(), cfg);
}
bool mgos_config_user_spi_parse_f(const char *fname, struct mgos_config_user_spi *cfg);
static inline bool mgos_config_user_spi_emit(const struct mgos_config_user_spi *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_spi_get_schema(), pretty, out);
}
static inline bool mgos_config_user_spi_emit_f(const struct mgos_config_user_spi *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_spi_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_spi_copy(const struct mgos_config_user_spi *src, struct mgos_config_user_spi *dst) {
  return mgos_conf_copy(mgos_config_user_spi_get_schema(), src, dst);
}
static inline void mgos_config_user_spi_free(struct mgos_config_user_spi *cfg) {
  return mgos_conf_free(mgos_config_user_spi_get_schema(), cfg);
}

/* user.irtx type struct mgos_config_user_irtx */
struct mgos_config_user_irtx {
  int enable;
};
const struct mgos_conf_entry *mgos_config_user_irtx_get_schema(void);
void mgos_config_user_irtx_set_defaults(struct mgos_config_user_irtx *cfg);
static inline bool mgos_config_user_irtx_parse(struct mg_str json, struct mgos_config_user_irtx *cfg) {
  mgos_config_user_irtx_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_irtx_get_schema(), cfg);
}
bool mgos_config_user_irtx_parse_f(const char *fname, struct mgos_config_user_irtx *cfg);
static inline bool mgos_config_user_irtx_emit(const struct mgos_config_user_irtx *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_irtx_get_schema(), pretty, out);
}
static inline bool mgos_config_user_irtx_emit_f(const struct mgos_config_user_irtx *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_irtx_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_irtx_copy(const struct mgos_config_user_irtx *src, struct mgos_config_user_irtx *dst) {
  return mgos_conf_copy(mgos_config_user_irtx_get_schema(), src, dst);
}
static inline void mgos_config_user_irtx_free(struct mgos_config_user_irtx *cfg) {
  return mgos_conf_free(mgos_config_user_irtx_get_schema(), cfg);
}

/* user.irrx type struct mgos_config_user_irrx */
struct mgos_config_user_irrx {
  int enable;
};
const struct mgos_conf_entry *mgos_config_user_irrx_get_schema(void);
void mgos_config_user_irrx_set_defaults(struct mgos_config_user_irrx *cfg);
static inline bool mgos_config_user_irrx_parse(struct mg_str json, struct mgos_config_user_irrx *cfg) {
  mgos_config_user_irrx_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_irrx_get_schema(), cfg);
}
bool mgos_config_user_irrx_parse_f(const char *fname, struct mgos_config_user_irrx *cfg);
static inline bool mgos_config_user_irrx_emit(const struct mgos_config_user_irrx *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_irrx_get_schema(), pretty, out);
}
static inline bool mgos_config_user_irrx_emit_f(const struct mgos_config_user_irrx *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_irrx_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_irrx_copy(const struct mgos_config_user_irrx *src, struct mgos_config_user_irrx *dst) {
  return mgos_conf_copy(mgos_config_user_irrx_get_schema(), src, dst);
}
static inline void mgos_config_user_irrx_free(struct mgos_config_user_irrx *cfg) {
  return mgos_conf_free(mgos_config_user_irrx_get_schema(), cfg);
}

/* user.sdcard type struct mgos_config_user_sdcard */
struct mgos_config_user_sdcard {
  int enable;
};
const struct mgos_conf_entry *mgos_config_user_sdcard_get_schema(void);
void mgos_config_user_sdcard_set_defaults(struct mgos_config_user_sdcard *cfg);
static inline bool mgos_config_user_sdcard_parse(struct mg_str json, struct mgos_config_user_sdcard *cfg) {
  mgos_config_user_sdcard_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_sdcard_get_schema(), cfg);
}
bool mgos_config_user_sdcard_parse_f(const char *fname, struct mgos_config_user_sdcard *cfg);
static inline bool mgos_config_user_sdcard_emit(const struct mgos_config_user_sdcard *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_sdcard_get_schema(), pretty, out);
}
static inline bool mgos_config_user_sdcard_emit_f(const struct mgos_config_user_sdcard *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_sdcard_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_sdcard_copy(const struct mgos_config_user_sdcard *src, struct mgos_config_user_sdcard *dst) {
  return mgos_conf_copy(mgos_config_user_sdcard_get_schema(), src, dst);
}
static inline void mgos_config_user_sdcard_free(struct mgos_config_user_sdcard *cfg) {
  return mgos_conf_free(mgos_config_user_sdcard_get_schema(), cfg);
}

/* user type struct mgos_config_user */
struct mgos_config_user {
  struct mgos_config_user_lan lan;
  struct mgos_config_user_can can;
  struct mgos_config_user_spi spi;
  struct mgos_config_user_irtx irtx;
  struct mgos_config_user_irrx irrx;
  struct mgos_config_user_sdcard sdcard;
};
const struct mgos_conf_entry *mgos_config_user_get_schema(void);
void mgos_config_user_set_defaults(struct mgos_config_user *cfg);
static inline bool mgos_config_user_parse(struct mg_str json, struct mgos_config_user *cfg) {
  mgos_config_user_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_user_get_schema(), cfg);
}
bool mgos_config_user_parse_f(const char *fname, struct mgos_config_user *cfg);
static inline bool mgos_config_user_emit(const struct mgos_config_user *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_user_get_schema(), pretty, out);
}
static inline bool mgos_config_user_emit_f(const struct mgos_config_user *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_user_get_schema(), pretty, fname);
}
static inline bool mgos_config_user_copy(const struct mgos_config_user *src, struct mgos_config_user *dst) {
  return mgos_conf_copy(mgos_config_user_get_schema(), src, dst);
}
static inline void mgos_config_user_free(struct mgos_config_user *cfg) {
  return mgos_conf_free(mgos_config_user_get_schema(), cfg);
}

/* <root> type struct mgos_config */
struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_device device;
  struct mgos_config_sys sys;
  const char * conf_acl;
  struct mgos_config_bt bt;
  struct mgos_config_eth eth;
  struct mgos_config_mjs mjs;
  struct mgos_config_rpc rpc;
  struct mgos_config_user user;
};
const struct mgos_conf_entry *mgos_config_get_schema(void);
void mgos_config_set_defaults(struct mgos_config *cfg);
static inline bool mgos_config_parse(struct mg_str json, struct mgos_config *cfg) {
  mgos_config_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_get_schema(), cfg);
}
bool mgos_config_parse_f(const char *fname, struct mgos_config *cfg);
static inline bool mgos_config_emit(const struct mgos_config *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_get_schema(), pretty, out);
}
static inline bool mgos_config_emit_f(const struct mgos_config *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_get_schema(), pretty, fname);
}
static inline bool mgos_config_copy(const struct mgos_config *src, struct mgos_config *dst) {
  return mgos_conf_copy(mgos_config_get_schema(), src, dst);
}
static inline void mgos_config_free(struct mgos_config *cfg) {
  return mgos_conf_free(mgos_config_get_schema(), cfg);
}

extern struct mgos_config mgos_sys_config;

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg);
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_udp_log_addr(void);
static inline const char * mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_udp_log_addr(void) { return mgos_config_get_default_debug_udp_log_addr(); }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_udp_log_addr(const char * v) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, v); }

/* debug.udp_log_level */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_udp_log_level(void);
static inline int mgos_sys_config_get_debug_udp_log_level(void) { return mgos_config_get_debug_udp_log_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_udp_log_level(void) { return mgos_config_get_default_debug_udp_log_level(); }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_udp_log_level(int v) { mgos_config_set_debug_udp_log_level(&mgos_sys_config, v); }

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_mbedtls_level(void);
static inline int mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_mbedtls_level(void) { return mgos_config_get_default_debug_mbedtls_level(); }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_mbedtls_level(int v) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, v); }

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_level(void);
static inline int mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_level(void) { return mgos_config_get_default_debug_level(); }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_level(int v) { mgos_config_set_debug_level(&mgos_sys_config, v); }

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_file_level(void);
static inline const char * mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_file_level(void) { return mgos_config_get_default_debug_file_level(); }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_file_level(const char * v) { mgos_config_set_debug_file_level(&mgos_sys_config, v); }

/* debug.event_level */
#define MGOS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
int mgos_config_get_debug_event_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_event_level(void);
static inline int mgos_sys_config_get_debug_event_level(void) { return mgos_config_get_debug_event_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_event_level(void) { return mgos_config_get_default_debug_event_level(); }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_event_level(int v) { mgos_config_set_debug_event_level(&mgos_sys_config, v); }

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stdout_uart(void);
static inline int mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stdout_uart(void) { return mgos_config_get_default_debug_stdout_uart(); }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stdout_uart(int v) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, v); }

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stderr_uart(void);
static inline int mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stderr_uart(void) { return mgos_config_get_default_debug_stderr_uart(); }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stderr_uart(int v) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, v); }

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_debug_factory_reset_gpio(void);
static inline int mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_factory_reset_gpio(void) { return mgos_config_get_default_debug_factory_reset_gpio(); }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int v) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, v); }

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void);
static inline const char * mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_default_debug_mg_mgr_hexdump_file(); }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char * v) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, v); }

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg);
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_id(void);
static inline const char * mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_id(void) { return mgos_config_get_default_device_id(); }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_id(const char * v) { mgos_config_set_device_id(&mgos_sys_config, v); }

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_license(void);
static inline const char * mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_license(void) { return mgos_config_get_default_device_license(); }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_license(const char * v) { mgos_config_set_device_license(&mgos_sys_config, v); }

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_mac(void);
static inline const char * mgos_sys_config_get_device_mac(void) { return mgos_config_get_device_mac(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_mac(void) { return mgos_config_get_default_device_mac(); }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_mac(const char * v) { mgos_config_set_device_mac(&mgos_sys_config, v); }

/* device.public_key */
#define MGOS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
#define MGOS_SYS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_public_key(void);
static inline const char * mgos_sys_config_get_device_public_key(void) { return mgos_config_get_device_public_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_public_key(void) { return mgos_config_get_default_device_public_key(); }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_public_key(const char * v) { mgos_config_set_device_public_key(&mgos_sys_config, v); }

/* device.sn */
#define MGOS_CONFIG_HAVE_DEVICE_SN
#define MGOS_SYS_CONFIG_HAVE_DEVICE_SN
const char * mgos_config_get_device_sn(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_sn(void);
static inline const char * mgos_sys_config_get_device_sn(void) { return mgos_config_get_device_sn(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_sn(void) { return mgos_config_get_default_device_sn(); }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_sn(const char * v) { mgos_config_set_device_sn(&mgos_sys_config, v); }

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg);
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_tz_spec(void);
static inline const char * mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_tz_spec(void) { return mgos_config_get_default_sys_tz_spec(); }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_tz_spec(const char * v) { mgos_config_set_sys_tz_spec(&mgos_sys_config, v); }

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_sys_wdt_timeout(void);
static inline int mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_wdt_timeout(void) { return mgos_config_get_default_sys_wdt_timeout(); }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_wdt_timeout(int v) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, v); }

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_pref_ota_lib(void);
static inline const char * mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_pref_ota_lib(void) { return mgos_config_get_default_sys_pref_ota_lib(); }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char * v) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, v); }

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg);
const char * mgos_config_get_default_conf_acl(void);
static inline const char * mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_conf_acl(void) { return mgos_config_get_default_conf_acl(); }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_conf_acl(const char * v) { mgos_config_set_conf_acl(&mgos_sys_config, v); }

/* bt */
#define MGOS_CONFIG_HAVE_BT
#define MGOS_SYS_CONFIG_HAVE_BT
const struct mgos_config_bt *mgos_config_get_bt(const struct mgos_config *cfg);
static inline const struct mgos_config_bt *mgos_sys_config_get_bt(void) { return mgos_config_get_bt(&mgos_sys_config); }

/* bt.enable */
#define MGOS_CONFIG_HAVE_BT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_ENABLE
int mgos_config_get_bt_enable(const struct mgos_config *cfg);
int mgos_config_get_default_bt_enable(void);
static inline int mgos_sys_config_get_bt_enable(void) { return mgos_config_get_bt_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_enable(void) { return mgos_config_get_default_bt_enable(); }
void mgos_config_set_bt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_enable(int v) { mgos_config_set_bt_enable(&mgos_sys_config, v); }

/* bt.dev_name */
#define MGOS_CONFIG_HAVE_BT_DEV_NAME
#define MGOS_SYS_CONFIG_HAVE_BT_DEV_NAME
const char * mgos_config_get_bt_dev_name(const struct mgos_config *cfg);
const char * mgos_config_get_default_bt_dev_name(void);
static inline const char * mgos_sys_config_get_bt_dev_name(void) { return mgos_config_get_bt_dev_name(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_bt_dev_name(void) { return mgos_config_get_default_bt_dev_name(); }
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_bt_dev_name(const char * v) { mgos_config_set_bt_dev_name(&mgos_sys_config, v); }

/* bt.adv_enable */
#define MGOS_CONFIG_HAVE_BT_ADV_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_ADV_ENABLE
int mgos_config_get_bt_adv_enable(const struct mgos_config *cfg);
int mgos_config_get_default_bt_adv_enable(void);
static inline int mgos_sys_config_get_bt_adv_enable(void) { return mgos_config_get_bt_adv_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_adv_enable(void) { return mgos_config_get_default_bt_adv_enable(); }
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_adv_enable(int v) { mgos_config_set_bt_adv_enable(&mgos_sys_config, v); }

/* bt.scan_rsp_data_hex */
#define MGOS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
#define MGOS_SYS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
const char * mgos_config_get_bt_scan_rsp_data_hex(const struct mgos_config *cfg);
const char * mgos_config_get_default_bt_scan_rsp_data_hex(void);
static inline const char * mgos_sys_config_get_bt_scan_rsp_data_hex(void) { return mgos_config_get_bt_scan_rsp_data_hex(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_bt_scan_rsp_data_hex(void) { return mgos_config_get_default_bt_scan_rsp_data_hex(); }
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_bt_scan_rsp_data_hex(const char * v) { mgos_config_set_bt_scan_rsp_data_hex(&mgos_sys_config, v); }

/* bt.keep_enabled */
#define MGOS_CONFIG_HAVE_BT_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_BT_KEEP_ENABLED
int mgos_config_get_bt_keep_enabled(const struct mgos_config *cfg);
int mgos_config_get_default_bt_keep_enabled(void);
static inline int mgos_sys_config_get_bt_keep_enabled(void) { return mgos_config_get_bt_keep_enabled(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_keep_enabled(void) { return mgos_config_get_default_bt_keep_enabled(); }
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_keep_enabled(int v) { mgos_config_set_bt_keep_enabled(&mgos_sys_config, v); }

/* bt.allow_pairing */
#define MGOS_CONFIG_HAVE_BT_ALLOW_PAIRING
#define MGOS_SYS_CONFIG_HAVE_BT_ALLOW_PAIRING
int mgos_config_get_bt_allow_pairing(const struct mgos_config *cfg);
int mgos_config_get_default_bt_allow_pairing(void);
static inline int mgos_sys_config_get_bt_allow_pairing(void) { return mgos_config_get_bt_allow_pairing(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_allow_pairing(void) { return mgos_config_get_default_bt_allow_pairing(); }
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_allow_pairing(int v) { mgos_config_set_bt_allow_pairing(&mgos_sys_config, v); }

/* bt.max_paired_devices */
#define MGOS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
#define MGOS_SYS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
int mgos_config_get_bt_max_paired_devices(const struct mgos_config *cfg);
int mgos_config_get_default_bt_max_paired_devices(void);
static inline int mgos_sys_config_get_bt_max_paired_devices(void) { return mgos_config_get_bt_max_paired_devices(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_max_paired_devices(void) { return mgos_config_get_default_bt_max_paired_devices(); }
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_max_paired_devices(int v) { mgos_config_set_bt_max_paired_devices(&mgos_sys_config, v); }

/* bt.random_address */
#define MGOS_CONFIG_HAVE_BT_RANDOM_ADDRESS
#define MGOS_SYS_CONFIG_HAVE_BT_RANDOM_ADDRESS
int mgos_config_get_bt_random_address(const struct mgos_config *cfg);
int mgos_config_get_default_bt_random_address(void);
static inline int mgos_sys_config_get_bt_random_address(void) { return mgos_config_get_bt_random_address(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_random_address(void) { return mgos_config_get_default_bt_random_address(); }
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_random_address(int v) { mgos_config_set_bt_random_address(&mgos_sys_config, v); }

/* bt.gatt_mtu */
#define MGOS_CONFIG_HAVE_BT_GATT_MTU
#define MGOS_SYS_CONFIG_HAVE_BT_GATT_MTU
int mgos_config_get_bt_gatt_mtu(const struct mgos_config *cfg);
int mgos_config_get_default_bt_gatt_mtu(void);
static inline int mgos_sys_config_get_bt_gatt_mtu(void) { return mgos_config_get_bt_gatt_mtu(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_gatt_mtu(void) { return mgos_config_get_default_bt_gatt_mtu(); }
void mgos_config_set_bt_gatt_mtu(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_gatt_mtu(int v) { mgos_config_set_bt_gatt_mtu(&mgos_sys_config, v); }

/* bt.gatts */
#define MGOS_CONFIG_HAVE_BT_GATTS
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS
const struct mgos_config_bt_gatts *mgos_config_get_bt_gatts(const struct mgos_config *cfg);
static inline const struct mgos_config_bt_gatts *mgos_sys_config_get_bt_gatts(void) { return mgos_config_get_bt_gatts(&mgos_sys_config); }

/* bt.gatts.min_sec_level */
#define MGOS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
int mgos_config_get_bt_gatts_min_sec_level(const struct mgos_config *cfg);
int mgos_config_get_default_bt_gatts_min_sec_level(void);
static inline int mgos_sys_config_get_bt_gatts_min_sec_level(void) { return mgos_config_get_bt_gatts_min_sec_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_gatts_min_sec_level(void) { return mgos_config_get_default_bt_gatts_min_sec_level(); }
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_gatts_min_sec_level(int v) { mgos_config_set_bt_gatts_min_sec_level(&mgos_sys_config, v); }

/* bt.debug_svc_enable */
#define MGOS_CONFIG_HAVE_BT_DEBUG_SVC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_DEBUG_SVC_ENABLE
int mgos_config_get_bt_debug_svc_enable(const struct mgos_config *cfg);
int mgos_config_get_default_bt_debug_svc_enable(void);
static inline int mgos_sys_config_get_bt_debug_svc_enable(void) { return mgos_config_get_bt_debug_svc_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_debug_svc_enable(void) { return mgos_config_get_default_bt_debug_svc_enable(); }
void mgos_config_set_bt_debug_svc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_debug_svc_enable(int v) { mgos_config_set_bt_debug_svc_enable(&mgos_sys_config, v); }

/* bt.debug_svc_sec_level */
#define MGOS_CONFIG_HAVE_BT_DEBUG_SVC_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_BT_DEBUG_SVC_SEC_LEVEL
int mgos_config_get_bt_debug_svc_sec_level(const struct mgos_config *cfg);
int mgos_config_get_default_bt_debug_svc_sec_level(void);
static inline int mgos_sys_config_get_bt_debug_svc_sec_level(void) { return mgos_config_get_bt_debug_svc_sec_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_bt_debug_svc_sec_level(void) { return mgos_config_get_default_bt_debug_svc_sec_level(); }
void mgos_config_set_bt_debug_svc_sec_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_debug_svc_sec_level(int v) { mgos_config_set_bt_debug_svc_sec_level(&mgos_sys_config, v); }

/* eth */
#define MGOS_CONFIG_HAVE_ETH
#define MGOS_SYS_CONFIG_HAVE_ETH
const struct mgos_config_eth *mgos_config_get_eth(const struct mgos_config *cfg);
static inline const struct mgos_config_eth *mgos_sys_config_get_eth(void) { return mgos_config_get_eth(&mgos_sys_config); }

/* eth.enable */
#define MGOS_CONFIG_HAVE_ETH_ENABLE
#define MGOS_SYS_CONFIG_HAVE_ETH_ENABLE
int mgos_config_get_eth_enable(const struct mgos_config *cfg);
int mgos_config_get_default_eth_enable(void);
static inline int mgos_sys_config_get_eth_enable(void) { return mgos_config_get_eth_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_eth_enable(void) { return mgos_config_get_default_eth_enable(); }
void mgos_config_set_eth_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_enable(int v) { mgos_config_set_eth_enable(&mgos_sys_config, v); }

/* eth.phy_addr */
#define MGOS_CONFIG_HAVE_ETH_PHY_ADDR
#define MGOS_SYS_CONFIG_HAVE_ETH_PHY_ADDR
int mgos_config_get_eth_phy_addr(const struct mgos_config *cfg);
int mgos_config_get_default_eth_phy_addr(void);
static inline int mgos_sys_config_get_eth_phy_addr(void) { return mgos_config_get_eth_phy_addr(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_eth_phy_addr(void) { return mgos_config_get_default_eth_phy_addr(); }
void mgos_config_set_eth_phy_addr(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_phy_addr(int v) { mgos_config_set_eth_phy_addr(&mgos_sys_config, v); }

/* eth.ip */
#define MGOS_CONFIG_HAVE_ETH_IP
#define MGOS_SYS_CONFIG_HAVE_ETH_IP
const char * mgos_config_get_eth_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_eth_ip(void);
static inline const char * mgos_sys_config_get_eth_ip(void) { return mgos_config_get_eth_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_eth_ip(void) { return mgos_config_get_default_eth_ip(); }
void mgos_config_set_eth_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_ip(const char * v) { mgos_config_set_eth_ip(&mgos_sys_config, v); }

/* eth.netmask */
#define MGOS_CONFIG_HAVE_ETH_NETMASK
#define MGOS_SYS_CONFIG_HAVE_ETH_NETMASK
const char * mgos_config_get_eth_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_eth_netmask(void);
static inline const char * mgos_sys_config_get_eth_netmask(void) { return mgos_config_get_eth_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_eth_netmask(void) { return mgos_config_get_default_eth_netmask(); }
void mgos_config_set_eth_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_netmask(const char * v) { mgos_config_set_eth_netmask(&mgos_sys_config, v); }

/* eth.gw */
#define MGOS_CONFIG_HAVE_ETH_GW
#define MGOS_SYS_CONFIG_HAVE_ETH_GW
const char * mgos_config_get_eth_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_eth_gw(void);
static inline const char * mgos_sys_config_get_eth_gw(void) { return mgos_config_get_eth_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_eth_gw(void) { return mgos_config_get_default_eth_gw(); }
void mgos_config_set_eth_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_gw(const char * v) { mgos_config_set_eth_gw(&mgos_sys_config, v); }

/* eth.nameserver */
#define MGOS_CONFIG_HAVE_ETH_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_ETH_NAMESERVER
const char * mgos_config_get_eth_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_eth_nameserver(void);
static inline const char * mgos_sys_config_get_eth_nameserver(void) { return mgos_config_get_eth_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_eth_nameserver(void) { return mgos_config_get_default_eth_nameserver(); }
void mgos_config_set_eth_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_nameserver(const char * v) { mgos_config_set_eth_nameserver(&mgos_sys_config, v); }

/* eth.dhcp_hostname */
#define MGOS_CONFIG_HAVE_ETH_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_ETH_DHCP_HOSTNAME
const char * mgos_config_get_eth_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_eth_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_eth_dhcp_hostname(void) { return mgos_config_get_eth_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_eth_dhcp_hostname(void) { return mgos_config_get_default_eth_dhcp_hostname(); }
void mgos_config_set_eth_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_dhcp_hostname(const char * v) { mgos_config_set_eth_dhcp_hostname(&mgos_sys_config, v); }

/* eth.clk_mode */
#define MGOS_CONFIG_HAVE_ETH_CLK_MODE
#define MGOS_SYS_CONFIG_HAVE_ETH_CLK_MODE
int mgos_config_get_eth_clk_mode(const struct mgos_config *cfg);
int mgos_config_get_default_eth_clk_mode(void);
static inline int mgos_sys_config_get_eth_clk_mode(void) { return mgos_config_get_eth_clk_mode(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_eth_clk_mode(void) { return mgos_config_get_default_eth_clk_mode(); }
void mgos_config_set_eth_clk_mode(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_clk_mode(int v) { mgos_config_set_eth_clk_mode(&mgos_sys_config, v); }

/* eth.mdc_gpio */
#define MGOS_CONFIG_HAVE_ETH_MDC_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_MDC_GPIO
int mgos_config_get_eth_mdc_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_eth_mdc_gpio(void);
static inline int mgos_sys_config_get_eth_mdc_gpio(void) { return mgos_config_get_eth_mdc_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_eth_mdc_gpio(void) { return mgos_config_get_default_eth_mdc_gpio(); }
void mgos_config_set_eth_mdc_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_mdc_gpio(int v) { mgos_config_set_eth_mdc_gpio(&mgos_sys_config, v); }

/* eth.mdio_gpio */
#define MGOS_CONFIG_HAVE_ETH_MDIO_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_MDIO_GPIO
int mgos_config_get_eth_mdio_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_eth_mdio_gpio(void);
static inline int mgos_sys_config_get_eth_mdio_gpio(void) { return mgos_config_get_eth_mdio_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_eth_mdio_gpio(void) { return mgos_config_get_default_eth_mdio_gpio(); }
void mgos_config_set_eth_mdio_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_mdio_gpio(int v) { mgos_config_set_eth_mdio_gpio(&mgos_sys_config, v); }

/* eth.phy_pwr_gpio */
#define MGOS_CONFIG_HAVE_ETH_PHY_PWR_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_PHY_PWR_GPIO
int mgos_config_get_eth_phy_pwr_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_eth_phy_pwr_gpio(void);
static inline int mgos_sys_config_get_eth_phy_pwr_gpio(void) { return mgos_config_get_eth_phy_pwr_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_eth_phy_pwr_gpio(void) { return mgos_config_get_default_eth_phy_pwr_gpio(); }
void mgos_config_set_eth_phy_pwr_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_phy_pwr_gpio(int v) { mgos_config_set_eth_phy_pwr_gpio(&mgos_sys_config, v); }

/* mjs */
#define MGOS_CONFIG_HAVE_MJS
#define MGOS_SYS_CONFIG_HAVE_MJS
const struct mgos_config_mjs *mgos_config_get_mjs(const struct mgos_config *cfg);
static inline const struct mgos_config_mjs *mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }

/* mjs.generate_jsc */
#define MGOS_CONFIG_HAVE_MJS_GENERATE_JSC
#define MGOS_SYS_CONFIG_HAVE_MJS_GENERATE_JSC
int mgos_config_get_mjs_generate_jsc(const struct mgos_config *cfg);
int mgos_config_get_default_mjs_generate_jsc(void);
static inline int mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mjs_generate_jsc(void) { return mgos_config_get_default_mjs_generate_jsc(); }
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mjs_generate_jsc(int v) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, v); }

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_enable(void);
static inline int mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_enable(void) { return mgos_config_get_default_rpc_enable(); }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_enable(int v) { mgos_config_set_rpc_enable(&mgos_sys_config, v); }

/* rpc.http_enable */
#define MGOS_CONFIG_HAVE_RPC_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_HTTP_ENABLE
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_http_enable(void);
static inline int mgos_sys_config_get_rpc_http_enable(void) { return mgos_config_get_rpc_http_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_http_enable(void) { return mgos_config_get_default_rpc_http_enable(); }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_http_enable(int v) { mgos_config_set_rpc_http_enable(&mgos_sys_config, v); }

/* rpc.service_sys_enable */
#define MGOS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_service_sys_enable(void);
static inline int mgos_sys_config_get_rpc_service_sys_enable(void) { return mgos_config_get_rpc_service_sys_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_service_sys_enable(void) { return mgos_config_get_default_rpc_service_sys_enable(); }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_service_sys_enable(int v) { mgos_config_set_rpc_service_sys_enable(&mgos_sys_config, v); }

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_frame_size(void);
static inline int mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_frame_size(void) { return mgos_config_get_default_rpc_max_frame_size(); }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_frame_size(int v) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, v); }

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_queue_length(void);
static inline int mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_queue_length(void) { return mgos_config_get_default_rpc_max_queue_length(); }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_queue_length(int v) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, v); }

/* rpc.max_non_persistent_channels */
#define MGOS_CONFIG_HAVE_RPC_MAX_NON_PERSISTENT_CHANNELS
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_NON_PERSISTENT_CHANNELS
int mgos_config_get_rpc_max_non_persistent_channels(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_non_persistent_channels(void);
static inline int mgos_sys_config_get_rpc_max_non_persistent_channels(void) { return mgos_config_get_rpc_max_non_persistent_channels(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_non_persistent_channels(void) { return mgos_config_get_default_rpc_max_non_persistent_channels(); }
void mgos_config_set_rpc_max_non_persistent_channels(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_non_persistent_channels(int v) { mgos_config_set_rpc_max_non_persistent_channels(&mgos_sys_config, v); }

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void);
static inline int mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(); }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int v) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, v); }

/* rpc.acl */
#define MGOS_CONFIG_HAVE_RPC_ACL
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL
const char * mgos_config_get_rpc_acl(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_acl(void);
static inline const char * mgos_sys_config_get_rpc_acl(void) { return mgos_config_get_rpc_acl(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_acl(void) { return mgos_config_get_default_rpc_acl(); }
void mgos_config_set_rpc_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_acl(const char * v) { mgos_config_set_rpc_acl(&mgos_sys_config, v); }

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_acl_file(void);
static inline const char * mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_acl_file(void) { return mgos_config_get_default_rpc_acl_file(); }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_acl_file(const char * v) { mgos_config_set_rpc_acl_file(&mgos_sys_config, v); }

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_domain(void);
static inline const char * mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_domain(void) { return mgos_config_get_default_rpc_auth_domain(); }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_domain(const char * v) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, v); }

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_file(void);
static inline const char * mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_file(void) { return mgos_config_get_default_rpc_auth_file(); }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_file(const char * v) { mgos_config_set_rpc_auth_file(&mgos_sys_config, v); }

/* rpc.auth_algo */
#define MGOS_CONFIG_HAVE_RPC_AUTH_ALGO
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_ALGO
int mgos_config_get_rpc_auth_algo(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_auth_algo(void);
static inline int mgos_sys_config_get_rpc_auth_algo(void) { return mgos_config_get_rpc_auth_algo(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_auth_algo(void) { return mgos_config_get_default_rpc_auth_algo(); }
void mgos_config_set_rpc_auth_algo(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_auth_algo(int v) { mgos_config_set_rpc_auth_algo(&mgos_sys_config, v); }

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_uart_no(void);
static inline int mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_uart_no(void) { return mgos_config_get_default_rpc_uart_uart_no(); }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_uart_no(int v) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, v); }

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_baud_rate(void);
static inline int mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_baud_rate(void) { return mgos_config_get_default_rpc_uart_baud_rate(); }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int v) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, v); }

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_fc_type(void);
static inline int mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_fc_type(void) { return mgos_config_get_default_rpc_uart_fc_type(); }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_fc_type(int v) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, v); }

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_uart_dst(void);
static inline const char * mgos_sys_config_get_rpc_uart_dst(void) { return mgos_config_get_rpc_uart_dst(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_uart_dst(void) { return mgos_config_get_default_rpc_uart_dst(); }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_uart_dst(const char * v) { mgos_config_set_rpc_uart_dst(&mgos_sys_config, v); }

/* user */
#define MGOS_CONFIG_HAVE_USER
#define MGOS_SYS_CONFIG_HAVE_USER
const struct mgos_config_user *mgos_config_get_user(const struct mgos_config *cfg);
static inline const struct mgos_config_user *mgos_sys_config_get_user(void) { return mgos_config_get_user(&mgos_sys_config); }

/* user.lan */
#define MGOS_CONFIG_HAVE_USER_LAN
#define MGOS_SYS_CONFIG_HAVE_USER_LAN
const struct mgos_config_user_lan *mgos_config_get_user_lan(const struct mgos_config *cfg);
static inline const struct mgos_config_user_lan *mgos_sys_config_get_user_lan(void) { return mgos_config_get_user_lan(&mgos_sys_config); }

/* user.lan.enable */
#define MGOS_CONFIG_HAVE_USER_LAN_ENABLE
#define MGOS_SYS_CONFIG_HAVE_USER_LAN_ENABLE
int mgos_config_get_user_lan_enable(const struct mgos_config *cfg);
int mgos_config_get_default_user_lan_enable(void);
static inline int mgos_sys_config_get_user_lan_enable(void) { return mgos_config_get_user_lan_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_user_lan_enable(void) { return mgos_config_get_default_user_lan_enable(); }
void mgos_config_set_user_lan_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_user_lan_enable(int v) { mgos_config_set_user_lan_enable(&mgos_sys_config, v); }

/* user.can */
#define MGOS_CONFIG_HAVE_USER_CAN
#define MGOS_SYS_CONFIG_HAVE_USER_CAN
const struct mgos_config_user_can *mgos_config_get_user_can(const struct mgos_config *cfg);
static inline const struct mgos_config_user_can *mgos_sys_config_get_user_can(void) { return mgos_config_get_user_can(&mgos_sys_config); }

/* user.can.enable */
#define MGOS_CONFIG_HAVE_USER_CAN_ENABLE
#define MGOS_SYS_CONFIG_HAVE_USER_CAN_ENABLE
int mgos_config_get_user_can_enable(const struct mgos_config *cfg);
int mgos_config_get_default_user_can_enable(void);
static inline int mgos_sys_config_get_user_can_enable(void) { return mgos_config_get_user_can_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_user_can_enable(void) { return mgos_config_get_default_user_can_enable(); }
void mgos_config_set_user_can_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_user_can_enable(int v) { mgos_config_set_user_can_enable(&mgos_sys_config, v); }

/* user.spi */
#define MGOS_CONFIG_HAVE_USER_SPI
#define MGOS_SYS_CONFIG_HAVE_USER_SPI
const struct mgos_config_user_spi *mgos_config_get_user_spi(const struct mgos_config *cfg);
static inline const struct mgos_config_user_spi *mgos_sys_config_get_user_spi(void) { return mgos_config_get_user_spi(&mgos_sys_config); }

/* user.spi.enable */
#define MGOS_CONFIG_HAVE_USER_SPI_ENABLE
#define MGOS_SYS_CONFIG_HAVE_USER_SPI_ENABLE
int mgos_config_get_user_spi_enable(const struct mgos_config *cfg);
int mgos_config_get_default_user_spi_enable(void);
static inline int mgos_sys_config_get_user_spi_enable(void) { return mgos_config_get_user_spi_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_user_spi_enable(void) { return mgos_config_get_default_user_spi_enable(); }
void mgos_config_set_user_spi_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_user_spi_enable(int v) { mgos_config_set_user_spi_enable(&mgos_sys_config, v); }

/* user.irtx */
#define MGOS_CONFIG_HAVE_USER_IRTX
#define MGOS_SYS_CONFIG_HAVE_USER_IRTX
const struct mgos_config_user_irtx *mgos_config_get_user_irtx(const struct mgos_config *cfg);
static inline const struct mgos_config_user_irtx *mgos_sys_config_get_user_irtx(void) { return mgos_config_get_user_irtx(&mgos_sys_config); }

/* user.irtx.enable */
#define MGOS_CONFIG_HAVE_USER_IRTX_ENABLE
#define MGOS_SYS_CONFIG_HAVE_USER_IRTX_ENABLE
int mgos_config_get_user_irtx_enable(const struct mgos_config *cfg);
int mgos_config_get_default_user_irtx_enable(void);
static inline int mgos_sys_config_get_user_irtx_enable(void) { return mgos_config_get_user_irtx_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_user_irtx_enable(void) { return mgos_config_get_default_user_irtx_enable(); }
void mgos_config_set_user_irtx_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_user_irtx_enable(int v) { mgos_config_set_user_irtx_enable(&mgos_sys_config, v); }

/* user.irrx */
#define MGOS_CONFIG_HAVE_USER_IRRX
#define MGOS_SYS_CONFIG_HAVE_USER_IRRX
const struct mgos_config_user_irrx *mgos_config_get_user_irrx(const struct mgos_config *cfg);
static inline const struct mgos_config_user_irrx *mgos_sys_config_get_user_irrx(void) { return mgos_config_get_user_irrx(&mgos_sys_config); }

/* user.irrx.enable */
#define MGOS_CONFIG_HAVE_USER_IRRX_ENABLE
#define MGOS_SYS_CONFIG_HAVE_USER_IRRX_ENABLE
int mgos_config_get_user_irrx_enable(const struct mgos_config *cfg);
int mgos_config_get_default_user_irrx_enable(void);
static inline int mgos_sys_config_get_user_irrx_enable(void) { return mgos_config_get_user_irrx_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_user_irrx_enable(void) { return mgos_config_get_default_user_irrx_enable(); }
void mgos_config_set_user_irrx_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_user_irrx_enable(int v) { mgos_config_set_user_irrx_enable(&mgos_sys_config, v); }

/* user.sdcard */
#define MGOS_CONFIG_HAVE_USER_SDCARD
#define MGOS_SYS_CONFIG_HAVE_USER_SDCARD
const struct mgos_config_user_sdcard *mgos_config_get_user_sdcard(const struct mgos_config *cfg);
static inline const struct mgos_config_user_sdcard *mgos_sys_config_get_user_sdcard(void) { return mgos_config_get_user_sdcard(&mgos_sys_config); }

/* user.sdcard.enable */
#define MGOS_CONFIG_HAVE_USER_SDCARD_ENABLE
#define MGOS_SYS_CONFIG_HAVE_USER_SDCARD_ENABLE
int mgos_config_get_user_sdcard_enable(const struct mgos_config *cfg);
int mgos_config_get_default_user_sdcard_enable(void);
static inline int mgos_sys_config_get_user_sdcard_enable(void) { return mgos_config_get_user_sdcard_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_user_sdcard_enable(void) { return mgos_config_get_default_user_sdcard_enable(); }
void mgos_config_set_user_sdcard_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_user_sdcard_enable(int v) { mgos_config_set_user_sdcard_enable(&mgos_sys_config, v); }

bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value);
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings);

bool mgos_config_is_default_str(const char *s);

/* Backward compatibility. */
const struct mgos_conf_entry *mgos_config_schema(void);

#ifdef __cplusplus
}
#endif

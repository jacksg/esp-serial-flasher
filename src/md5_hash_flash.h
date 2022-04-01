/*
 * MD5 hash implementation and interface functions
 * Copyright (c) 2003-2005, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
struct MD5Context_ESP_Flasher {
	uint32_t buf[4];
	uint32_t bits[2];
	uint8_t in[64];
};

void MD5Init_ESP_Flasher(struct MD5Context_ESP_Flasher *context);
void MD5Update_ESP_Flasher(struct MD5Context_ESP_Flasher *context, unsigned char const *buf, unsigned len);
void MD5Final_ESP_Flasher(unsigned char digest[16], struct MD5Context_ESP_Flasher *context);

#ifdef __cplusplus
}
#endif
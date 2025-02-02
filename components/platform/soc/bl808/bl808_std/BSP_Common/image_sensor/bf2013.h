/*
 * Copyright (c) 2016-2023 Bouffalolab.
 *
 * This file is part of
 *     *** Bouffalolab Software Dev Kit ***
 *      (see www.bouffalolab.com).
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of Bouffalo Lab nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __BF2013_H__
#define __BF2013_H__

#include "image_sensor.h"

static image_sensor_command_t bf2013_init_list[] = {
    { 0x12, 0x80 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    //{0xb9, 0x80},//use Test pattern
    //{0x69,0x20},
    { 0x3a, 0x02 },
    { 0x09, 0x01 },
    { 0x15, 0x02 },
    { 0x12, 0x00 },
    { 0x1e, 0x00 },
    { 0x13, 0x00 },
    { 0x01, 0x14 },
    { 0x02, 0x21 },
    { 0x8c, 0x02 },
    { 0x8d, 0x64 },
    { 0x87, 0x18 },
    { 0x13, 0x07 },
    //{0x11,0x80},//pclk=mclk
    { 0x11, 0x30 }, //pclk=mclk/8
    { 0x2b, 0x20 },
    { 0x92, 0x40 },
    { 0x9d, 0x99 },
    { 0x06, 0xe0 },
    { 0x29, 0x54 },
    { 0xeb, 0x30 },
    { 0xbb, 0x20 },
    { 0xf5, 0x21 },
    { 0xe1, 0x3c },
    { 0x16, 0x01 },
    { 0xe0, 0x0b },
    { 0x2f, 0xf6 },
    { 0x33, 0x20 },
    { 0x34, 0x08 },
    { 0x35, 0x50 },
    { 0x65, 0x4a },
    { 0x66, 0x50 },
    { 0x36, 0x05 },
    { 0x37, 0xf6 },
    { 0x38, 0x46 },
    { 0x9b, 0xf6 },
    { 0x9c, 0x46 },
    { 0xbc, 0x01 },
    { 0xbd, 0xf6 },
    { 0xbe, 0x46 },
    { 0x82, 0x14 },
    { 0x83, 0x23 },
    { 0x9a, 0x23 },
    { 0x70, 0x6f },
    { 0x72, 0x3f },
    { 0x73, 0x3f },
    { 0x74, 0x27 },
    { 0x77, 0x90 },
    { 0x79, 0x48 },
    { 0x7a, 0x1e },
    { 0x7b, 0x30 },
    { 0x84, 0x1a },
    { 0x85, 0x20 },
    { 0x89, 0x02 },
    { 0x8a, 0x64 },
    { 0x86, 0x30 },
    { 0x96, 0xa6 },
    { 0x97, 0x0c },
    { 0x98, 0x18 },
    { 0x80, 0x55 },
    { 0x24, 0x70 },
    { 0x25, 0x80 },
    { 0x94, 0x0a },
    { 0x1f, 0x20 },
    { 0x22, 0x20 },
    { 0x26, 0x20 },
    { 0x56, 0x40 },
    { 0x61, 0xd3 },
    { 0x79, 0x48 },
    { 0x3b, 0x60 },
    { 0x3c, 0x20 },
    { 0x39, 0x80 },
    { 0x3f, 0xb0 },
    { 0x39, 0x80 },
    { 0x40, 0x58 },
    { 0x41, 0x54 },
    { 0x42, 0x4e },
    { 0x43, 0x44 },
    { 0x44, 0x3e },
    { 0x45, 0x39 },
    { 0x46, 0x35 },
    { 0x47, 0x31 },
    { 0x48, 0x2e },
    { 0x49, 0x2b },
    { 0x4b, 0x29 },
    { 0x4c, 0x27 },
    { 0x4e, 0x23 },
    { 0x4f, 0x20 },
    { 0x50, 0x1e },
    { 0x51, 0x05 },
    { 0x52, 0x10 },
    { 0x53, 0x0b },
    { 0x54, 0x15 },
    { 0x57, 0x87 },
    { 0x58, 0x72 },
    { 0x59, 0x5f },
    { 0x5a, 0x7e },
    { 0x5b, 0x1f },
    { 0x5c, 0x0e },
    { 0x5d, 0x95 },
    { 0x60, 0x28 },
    { 0xb0, 0xe0 },
    { 0xb1, 0xc0 },
    { 0xb2, 0xb0 },
    { 0xb3, 0x88 },
    { 0x6a, 0x01 },
    { 0x23, 0x66 },
    { 0xa0, 0x03 },
    { 0xa1, 0x31 },
    { 0xa2, 0x0b },
    { 0xa3, 0x26 },
    { 0xa4, 0x05 },
    { 0xa5, 0x25 },
    { 0xa6, 0x06 },
    { 0xa7, 0x80 },
    { 0xa8, 0x80 },
    { 0xa9, 0x20 },
    { 0xaa, 0x20 },
    { 0xab, 0x20 },
    { 0xac, 0x3c },
    { 0xad, 0xf0 },
    { 0xc8, 0x18 },
    { 0xc9, 0x20 },
    { 0xca, 0x17 },
    { 0xcb, 0x1f },
    { 0xaf, 0x00 },
    { 0xc5, 0x18 },
    { 0xc6, 0x00 },
    { 0xc7, 0x20 },
    { 0xae, 0x80 },
    { 0xcc, 0x40 },
    { 0xcd, 0x58 },
    { 0xee, 0x4c },
    { 0x8e, 0x07 },
    { 0x8f, 0x79 },
};

static image_sensor_configure_t bf2013_config = {
    .name = "BF2013",
    .slave_addr = 0x6e,
    .id_size = 2,
    .id_addr = 0xfcfd,
    .id_value = 0x3703,
    .init_list_size = sizeof(bf2013_init_list)/sizeof(bf2013_init_list[0]),
    .init_list = bf2013_init_list,
};

#endif /* __BF2013_H__ */

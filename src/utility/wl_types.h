/**********************************************************************************************************************************
  wl_types.h - Library for Arduino WiFiNINA module/shield.
  
  Based on and modified from WiFiNINA library https://www.arduino.cc/en/Reference/WiFiNINA
  to support nRF52, SAMD21/SAMD51, STM32F/L/H/G/WB/MP1, Teensy, etc. boards besides Nano-33 IoT, MKRWIFI1010, MKRVIDOR400, etc.
  
  Built by Khoi Hoang https://github.com/khoih-prog/WiFiNINA_Generic
  Licensed under MIT license

  Copyright (c) 2018 Arduino SA. All rights reserved.
  Copyright (c) 2011-2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  
  Version: 1.8.13

  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.5.0      K Hoang    27/03/2020 Initial coding to support other boards besides Nano-33 IoT, MKRWIFI1010, MKRVIDOR4000, etc.
                                   such as Arduino Mega, Teensy, SAMD21, SAMD51, STM32, etc
  1.5.1      K Hoang    22/04/2020 Add support to nRF52 boards, such as AdaFruit Feather nRF52832, nRF52840 Express, BlueFruit Sense,
                                   Itsy-Bitsy nRF52840 Express, Metro nRF52840 Express, etc.
  1.5.2      K Hoang    09/05/2020 Port FirmwareUpdater to permit nRF52, Teensy, SAMD21, SAMD51, etc. boards to update WiFiNINA
                                   W101/W102 firmware and SSL certs on IDE. Update default pin-outs.
  1.5.3      K Hoang    14/07/2020 Add function to support new WebSockets2_Generic Library
  1.6.0      K Hoang    19/07/2020 Sync with Arduino WiFiNINA Library v1.6.0 (new Firmware 1.4.0 and WiFiStorage)
  1.6.1      K Hoang    24/07/2020 Add support to all STM32F/L/H/G/WB/MP1 and Seeeduino SAMD21/SAMD51 boards 
  1.6.2      K Hoang    28/07/2020 Fix WiFiStorage bug from v1.6.0  
  1.7.0      K Hoang    06/08/2020 Sync with Arduino WiFiNINA Library v1.7.0 : Add downloadOTA() and verify length/CRC
  1.7.1      K Hoang    27/08/2020 Sync with Arduino WiFiNINA Library v1.7.1 : new Firmware 1.4.1
  1.7.2      K Hoang    05/11/2020 Add support to Adafruit Airlift M4 boards: METRO_M4_AIRLIFT_LITE, PYBADGE_AIRLIFT_M4
  1.8.0      K Hoang    19/11/2020 Sync with Arduino WiFiNINA Library v1.8.0 : new Firmware 1.4.2. Add WiFiBearSSLClient.
  1.8.2      K Hoang    02/02/2021 Sync with WiFiNINA v1.8.2 : new Firmware 1.4.3. Add possibility to resend data if lwip_send fails
  1.8.5      K Hoang    20/03/2021 Sync with WiFiNINA v1.8.5 : Feed watchdog within busy-wait-loop within connectBearSSL
  1.8.10     K Hoang    25/05/2021 Sync with WiFiNINA v1.8.10 : Support RP2040, new FW v1.4.5
  1.8.10-1   K Hoang    29/05/2021 Fix PinStatus compile error for some platforms
  1.8.11     K Hoang    14/06/2021 Sync with WiFiNINA v1.8.11 : Support RP2040, new FW v1.4.6
  1.8.12     K Hoang    30/06/2021 Sync with WiFiNINA v1.8.12 : new FW v1.4.7. Add support to most AVR boards.
  1.8.13     K Hoang    03/08/2021 Sync with WiFiNINA v1.8.13 : new FW v1.4.8. Add support to ADAFRUIT_MATRIXPORTAL_M4_EXPRESS
 ***********************************************************************************************************************************/

#pragma once

/*******************************
 * wl_types.h
 *
 *  Created on: Jul 30, 2010
 *      Author: dlafauci
 *******************************/

#include <inttypes.h>

typedef enum 
{
  WL_FAILURE = -1,
  WL_SUCCESS =  1,
} wl_error_code_t;

/* Authentication modes */
enum wl_auth_mode 
{
  AUTH_MODE_INVALID,
  AUTH_MODE_AUTO,
  AUTH_MODE_OPEN_SYSTEM,
  AUTH_MODE_SHARED_KEY,
  AUTH_MODE_WPA,
  AUTH_MODE_WPA2,
  AUTH_MODE_WPA_PSK,
  AUTH_MODE_WPA2_PSK
};

typedef enum 
{
  WL_PING_DEST_UNREACHABLE  = -1,
  WL_PING_TIMEOUT           = -2,
  WL_PING_UNKNOWN_HOST      = -3,
  WL_PING_ERROR             = -4
} wl_ping_result_t;


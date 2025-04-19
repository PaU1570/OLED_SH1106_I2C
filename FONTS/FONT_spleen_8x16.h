#ifndef _FONT_SPLEEN_8x16_
#define _FONT_SPLEEN_8x16_

#include "FONT_INFO.h"
#if defined(ESP8266)
	#include "user_interface.h"
	#include <ets_sys.h>
	#include <osapi.h>
#else
	#include <stdint.h>
	#include <stdlib.h>
#endif

// Font data for Menlo 11pt
extern const uint8_t spleen_8x16_Bitmaps[];
extern const FONT_INFO spleen_8x16_FontInfo;
extern const uint16_t spleen_8x16_Descriptors[][3];

#endif

/**
* xy2uv.h
* Coordinate conversion
**/

#ifndef XY2UV_H_
#define XY2UV_H_

#include "TEXB.h"

#include <stdint.h>

namespace TEXB {
	UVPoint xy2uv(uint32_t x,uint32_t y,Point v0,Point v1,Point v2,Point v3,UVPoint t0,UVPoint t1,UVPoint t2,UVPoint t3);
}

#endif

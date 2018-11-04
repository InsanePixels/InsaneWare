/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/PlatformAbstractionLayer													*/
/*	FILE:			InpixPlatformHeaders.h															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		1st november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_PLATFORM_HEADERS_H
#define INPIX_PLATFORM_HEADERS_H

/************************************************************************************ InsanePixels **/

#include <new>
#include <wchar.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <float.h>
#include <string.h>

/************************************************************************************ InsanePixels **/

/************************************************************************************ InsanePixels **/

#ifdef INPIX_PLATFORM_WINDOWS
#include "..\Windows\InpixWindowsHeaders.h"
#endif // 

/************************************************************************************ InsanePixels **/

#endif // !INPIX_PLATFORM_HEADERS_H
#pragma once

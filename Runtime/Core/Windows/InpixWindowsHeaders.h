/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsHeaders.h															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		1st november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_WINDOWS_HEADERS_H
#define INPIX_WINDOWS_HEADERS_H

/************************************************************************************ InsanePixels **/

#ifdef _WINDOWS_

#pragma message ("Windows.h included before InpixWindowsHeaders.h!")

#endif // !_WINDOWS_

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

/************************************************************************************ InsanePixels **/

#include <intrin.h>
#include <stdint.h>
#include <tchar.h>

/************************************************************************************ InsanePixels **/

#include "InpixWindowsPlatformString.h"
#include "InpixWindowsApplication.h"
#include "InpixWindowsWindow.h"

/************************************************************************************ InsanePixels **/


#endif // !INPIX_WINDOWS_HEADERS_H

/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/PlatformAbstractionLayer													*/
/*	FILE:			InpixPlatform.h																	*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		1st november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_PLATFORM_H
#define INPIX_PLATFORM_H

/************************************************************************************ InsanePixels **/

#ifdef INPIX_PLATFORM_WINDOWS
#include "..\Windows\InpixWindowsPlatform.h"
#endif // 

/************************************************************************************ InsanePixels **/

typedef InpixPlatformTypes::INPIX_U8			INPIX_U8;
typedef InpixPlatformTypes::INPIX_U16			INPIX_U16;
typedef InpixPlatformTypes::INPIX_U32			INPIX_U32;
typedef InpixPlatformTypes::INPIX_U64			INPIX_U64;

typedef InpixPlatformTypes::INPIX_S8			INPIX_S8;
typedef InpixPlatformTypes::INPIX_S16			INPIX_S16;
typedef InpixPlatformTypes::INPIX_S32			INPIX_S32;
typedef InpixPlatformTypes::INPIX_S64			INPIX_S64;

typedef InpixPlatformTypes::INPIX_ANSICHAR		INPIX_ANSICHAR;
typedef InpixPlatformTypes::INPIX_WIDECHAR		INPIX_WIDECHAR;
typedef InpixPlatformTypes::INPIX_CHAR8			INPIX_CHAR8;
typedef InpixPlatformTypes::INPIX_CHAR16		INPIX_CHAR16;
typedef InpixPlatformTypes::INPIX_CHAR32		INPIX_CHAR32;
typedef InpixPlatformTypes::INPIX_TCHAR			INPIX_TCHAR;


/************************************************************************************ InsanePixels **/

#endif // !INPIX_PLATFORM_H

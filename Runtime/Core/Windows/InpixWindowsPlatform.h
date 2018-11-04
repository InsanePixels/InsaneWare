/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsPlatform.h															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		1st november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_WINDOWS_PLATFORM_H
#define INPIX_WINDOWS_PLATFORM_H

/************************************************************************************ InsanePixels **/

struct InpixWindowsPlatformTypes : public InpixGenericPlatformTypes
{
#ifdef  INPIX_WINDOWS_64
	typedef unsigned __int64 INPIX_SIZET;
#else
	typedef unsigned long INPIX_SIZET;
#endif //  INPIX_WINDOWS_64
};
typedef InpixWindowsPlatformTypes InpixPlatformTypes;

/************************************************************************************ InsanePixels **/

struct InpixWindowsPlatformTools : public InpixGenericPlatformTools
{
	static class InpixGenericApplication *CreateApplication(void);
};
typedef InpixWindowsPlatformTools InpixPlatformTools;

/************************************************************************************ InsanePixels **/

#endif // !INPIX_WINDOWS_PLATFORM_H

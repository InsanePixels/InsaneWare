/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsPlatformString.h													*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		25th november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_WINDOWS_PLATFORM_STRING
#define INPIX_WINDOWS_PLATFORM_STRING

/************************************************************************************ InsanePixels **/

struct InpixWindowsPlatformString : InpixGenericPlatformString
{
	static INPIX_FORCEINLINE INPIX_U32 Strlen(const INPIX_WIDECHAR *s)
	{
		return _tcsclen(s);
	}
};
typedef InpixWindowsPlatformString InpixPlatformString;

/************************************************************************************ InsanePixels **/

#endif // !INPIX_WINDOWS_PLATFORM_STRING

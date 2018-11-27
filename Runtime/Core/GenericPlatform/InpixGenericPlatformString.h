/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/GenericPlatform															*/
/*	FILE:			InpixGenericPlatformString.h													*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		25th november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_GENERIC_PLATFORM_STRING
#define INPIX_GENERIC_PLATFORM_STRING

/************************************************************************************ InsanePixels **/

struct InpixGenericPlatformString
{
	static INPIX_FORCEINLINE INPIX_U32 Strlen(const INPIX_WIDECHAR *s)
	{
		return wcslen(s);
	}
};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_GENERIC_PLATFORM_STRING

/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/PlatformAbstractionLayer													*/
/*	FILE:			InpixStringUtilities.h															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		25th november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_STRING_UTILIES_H
#define INPIX_STRING_UTILIES_H

/************************************************************************************ InsanePixels **/

template <typename T>
struct InpixTemplateStringUtilities
{
	typedef T InpixCharType;

	static INPIX_FORCEINLINE bool IsPureAnsi(const InpixCharType *s);
	static INPIX_FORCEINLINE INPIX_U32 Strlen(const InpixCharType *s);
};

typedef InpixTemplateStringUtilities<INPIX_TCHAR> InpixStringUtilies;

/************************************************************************************ InsanePixels **/

template <> INPIX_FORCEINLINE bool InpixTemplateStringUtilities<INPIX_WIDECHAR>::IsPureAnsi(const INPIX_WIDECHAR *s)
{
	for(; *s; s++)
	{
		if(*s > 0x7f) return false;
	}
	return true;
}

/************************************************************************************ InsanePixels **/

template <> INPIX_FORCEINLINE bool InpixTemplateStringUtilities<INPIX_ANSICHAR>::IsPureAnsi(const InpixCharType *s)
{
	return true;
}


/************************************************************************************ InsanePixels **/

template <typename T> 
INPIX_FORCEINLINE INPIX_U32 InpixTemplateStringUtilities<T>::Strlen(const InpixCharType *s)
{
	return InpixPlatformString::Strlen(s);
}

/************************************************************************************ InsanePixels **/

#endif // !INPIX_STRING_UTILIES_H

#pragma once

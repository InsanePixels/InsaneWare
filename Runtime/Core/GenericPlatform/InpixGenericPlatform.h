/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/GenericPlatform															*/
/*	FILE:			InpixGenericPlatform.h															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		1st november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_GENERIC_PLATFORM_H
#define INPIX_GENERIC_PLATFORM_H

/************************************************************************************ InsanePixels **/

struct InpixGenericPlatformTypes
{
	typedef unsigned char				INPIX_U8;
	typedef unsigned short int			INPIX_U16;
	typedef unsigned int				INPIX_U32;
	typedef unsigned long long			INPIX_U64;

	typedef signed char					INPIX_S8;
	typedef signed short int			INPIX_S16;
	typedef signed int					INPIX_S32;
	typedef signed long long			INPIX_S64;

	typedef char						INPIX_ANSICHAR;
	typedef wchar_t						INPIX_WIDECHAR;
	typedef INPIX_U8					INPIX_CHAR8;
	typedef INPIX_U16					INPIX_CHAR16;
	typedef INPIX_U32					INPIX_CHAR32;
	typedef INPIX_WIDECHAR				INPIX_TCHAR;
};

/************************************************************************************ InsanePixels **/

struct InpixGenericPlatformTools
{
	static class InpixGenericApplication *CreateApplication(void);
};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_GENERIC_PLATFORM_H

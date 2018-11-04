/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsPlatform.cpp														*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		4th november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#include "..\InsaneCore.h"
#include "InpixWindowsApplication.h"
#include "..\..\..\InsaneWare\resource.h"

/************************************************************************************ InsanePixels **/

InpixGenericApplication *InpixWindowsPlatformTools::CreateApplication(void)
{
	HICON hApplicationIcon = ::LoadIcon(HINSTANCE(NULL), MAKEINTRESOURCE(INSANEWARE_ICON));
	if (hApplicationIcon == NULL)
		hApplicationIcon = ::LoadIcon(HINSTANCE(NULL), IDI_APPLICATION);
	return InpixWindowsApplication::CreateApplication(HINSTANCE(NULL), hApplicationIcon);
}

/************************************************************************************ InsanePixels **/

/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/GenericPlatform															*/
/*	FILE:			InpixGenericPlatform.cpp														*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		4th november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#include "..\InsaneCore.h"

/************************************************************************************ InsanePixels **/

InpixGenericApplication *InpixGenericPlatformTools::CreateApplication(void)
{
	return new InpixGenericApplication();
}

/************************************************************************************ InsanePixels **/

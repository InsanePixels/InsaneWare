/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/GenericPlatform															*/
/*	FILE:			InpixGenericPlatformWindow.h													*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		3rd november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_GENERIC_PLATFORM_WINDOW_H
#define INPIX_GENERIC_PLATFORM_WINDOW_H

/************************************************************************************ InsanePixels **/

struct InpixGenericWindowDefinitions
{
	InpixString			Title;
	INPIX_F32			fVerticalPosition;
	INPIX_F32			fHorizontalPosition;
	INPIX_F32			fWidth;
	INPIX_F32			fHeight;
	bool				bHasOsBorder;
	bool				bSupportTrasparency;
	bool				bShowInTaskbar;
	bool				bTopmost;
	bool				bEnableInput;
	bool				bActiveOnShow;
	bool				bMinimizable;
	bool				bMaximizable;
	bool				bSizeable;
	bool				bModal;
	bool				bRegular;
	INPIX_F32			fOpacity;
};

/************************************************************************************ InsanePixels **/

class InpixGenericPlatformWindow
{

};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_GENERIC_PLATFORM_WINDOW_H

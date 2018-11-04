/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsWindow.cpp															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		3rd november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#include "..\InsaneCore.h"
#include "InpixWindowsWindow.h"
#include "InpixWindowsApplication.h"

/************************************************************************************ InsanePixels **/

const INPIX_TCHAR InpixWindowsWindow::m_WindowClassName[] = TEXT("InsanePixelsClass");

/************************************************************************************ InsanePixels **/

bool InpixWindowsWindow::Initialize(InpixWindowsApplication *pOwnerApplication, HINSTANCE hInstance, const bool bShowImmediatly)
{
	return true;
}

/************************************************************************************ InsanePixels **/

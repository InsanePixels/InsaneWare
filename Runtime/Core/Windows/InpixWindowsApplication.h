/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsApplication.h														*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		3rd november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_WINDOWS_APPLICATION_H
#define INPIX_WINDOWS_APPLICATION_H

/************************************************************************************ InsanePixels **/

#include "..\InsaneCore.h"
#include "InpixWindowsHeaders.h"

/************************************************************************************ InsanePixels **/

class InpixWindowsApplication : public InpixGenericApplication
{
private:
	HINSTANCE						m_hInstance;

private:
	static bool RegisterApplicationClass(const HINSTANCE hInstance, const HICON hIcon);
	static LRESULT CALLBACK ApplicationMessagesHandler(HWND hWnd, INPIX_U32 Message, WPARAM wParam, LPARAM lParam);

private:
	InpixWindowsApplication(const HINSTANCE hInstance, const HICON hIcon);
	INPIX_U32 MessagesHandler(HWND hWnd, INPIX_U32 Message, WPARAM wParam, LPARAM lParam);
	
public:
	static InpixWindowsApplication *CreateApplication(const HINSTANCE hInstance, const HICON hIcon);

public:
	~InpixWindowsApplication();

};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_WINDOWS_WINDOW_H

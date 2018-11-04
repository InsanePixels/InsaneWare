/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsApplication.cpp														*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		3rd november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#include "InpixWindowsApplication.h"
#include "InpixWindowsWindow.h"

#include <Ole2.h>
#include <ShlObj.h>
#include <objbase.h>
#include <SetupAPI.h>
#include <devguid.h>

/************************************************************************************ InsanePixels **/

InpixWindowsApplication *gWindowsApplication = NULL;

/************************************************************************************ InsanePixels **/

LRESULT CALLBACK InpixWindowsApplication::ApplicationMessagesHandler(HWND hWnd, INPIX_U32 Message, WPARAM wParam, LPARAM lParam)
{
	return gWindowsApplication->MessagesHandler(hWnd, Message, wParam, lParam);
}

/************************************************************************************ InsanePixels **/

bool InpixWindowsApplication::RegisterApplicationClass(const HINSTANCE hInstance, const HICON hIcon)
{
	WNDCLASS WndClass;
	WndClass.style = CS_DBLCLKS;
	WndClass.lpfnWndProc = ApplicationMessagesHandler;
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	WndClass.hInstance = hInstance;
	WndClass.hIcon = hIcon;
	WndClass.hCursor = NULL;
	WndClass.hbrBackground = NULL;
	WndClass.lpszMenuName = NULL;
	WndClass.lpszClassName = InpixWindowsWindow::m_WindowClassName;
	if (!::RegisterClass(&WndClass))
	{
		::MessageBox(NULL, TEXT("InpixWindowsApplication::RegisterApplicationClass(): application class registration failed"), TEXT("ERROR"), MB_ICONEXCLAMATION | MB_OK);
		return false;
	}

	return true;
}

/************************************************************************************ InsanePixels **/

InpixWindowsApplication *InpixWindowsApplication::CreateApplication(const HINSTANCE hInstance, const HICON hIcon)
{
	return gWindowsApplication = new InpixWindowsApplication(hInstance, hIcon);
}

/************************************************************************************ InsanePixels **/

InpixWindowsApplication::InpixWindowsApplication(const HINSTANCE hInstance, const HICON hIcon) : m_hInstance(hInstance)
{
	const bool bClassRegistered = RegisterApplicationClass(hInstance, hIcon);

	// Enable Drag & Drop functions
	// See https://docs.microsoft.com/en-us/windows/desktop/api/ole2/nf-ole2-oleinitialize
	OleInitialize(NULL);

}

/************************************************************************************ InsanePixels **/

InpixWindowsApplication::~InpixWindowsApplication()
{
	// Close COM library
	// See https://docs.microsoft.com/en-us/windows/desktop/api/ole2/nf-ole2-oleuninitialize
	OleUninitialize();
}

/************************************************************************************ InsanePixels **/

INPIX_U32 InpixWindowsApplication::MessagesHandler(HWND hWnd, INPIX_U32 Message, WPARAM wParam, LPARAM lParam)
{


	return ::DefWindowProc(hWnd, Message, wParam, lParam);
}

/************************************************************************************ InsanePixels **/



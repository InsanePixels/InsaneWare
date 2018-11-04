/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/Windows																	*/
/*	FILE:			InpixWindowsWindow.h															*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		3rd november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_WINDOWS_WINDOW_H
#define INPIX_WINDOWS_WINDOW_H

/************************************************************************************ InsanePixels **/

class InpixWindowsWindow : public InpixGenericWindow
{
private:
	InpixWindowsApplication						*m_pOwnerApp;
	HWND										m_hWnd;
	INPIX_U32									m_Width;
	INPIX_U32									m_Height;
	bool										m_bVisible : 1;

public:
	static const INPIX_TCHAR					m_WindowClassName[];

public:
	bool Initialize(InpixWindowsApplication *pOwnerApplication, HINSTANCE hInstance, const bool bShowImmediatly);
};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_WINDOWS_WINDOW_H

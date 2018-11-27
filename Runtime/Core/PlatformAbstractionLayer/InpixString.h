/** InsanePixels ************************************************************************************/
/*																									*/
/*	SOLUTION:		InsaneWare																		*/
/*	PROJECT:		Runtime																			*/
/*	FOLDER:			Core/PlatformAbstractionLayer													*/
/*	FILE:			InpixString.h																	*/
/*	AUTHOR:			Fabrizio Giannone (fgiannone@insanepixels.com)									*/
/*	CREATION:		11st november 2018																*/
/*	NOTES:																							*/
/*																									*/
/************************************************************************************ InsanePixels **/
#ifndef INPIX_STRING_H
#define INPIX_STRING_H

/************************************************************************************ InsanePixels **/

class InpixString
{
private:
	std::vector<INPIX_TCHAR>			m_Data;

public:
	INPIX_FORCEINLINE InpixString()
	{
	}

	INPIX_FORCEINLINE InpixString(const InpixString &s) : m_Data(s.m_Data)
	{
	}

	INPIX_FORCEINLINE InpixString &operator = (const InpixString &s)
	{
		m_Data = s.m_Data;
		return *this;
	}

	INPIX_FORCEINLINE InpixString &operator = (const INPIX_TCHAR *s)
	{
		INPIX_U32 Len = (s && *s) ? InpixStringUtilies::Strlen(s) + 1 : 0;
		m_Data.resize(Len);
		if (Len) memcpy(&m_Data.begin(), s, sizeof(INPIX_TCHAR)*Len);
		return *this;
	}
};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_STRING_H


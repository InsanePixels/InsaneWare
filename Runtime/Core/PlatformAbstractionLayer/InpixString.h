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

private:

	typedef std::vector<INPIX_TCHAR>::iterator			iterator;
	typedef std::vector<INPIX_TCHAR>::const_iterator	const_iterator;

	INPIX_FORCEINLINE iterator				begin(void)						{ return m_Data.begin();	}
	INPIX_FORCEINLINE const_iterator		begin(void)	const				{ return m_Data.begin();	}
	INPIX_FORCEINLINE iterator				end(void)						{ return m_Data.end();		}
	INPIX_FORCEINLINE const_iterator		end(void)	const				{ return m_Data.end();		}

	INPIX_FORCEINLINE friend iterator		begin(InpixString &s)			{ return s.m_Data.begin();	}
	INPIX_FORCEINLINE friend const_iterator	begin(const InpixString &s)		{ return s.m_Data.begin();	}
	INPIX_FORCEINLINE friend iterator		end(InpixString &s)				{ return s.m_Data.end();	}
	INPIX_FORCEINLINE friend const_iterator	end(const InpixString &s)		{ return s.m_Data.end();	}


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
		if(Len) memcpy(&m_Data.begin(), s, sizeof(INPIX_TCHAR)*Len);
		return *this;
	}

	INPIX_FORCEINLINE INPIX_TCHAR &operator [] (INPIX_U32 p)
	{
		return m_Data[p];
	}

	INPIX_FORCEINLINE const INPIX_TCHAR &operator [] (INPIX_U32 p) const
	{
		return m_Data[p];
	}
};

/************************************************************************************ InsanePixels **/

#endif // !INPIX_STRING_H


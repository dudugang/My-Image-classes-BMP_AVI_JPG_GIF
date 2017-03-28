// BaseJPG.h: interface for the CBaseJPG class.
//
//////////////////////////////////////////////////////////////////////

#include "BaseImage.h"
#include "Jpeg.h"	// Added by ClassView

class CBaseJPG : public CBaseImage  
{
public:
	BOOL SaveJpg(LPCSTR szFile);
	void FlipY(void);
	BOOL LoadJpg(LPCSTR file);
	CBaseJPG();
	virtual ~CBaseJPG();

protected:
	CJpeg *m_pJpg;
};

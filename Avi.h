// Avi.h: interface for the CMyVideo class.
//
//////////////////////////////////////////////////////////////////////

#include <Mmsystem.h>
#include <digitalv.h>

class CMyVideo  : public CObject
{
    public:
	    DWORD GetCurPosition();
	    DWORD GetTotalLength();
	    BOOL Close();
	    BOOL Open(CRect rect,HWND hwnd);
     	CMyVideo(int ,int,int,int,LPSTR lpszFileName,HWND hwnd);
		CMyVideo();
     	virtual  ~CMyVideo();
     	void MoveWindow(int x,int y,int cx,int cy);//윈도우를 이동
     	void MoveCursor(DWORD posion,HWND hWnd);//프레임 을 이동
     	void Pause();//멈춤
        BOOL Play();//play
		BOOL FramePrev (long point);//이전 프레임으로 
		BOOL Rewind (void);//처음으로
		BOOL Foward (void); //끝으로 
		BOOL FrameNext (long point); //다음으로

	protected:	      
		CString m_strFileName;
		UINT wDeviceID;             
		MCI_DGV_OPEN_PARMS mciOpenParms;
		MCI_PLAY_PARMS mciPlayParms;
		MCI_DGV_WINDOW_PARMS mciWindow;
		MCI_DGV_RECT_PARMS mciRect;

};

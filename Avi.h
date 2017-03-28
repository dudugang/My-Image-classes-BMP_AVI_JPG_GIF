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
     	void MoveWindow(int x,int y,int cx,int cy);//�����츦 �̵�
     	void MoveCursor(DWORD posion,HWND hWnd);//������ �� �̵�
     	void Pause();//����
        BOOL Play();//play
		BOOL FramePrev (long point);//���� ���������� 
		BOOL Rewind (void);//ó������
		BOOL Foward (void); //������ 
		BOOL FrameNext (long point); //��������

	protected:	      
		CString m_strFileName;
		UINT wDeviceID;             
		MCI_DGV_OPEN_PARMS mciOpenParms;
		MCI_PLAY_PARMS mciPlayParms;
		MCI_DGV_WINDOW_PARMS mciWindow;
		MCI_DGV_RECT_PARMS mciRect;

};

#include "MyApp.h"

CMyApp MyApp;

BOOL CMyApp::InitInstance()
{
	CFrameWnd* pFrame = new CFrameWnd();
	CGridCtrl* myGridCtrl = new CGridCtrl();

	pFrame->Create(0,_T("A minimum MFC App"));

	pFrame->ShowWindow(SW_SHOWDEFAULT);

	pFrame->UpdateWindow();

	AfxGetApp()->m_pMainWnd = pFrame;

	return true;
}





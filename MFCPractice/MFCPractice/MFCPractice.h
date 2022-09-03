// MFCPractice.h : main header file for the MFCPractice application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCPracticeApp:
// See MFCPractice.cpp for the implementation of this class
//

class CMFCPracticeApp : public CWinApp
{
public:
	CMFCPracticeApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCPracticeApp theApp;
// MFCPracticeDoc.cpp : implementation of the CMFCPracticeDoc class
//

#include "stdafx.h"
#include "MFCPractice.h"

#include "MFCPracticeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCPracticeDoc

IMPLEMENT_DYNCREATE(CMFCPracticeDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCPracticeDoc, CDocument)
END_MESSAGE_MAP()


// CMFCPracticeDoc construction/destruction

CMFCPracticeDoc::CMFCPracticeDoc()
{
	// TODO: add one-time construction code here

}

CMFCPracticeDoc::~CMFCPracticeDoc()
{
}

BOOL CMFCPracticeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CMFCPracticeDoc serialization

void CMFCPracticeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CMFCPracticeDoc diagnostics

#ifdef _DEBUG
void CMFCPracticeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCPracticeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFCPracticeDoc commands

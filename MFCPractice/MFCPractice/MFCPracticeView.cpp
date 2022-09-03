// MFCPracticeView.cpp : implementation of the CMFCPracticeView class
//

#include "stdafx.h"
#include "MFCPractice.h"

#include "MFCPracticeDoc.h"
#include "MFCPracticeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCPracticeView

IMPLEMENT_DYNCREATE(CMFCPracticeView, CView)

BEGIN_MESSAGE_MAP(CMFCPracticeView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCPracticeView construction/destruction

CMFCPracticeView::CMFCPracticeView()
{
	// TODO: add construction code here

}

CMFCPracticeView::~CMFCPracticeView()
{
}

BOOL CMFCPracticeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCPracticeView drawing

void CMFCPracticeView::OnDraw(CDC* /*pDC*/)
{
	CMFCPracticeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMFCPracticeView printing

BOOL CMFCPracticeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCPracticeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCPracticeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCPracticeView diagnostics

#ifdef _DEBUG
void CMFCPracticeView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCPracticeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCPracticeDoc* CMFCPracticeView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCPracticeDoc)));
	return (CMFCPracticeDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCPracticeView message handlers

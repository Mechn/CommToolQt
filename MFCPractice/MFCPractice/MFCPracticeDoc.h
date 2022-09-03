// MFCPracticeDoc.h : interface of the CMFCPracticeDoc class
//


#pragma once


class CMFCPracticeDoc : public CDocument
{
protected: // create from serialization only
	CMFCPracticeDoc();
	DECLARE_DYNCREATE(CMFCPracticeDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CMFCPracticeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};



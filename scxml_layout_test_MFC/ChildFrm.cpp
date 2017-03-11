// ChildFrm.cpp : implementation of the CChildFrame class
//
#include "stdafx.h"
#include "scxml_layout_test_MFC.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWnd)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CChildFrame construction/destruction

CChildFrame::CChildFrame()
{
	// TODO: add member initialization code here
}

CChildFrame::~CChildFrame()
{
}


BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying the CREATESTRUCT cs
	if( !CMDIChildWnd::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}


// CChildFrame diagnostics

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
	CMDIChildWnd::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWnd::Dump(dc);
}

#endif //_DEBUG


// CChildFrame message handlers

int CChildFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here

	RECT rect;
	GetClientRect(&rect);
	CClientDC dc(this);
	CPoint m_P1;
	m_P1.x=10;
	m_P1.y=10;
	dc.MoveTo(m_P1);
	CPoint m_P2(1000,1000);
	dc.LineTo(m_P2);
	CBrush brush(RGB(5,255,255));

	dc.FillRect(CRect(m_P1,m_P2),&brush);

	HDC hdc;    //����һ��hdc
	hdc=::GetDC(m_hWnd);   //��ȫ�ֺ���HDC GetDC(HWND hWnd);����ȡ�豸�����������ȫ�ֺ�������ں���ǰ�ӡ�::������
	MoveToEx(hdc,m_P1.x,m_P1.y,NULL);
	LineTo(hdc,m_P2.x,m_P2.y);
	::ReleaseDC(m_hWnd,hdc);
	this->UpdateWindow();


	return 0;
}

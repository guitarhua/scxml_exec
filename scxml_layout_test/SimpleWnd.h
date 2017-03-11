/////////////////////////////////////////////////////////////////////
// SimpleWnd.h: interface for the CSimpleWnd class.
//
//////////////////////////////////////////////////////////////////////
#pragma  once
#include "stdafx.h"
#include <Windows.h>
#include "DrawGraph.h"
#ifndef SIMPLEWND_H
#define SIMPLEWND_H
class CSimpleWnd  
{
public:
	
		//////////////////////////////////////////////////////////////////////////
		//��Ҫ���ͼ�����ݶ��󣬴��ں͸ö���󶨣���ͬ���ڻ����ͼ��Ҳ��ͬ�������ػ�
		//�ڴ���֮ǰ�󶨣�������Create�д���ò���
	DrawGraph* m_DrawGraph;
//
	BOOL Create(HINSTANCE hInst,HWND hWndParent);
	BOOL ShowWindow(BOOL bShow);    
	CSimpleWnd();
	BOOL DrawMachine();
	void SkipToSubWnd();
	virtual ~CSimpleWnd();

//protected:
	BOOL RegisterWnd(HINSTANCE hInst,HWND hWndParent);
	LRESULT WndProc(HWND h, UINT u, LPARAM l, WPARAM w);
	//LRESULT WndProc(HWND hWnd, UINT wMsg, WPARAM wParam, LPARAM lParam);
	static LRESULT StaticWndProc(HWND hWnd, UINT wMsg, WPARAM wParam, LPARAM lParam);

	HWND m_hWnd;
	HWND m_hWndParent;
	HINSTANCE m_hInst;
};

#endif //#ifndef SIMPLEWND_H

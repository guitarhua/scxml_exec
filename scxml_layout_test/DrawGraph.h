#include "stdafx.h"
using namespace Gdiplus;
class DrawGraph
{
public:
	DrawGraph();
	~DrawGraph();
	Graphics* m_Graphics;//get the draw device
	ScxmlLayout* m_ScxmlLayout;//what want to draw
	const	char* m_SelectedRectId;//ѡ�е�rectId
	void DrawGraphAll();//����
	void Selected(long x,long y);//Ѱ�ұ�ѡ�е�rect�������
	
private:
	void DrawRects();
	void DrawLines();
	void DrawTexts();
	void DrawArrow(PointF* p1,PointF* p2,double theta,int length,bool iscurve);
};
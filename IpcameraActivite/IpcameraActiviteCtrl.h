#pragma once
#include "myipcameraactive.h"

// IpcameraActiviteCtrl.h : CIpcameraActiviteCtrl ActiveX �ؼ����������


// CIpcameraActiviteCtrl : �й�ʵ�ֵ���Ϣ������� IpcameraActiviteCtrl.cpp��

class CIpcameraActiviteCtrl : public COleControl
{
	DECLARE_DYNCREATE(CIpcameraActiviteCtrl)

// ���캯��
public:
	CIpcameraActiviteCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CIpcameraActiviteCtrl();

	DECLARE_OLECREATE_EX(CIpcameraActiviteCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CIpcameraActiviteCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CIpcameraActiviteCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CIpcameraActiviteCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
	};
	CMyipcameraactive mycamera_dalog;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


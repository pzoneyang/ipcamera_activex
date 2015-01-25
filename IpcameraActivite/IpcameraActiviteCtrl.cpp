// IpcameraActiviteCtrl.cpp : CIpcameraActiviteCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "IpcameraActivite.h"
#include "IpcameraActiviteCtrl.h"
#include "IpcameraActivitePropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CIpcameraActiviteCtrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CIpcameraActiviteCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CIpcameraActiviteCtrl, COleControl)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CIpcameraActiviteCtrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CIpcameraActiviteCtrl, 1)
	PROPPAGEID(CIpcameraActivitePropPage::guid)
END_PROPPAGEIDS(CIpcameraActiviteCtrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CIpcameraActiviteCtrl, "IPCAMERAACTIVITE.IpcameraActiviteCtrl.1",
	0x7153fe74, 0x406d, 0x4686, 0x89, 0x22, 0xb8, 0xda, 0x32, 0xe1, 0xd8, 0x8f)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CIpcameraActiviteCtrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DIpcameraActivite = { 0x6A8B8059, 0x56E, 0x4AD5, { 0xA7, 0xD4, 0x1B, 0x84, 0x33, 0xD5, 0xC4, 0x95 } };
const IID IID_DIpcameraActiviteEvents = { 0x98EBAAD6, 0x18B2, 0x4B10, { 0xAF, 0xD1, 0xF2, 0x44, 0x83, 0x52, 0x13, 0x71 } };

// �ؼ�������Ϣ

static const DWORD _dwIpcameraActiviteOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CIpcameraActiviteCtrl, IDS_IPCAMERAACTIVITE, _dwIpcameraActiviteOleMisc)

// CIpcameraActiviteCtrl::CIpcameraActiviteCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CIpcameraActiviteCtrl ��ϵͳע�����

BOOL CIpcameraActiviteCtrl::CIpcameraActiviteCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_IPCAMERAACTIVITE,
			IDB_IPCAMERAACTIVITE,
			afxRegApartmentThreading,
			_dwIpcameraActiviteOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CIpcameraActiviteCtrl::CIpcameraActiviteCtrl - ���캯��

CIpcameraActiviteCtrl::CIpcameraActiviteCtrl()
{
	InitializeIIDs(&IID_DIpcameraActivite, &IID_DIpcameraActiviteEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CIpcameraActiviteCtrl::~CIpcameraActiviteCtrl - ��������

CIpcameraActiviteCtrl::~CIpcameraActiviteCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}

// CIpcameraActiviteCtrl::OnDraw - ��ͼ����

void CIpcameraActiviteCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;
	mycamera_dalog.MoveWindow(rcBounds,TRUE);
	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣

	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
}

// CIpcameraActiviteCtrl::DoPropExchange - �־���֧��

void CIpcameraActiviteCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CIpcameraActiviteCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CIpcameraActiviteCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}


// CIpcameraActiviteCtrl ��Ϣ�������


int CIpcameraActiviteCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	mycamera_dalog.Create(IDD_MYDIALOG,this);
		return 0;
}

// IpcameraActivitePropPage.cpp : CIpcameraActivitePropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "IpcameraActivite.h"
#include "IpcameraActivitePropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CIpcameraActivitePropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CIpcameraActivitePropPage, COlePropertyPage)
	ON_BN_CLICKED(IDC_Get_pic, &CIpcameraActivitePropPage::OnBnClickedGetpic)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CIpcameraActivitePropPage, "IPCAMERAACTIVI.IpcameraActiviPropPage.1",
	0x9468a36c, 0xdf8d, 0x4315, 0x90, 0xe7, 0x7e, 0x1a, 0xeb, 0x5, 0x98, 0x80)

// CIpcameraActivitePropPage::CIpcameraActivitePropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CIpcameraActivitePropPage ��ϵͳע�����

BOOL CIpcameraActivitePropPage::CIpcameraActivitePropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_IPCAMERAACTIVITE_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CIpcameraActivitePropPage::CIpcameraActivitePropPage - ���캯��

CIpcameraActivitePropPage::CIpcameraActivitePropPage() :
	COlePropertyPage(IDD, IDS_IPCAMERAACTIVITE_PPG_CAPTION)
{
}

// CIpcameraActivitePropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CIpcameraActivitePropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CIpcameraActivitePropPage ��Ϣ�������


void CIpcameraActivitePropPage::OnBnClickedGetpic()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

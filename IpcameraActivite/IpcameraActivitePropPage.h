#pragma once

// IpcameraActivitePropPage.h : CIpcameraActivitePropPage ����ҳ���������


// CIpcameraActivitePropPage : �й�ʵ�ֵ���Ϣ������� IpcameraActivitePropPage.cpp��

class CIpcameraActivitePropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CIpcameraActivitePropPage)
	DECLARE_OLECREATE_EX(CIpcameraActivitePropPage)

// ���캯��
public:
	CIpcameraActivitePropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_IPCAMERAACTIVITE };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedGetpic();
};


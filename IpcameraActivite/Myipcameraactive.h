#pragma once
#include "afxwin.h"
#include <IPCDefine.h>
#include <IPCSdkDefines.h>
#include <IPCamera.h>

// CMyipcameraactive �Ի���

class CMyipcameraactive : public CDialogEx
{
	DECLARE_DYNAMIC(CMyipcameraactive)

public:
	CMyipcameraactive(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyipcameraactive();
	ipcHandle myipchandle;
	playHandle ipcPlayHandle;

// �Ի�������
	enum { IDD = IDD_MYDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CButton Get_Device;
	afx_msg void OnBnClickedGetDevice();
	afx_msg void OnBnClickedGetpic();
};

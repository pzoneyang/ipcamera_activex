// Myipcameraactive.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "IpcameraActivite.h"
#include "Myipcameraactive.h"
#include "afxdialogex.h"


// CMyipcameraactive �Ի���

IMPLEMENT_DYNAMIC(CMyipcameraactive, CDialogEx)

CMyipcameraactive::CMyipcameraactive(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyipcameraactive::IDD, pParent)
{

}

CMyipcameraactive::~CMyipcameraactive()
{
}

void CMyipcameraactive::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Get_Device, Get_Device);
}


BEGIN_MESSAGE_MAP(CMyipcameraactive, CDialogEx)
	ON_BN_CLICKED(IDC_Get_Device, &CMyipcameraactive::OnBnClickedGetDevice)
	ON_BN_CLICKED(IDC_Get_pic, &CMyipcameraactive::OnBnClickedGetpic)
END_MESSAGE_MAP()


// CMyipcameraactive ��Ϣ�������


void CMyipcameraactive::OnBnClickedGetDevice()
{
	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CWnd   *pWnd   =   GetDlgItem(IDC_STATIC);
	HWND hwnd = pWnd->GetSafeHwnd();
	INT isintial=ipcInitialize() ;
	 myipchandle = ipcCreateDevice();

	const char* account = "admin";
	const char * password="admin";
	const char * ip="192.168.1.2";
	int port = 30000;
	ipcConnect(myipchandle,account,password,ip);

	DWORD time = 5000;
	ipcWaitConnected(myipchandle,time);

	int isconnected = ipcIsConnected(myipchandle);

	//
	//HWND handle;
 ipcPlayHandle=ipcCreateLivePlay(myipchandle,hwnd,0,0);
	RECT rect;
	rect.top = 0;
	rect.bottom = 200;
	rect.left = 0;
	rect.right = 200;
	int issetrect=ipcSetDisplayRect(ipcPlayHandle,rect);
	int isstartPlay=ipcStartLivePlay(ipcPlayHandle);
}


void CMyipcameraactive::OnBnClickedGetpic()
{
	if (ipcPlayHandle!=NULL)
	{
		wchar_t szString[100];
		wcscpy_s(szString,L"E:\\Desktop\\\\123.jpg");
		const WCHAR*temp=szString;
		int getPic=ipcCapturePicture(ipcPlayHandle,2,temp);
	}
}

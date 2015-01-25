// IpcameraActivite.cpp : CIpcameraActiviteApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "IpcameraActivite.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CIpcameraActiviteApp theApp;

const GUID CDECL _tlid = { 0xC577E561, 0x7AE8, 0x4A82, { 0x98, 0xF8, 0x4A, 0x32, 0x3, 0x71, 0x2F, 0x5 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CIpcameraActiviteApp::InitInstance - DLL ��ʼ��

BOOL CIpcameraActiviteApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CIpcameraActiviteApp::ExitInstance - DLL ��ֹ

int CIpcameraActiviteApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}

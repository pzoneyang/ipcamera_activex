#pragma once

// IpcameraActivite.h : IpcameraActivite.DLL ����ͷ�ļ�

#if !defined( __AFXCTL_H__ )
#error "�ڰ������ļ�֮ǰ������afxctl.h��"
#endif

#include "resource.h"       // ������


// CIpcameraActiviteApp : �й�ʵ�ֵ���Ϣ������� IpcameraActivite.cpp��

class CIpcameraActiviteApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;


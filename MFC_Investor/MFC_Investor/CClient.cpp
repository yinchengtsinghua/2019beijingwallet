#include"stdafx.h"
#include"CClient.h"



HANDLE     m_hPipe;//命名管道实例句柄
void OnPipeConnect()
{
	//判断是否有可以利用的命名管道
	if (!WaitNamedPipe(L"\\\\.\\pipe\\MyPipe", //如果是跨网络通信，则在圆点处指定服务器端程序所在的主机名
		NMPWAIT_USE_DEFAULT_WAIT))
	{
		//MessageBox(0, L"当前没有可以利用的命名管道实例！", L"", 0);
		return;
	}

	//打开可用的命名管道，并与服务器端进程进行通信
	m_hPipe = CreateFile(L"\\\\.\\pipe\\MyPipe",
		GENERIC_READ | GENERIC_WRITE,
		0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	if (INVALID_HANDLE_VALUE == m_hPipe)
	{
		//MessageBox(0, L"打开命名管道失败！", L"", 0);
		m_hPipe = NULL;
		return;
	}
}


CString  OnPipeRead()
{
	wchar_t buf[100] = { 0 };
	DWORD dwRead;
	if (!ReadFile(m_hPipe, buf, 100, &dwRead, NULL))//利用命名管道读取数据  
	{
		MessageBox(0, L"读取数据失败！", L"", 0);
		return L"";
	}
	else
	{
		//wprintf(L"%s", buf);
		//MessageBox(0, buf, buf, 0);
		return buf;
	}
}


void OnPipeWrite(CString mystr)
{


	DWORD dwWrite;
	if (!WriteFile(m_hPipe, mystr, 2 * mystr.GetLength()+ 2, &dwWrite, NULL))//利用命名管道写入数据  
	{
		MessageBox(0, L"写入数据失败！", L"", 0);
		return;
	}
}







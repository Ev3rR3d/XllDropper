#include "stdafx.h"
#include <windows.h>
#include <shellapi.h>


short __stdcall xlAutoOpen()
{
	ShellExecute(NULL, L"open", L"powershell.exe", L"-Command \"Start-Process notepad\"", NULL, SW_SHOWNORMAL);

	return 1;
}
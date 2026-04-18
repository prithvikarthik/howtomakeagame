#include <windows.h>

#pragma warning (disable:28251) // Disables 'inconsistent annotation for WinMain' warning 

int CALLBACK 
WinMain(HINSTANCE hInstance,
					 HINSTANCE,
					 LPSTR lpCmdLine,
					 int nCmdShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);

	MessageBox(NULL, TEXT("Creating my own game!!"), TEXT("Handmade Hero"), MB_OKCANCEL | MB_ICONASTERISK);
	return 0;        
}
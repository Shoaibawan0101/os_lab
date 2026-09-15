#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	STARTUPINFOA si{}; 
	 PROCESS_INFORMATION pi{}; 
	 
	  si.cb =sizeof(si);  
	   char command[] = "cmd.exe /C echo I amthe child"; 
	   if(CreateProcessA
	   (  NULL, 
	    command, 
		 NULL, 
		  NULL, 
		  FALSE, 
		   0, 
		    NULL, 
			 NULL, 
			 &si, 
			  &pi)) { 
			cout << "I amtheparent\n"; 
			CloseHandle(pi.hThread); 
			 CloseHandle(pi.hProcess); 
	}
}

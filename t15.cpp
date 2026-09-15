#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	HANDLE readPipe, writePipe;
	 CreatePipe( &readPipe,  &writePipe, NULL,  0  ); 
	  const char message[] =  "Hello through the pipe!";
	   DWORD written, read;
	    char buffer[100] = {}; 
		 WriteFile(  writePipe,  message, sizeof(message), &written,  NULL ); 
		  ReadFile( readPipe,buffer,  sizeof(buffer),  &read,  NULL  ); 
		  cout << buffer <<"\n"; 
		   CloseHandle(readPipe); 
	 CloseHandle(writePipe);
}

#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	MEMORYSTATUSEX memory{}; 
	 memory.dwLength = sizeof(memory); 
	  GlobalMemoryStatusEx(&memory); 
	  cout << "Total RAM: " << memory.ullTotalPhys/ (1024 * 1024)  << " MB\n"; 
	  cout << "Available RAM: " << memory.ullAvailPhys  / (1024 * 1024) 
	 << " MB\n";
}

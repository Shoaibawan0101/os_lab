#include <iostream>
#include <thread>
using namespace std;
int main(){
	voidworker() { 
	cout  << "Worker thread is running\n";
	} 
	thread t(worker); 
	cout  << "Main thread is running\n";
	 t.join();
}

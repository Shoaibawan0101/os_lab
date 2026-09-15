#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int main(){
	int counter =0; 
	 mutex m;
	 void add(){ 
	  for (int i= 0; i < 1000; ++i) { 
	   lock_guard<std::mutex> lock(m);
	    ++counter;
		 }
		  }
}

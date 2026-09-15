#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main(){
	cout<< "Going to Sleep \n";
	this_thread::sleep_for(chrono::seconds(3));
	cout<< "Waking up \n";
	
}

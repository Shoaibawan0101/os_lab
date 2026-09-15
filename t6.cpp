#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	const char* user = getenv("Shoaib");
	if(user != NULL){
		cout<<"Current user is: "<<user<< "\n";
	}
}

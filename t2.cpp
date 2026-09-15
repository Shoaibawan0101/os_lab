#include <iostream>
#include <fstream>
using namespace std;
int main(){
	std::ofstream file("diary.txt");
	file<< "Hello OS \n";
	file.close();
}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	string cheerbook;
	dest << "-------------------- BOOM ---------------------\n";
	while(getline(source,cheerbook)){
		dest << cheerbook << "\n";
	}
	dest << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}

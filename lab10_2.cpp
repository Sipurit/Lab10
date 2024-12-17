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
	while(getline(source,cheerbook)){
		cout << cheerbook << "\n";
	}

    source.close();
    dest.close();
	return 0;
}

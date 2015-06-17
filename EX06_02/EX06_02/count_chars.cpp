#include <iostream>
#include <string> 
#include <fstream>
using namespace std;
int main(){
	string filename;
	
	cout << "give me your filename";
	cin >> filename;
	fstream file(filename, ios::in);

	

	file.seekp(0, ios::beg);

	int count = 0;
	char character;
	while (file >> character){
		count++;
	}
file.clear();
	cout << count << endl;

}
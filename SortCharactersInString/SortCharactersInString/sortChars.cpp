#include <iostream>
#include <string>
using namespace std;

string sort(string&s);

int main(){
	string s;
	cout << "enter a string: ";
	cin >> s;
	cout << sort(s) << endl;


}
string sort(string&s){
	string exchange;
	bool changed = true;
	do{
		changed = false;
		for (int i = 0; i < (s.length() - 1); i++){
			if (s.at(i) > s.at(i + 1)){
				char exchange;
				exchange = s.at(i);
				s.at(i) = s.at(i + 1);
				s.at(i + 1) = exchange;
				changed = true;
			}
		}
	} while (changed);
	return s;
}
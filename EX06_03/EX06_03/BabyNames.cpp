#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	fstream fin;
	int year;
	char gender;
	string _name;
	cout << "Enter a year between 2001-2010: ";
	cin >> year;
	cout << "Enter a gender: ";
	cin >> gender;
	cout << "Enter a name: ";
	cin >> _name;
	if (year == 2001){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
		}
		if (gender == tolower('f')){
			fin >> _name;
		}

	}
	else if (year == 2002){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}
		if (gender == tolower('f')){
			fin >> _name;
		}
	}
	else if (year == 2003){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}
		if (gender == tolower('f')){
			fin >> _name;
		}
	}
	else if (year == 2004){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}
		if (gender == tolower('f')){
			fin >> _name;
		}
	}
	else if (year == 2005){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}if (gender == tolower('f')){
			fin >> _name;
		}
	}
	else if (year == 2006){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}if (gender == tolower('f')){
			fin >> _name;
		}
	}
	else if (year == 2007){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}if (gender == tolower('f')){
			fin >> _name;
		}
	}
	else if (year == 2008){
		fin.open("babynameranking2001.txt");
		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}if (gender == tolower('f')){
			fin >> _name;
		}

	}
	else if (year == 2009){
		fin.open("babynameranking2001.txt");

		if (gender == tolower('m')){
			fin >> _name;
			fin.seekg(-1, ios::cur);
		}if (gender == tolower('f')){
			fin >> _name;
		}
		else if (year == 2010){
			fin.open("babynameranking2001.txt");
			if (gender == tolower('m')){
				fin >> _name;
				fin.seekg(-1, ios::cur);
			}if (gender == tolower('f')){
				fin >> _name;
			}
		}
		else
			cout << "that is n invalid year";

	}
}
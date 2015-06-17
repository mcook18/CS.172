#include<iostream>
#include<vector>
#include<string>
#include <fstream>
using namespace std;

class Runner{
private:
	string firstname;
	string lastname;
	int pace;
public:
	Runner(string _fname, string _lname, int _pace);
	string get_firstname();
	string get_lastname();
	int get_pace();

};
Runner::Runner(string _fname, string _lname, int _pace){
	firstname = _fname;
	lastname = _lname;
	pace = _pace;
}
string Runner::get_firstname(){
	
	
	return firstname;
}
string Runner::get_lastname(){
	
	
	return lastname;

}
int Runner::get_pace(){
	return pace;
}
vector <Runner> ReadFile(); 
void sortrunners(vector <Runner>Blooms);
int main(){
	
	sortrunners(ReadFile());

}
vector<Runner> ReadFile(){
string Registrants = "C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\registrants.txt";
fstream ifile(Registrants, ios::in );
vector <Runner> Blooms;

string _fname, _lname;
int _pace;
ifile.seekp(0, ios::beg);
while (ifile >> _fname >> _lname >> _pace){
	
	Blooms.push_back(Runner(_fname, _lname, _pace));
	
}
ifile.clear();
ifile.close();
return Blooms;
}
void sortrunners(vector <Runner> Blooms){
	int _pace;
	for (int unsigned count = 0; count < ((Blooms.size()) - 1); count++){
		_pace = (Blooms[count].get_pace());

		if ((_pace >= 0) && (_pace <= 360)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\white.txt");
			fout << Blooms[count].get_firstname() <<" "<< Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else if ((_pace >= 361) && (_pace <= 420)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\yellow.txt");
			fout << Blooms[count].get_firstname() <<" "<< Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else if ((_pace >= 421) && (_pace <= 480)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\green.txt");
			fout << Blooms[count].get_firstname() <<" "<< Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else if ((_pace >= 481) && (_pace <= 540)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\orange.txt");
			fout << Blooms[count].get_firstname() <<" "<< Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else if ((_pace >= 541) && (_pace <= 600)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\blue.txt");
			fout << Blooms[count].get_firstname() << " " << Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else if ((_pace >= 601) &&( _pace <= 720)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\lilac.txt");
			fout << Blooms[count].get_firstname()<<" " << Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else if ((_pace >= 721) && (_pace <= 1200)){
			fstream fout;
			fout.open("C:\\Users\\Madeline\\Documents\\GitHub\\CS.172\\Exam2_Bloomsday\\red.txt");
			fout << Blooms[count].get_firstname()<<" " << Blooms[count].get_lastname() << Blooms[count].get_pace() << endl;
			fout.close();
		}
		else{
			cout << "that is an invalid pace" << endl;
		}

	}
}
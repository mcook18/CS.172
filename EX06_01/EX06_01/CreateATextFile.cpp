#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
	ofstream fout;
	fout.open("Exercise13_1.txt");
	if (fout.fail()){
		cout << "Cannot open file." << endl;
		return 0;
	}
	srand(time(NULL));
	int random;
	for (int i = 0; i < 100; i++){
		random = rand() % 10;
		fout <<random << endl;

	}

	fout.close();
}
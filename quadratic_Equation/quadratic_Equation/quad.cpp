#include <iostream>
using namespace std;

class QuadraticEquation{
public:
	int a;
	int b;
	int c;
	int geta();
	int getb();
	int getc();
	int getdescrim(int a,int b,int c);
	double getroot1(int a, int b, int c);
	double getroot2(int a, int b, int c);

	QuadraticEquation(){
		a = 0;
		b = 0;
		c = 0;
	}

};



int main(){
	QuadraticEquation;

	geta();
	getb();
	getc();

}

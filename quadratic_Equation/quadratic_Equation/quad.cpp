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

int geta();
int getb();
int getc();
int getdescrim(int a, int b, int c);
double getroot1(int a, int b, int c);
double getroot2(int a, int b, int c);


int main(){
	QuadraticEquation EQ;

	geta();
	getb();
	getc();
	cout << getdescrim(a, b, c)
}

int geta(){
	int a;
	cout << "What number do you want A to be?";
	cin >>a;
	return a;
}
int getb(){
	int b;
	cout << "What number do you want B to be?";
	cin >> b;
	return b;
}
int getc(){
	int c;
	cout << "What number do you want C to be?";
	cin >> c;
	return c;
}
int getdescrim(int a, int b, int c){
	int descrim = pow(b, 2) - 4 * a*c;
	return descrim;
}
double getroot1(int a, int b, int c, int & descrim){
	int root1 = (-b + (sqrt(descrim))) / 2 * a;
	return root1;
}
double getroot2(int a, int b, int c, int&descrim){
	int root2 = (-b - (sqrt(descrim))) / 2 * a;
	return root2;
}
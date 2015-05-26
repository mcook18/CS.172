#include <iostream>
using namespace std;

class QuadraticEquation{
private:
	int a;
	int b;
	int c;
public:
	int geta();
	int getb();
	int getc();
	int getdescrim();
	double getroot1();
	double getroot2();

	QuadraticEquation(int x,int y,int z){
		a = x;
		b = y;
		c = z;
	}

};

int QuadraticEquation::geta(){ return a; }
int QuadraticEquation::getb(){ return b; }
int QuadraticEquation::getc(){ return c; }
int QuadraticEquation::getdescrim(){
	int descrim = pow(b, 2) - 4 * a*c;
	return descrim;
}
double QuadraticEquation::getroot1(){
	int root1 = (-b + (sqrt(pow(b,2)-4*a*c))) / 2 * a;
	return root1;
}
double QuadraticEquation::getroot2(){
	int root2 = (-b - (sqrt(pow(b, 2) - 4 * a*c))) / 2 * a;
	return root2;
}


int main(){
	int x, y, z;
	cout << "Give me 3 numbers" << endl;
	cin >> x >> y >> z;
	QuadraticEquation EQ(x,y,z);
	
	cout<<"a: "<<EQ.geta()<<" ";
	cout<<"b: "<<EQ.getb()<<" ";
	cout<<"c: "<<EQ.getc()<<" ";
	cout<<"the descriminate is " << EQ.getdescrim() << endl;
	if (EQ.getdescrim() < 0)
		cout << "The equation has no real roots" << endl;
	else if (EQ.getdescrim() == 0)
		cout << "the only root is " << EQ.getroot1() << endl;
	else{
		cout << "root 1 is " << EQ.getroot1() << endl;
		cout << "root 2 is " << EQ.getroot2() << endl;
	}
}



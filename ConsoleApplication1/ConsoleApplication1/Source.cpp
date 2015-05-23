#include <iostream>

using namespace std;

class Fan{
public:
	int speed;
	bool on;
	double radius;

	Fan(){
		speed = 1;
		on = false;
		radius = 5;
	}

};


int main(){
	
	Fan F1;
	F1.speed = 3;
	F1.radius = 10;
	F1.on = true;
	cout << "Fan 1 speed is " << F1.speed << endl;
	cout << "Fan 1 radius is " << F1.radius << endl;
	if (F1.on == true)
		cout << "Fan 1 is on" << endl;
	else
		cout << "Fan 1 is off" << endl;
	cout << endl;

	Fan F2;
	F2.speed = 2;
	cout << "Fan 2 speed is " << F2.speed << endl;
	cout << "Fan 2 radius is " << F2.radius << endl;
	if (F2.on == true)
		cout << "Fan 2 is on" << endl;
	else
		cout << "Fan 2 is off" << endl;

}
#include <iostream>
using namespace std;

class EvenNumber{
private:
	int value;
public:
	int getvalue();
	int getnext();
	int getprevious();

	EvenNumber(int x){
		value = x;
		
	}
};

int EvenNumber::getvalue(){ return value; }
int EvenNumber::getnext(){
	int x= value+2;
	return x;
}
int EvenNumber::getprevious(){
	int x= value-2;
	return x;
}
int main(){
	
	EvenNumber NUM(16);
	cout<< NUM.getvalue() << endl;
	cout <<"The next even number is "<< NUM.getnext() << endl;
	cout << "the previous even number is " << NUM.getprevious() << endl;
}
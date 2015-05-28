#include <iostream>

using namespace std;
class MyInteger{
public:
	int value;

	bool isEven()const;
	bool isOdd()const;
	bool isPrime()const;
	bool equals(int);
	
	MyInteger(int x){
		value = x;
		}
	MyInteger(){
		value = 2;
	}

};

bool MyInteger::isEven()const{
	bool even = false;
	if (value % 2 == 0){
		even = true;
	}
	return even;
}
bool MyInteger::isOdd()const{
	bool odd = false;
	if (value % 2 != 0){
		odd = true;
	}
	return odd;
}
bool MyInteger::isPrime()const{
	bool prime=false;
	int n, m, num;
	num = m*n;
	num = value;
	if ((m == 1 || n == 1)&& value!=1){
		prime = true;
	}
	return prime;
}
bool equals(int){
	bool equal = false;
	return equal;
}
bool equals(const MyInteger&);

bool isEven(int value){
	bool even = false;
	if (value % 2 == 0){
		even = true;
	}
	return even;
}
bool isOdd(int value){
	bool odd = false;
	if (value % 2 != 0){
		odd= true;
	}
	return odd;
}
bool isPrime(int value){
	bool prime;
	int m, n, num;
	num = n*m;
	num = value;
	if ((n == 1 || m == 1) && value != 1){
		prime = true;
	}
	return prime;
}


int main(){
	
	int x;
	cout << "Give me a number";
	cin >> x;
	MyInteger NUM(x);
	cout << "your Number is even is a " << NUM.isEven << "statement" << endl;
	cout << "your Number is odd is a " << NUM.isOdd << "statement" << endl; 
	cout << "your Number is prime is a " << NUM.isPrime << "statement" << endl;
	cout << "your Number is even is a " << isEven(x) << "statement" << endl;
	cout << "your Number is odd is a " << isOdd(x) << "statement" << endl;
	cout << "your Number is Prime is a " << isPrime(x) << "statement" << endl;
}

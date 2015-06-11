#include <iostream>
#include <string>
using namespace std;

class Vector{
private:
	int *_vec;
	int _size;
	int _count;

public:
	Vector();
	Vector(int size);
	Vector(int size, int defalutValues);

	void push_back(int element);
	void pop_back();
	unsigned const int size();
	const int at(int index);
	const bool empty();
	void clear();
	void swap(Vector&V2);

};
Vector::Vector(){
	_vec = new int[0];
	_size = 1;
	_count = 0;
}
Vector::Vector(int size){
	_vec = new int[size];
	_size = size;
	_count = 0;
}
Vector::Vector(int size, int defalutValues){
	_vec = new int[size];
	_size = size;
	_count = size;
	for (int i = 0; i < size; i++){
		_vec[i] = defalutValues;
	}
}

void Vector::push_back(int element){
	if (_count == _size){
		int *pintarray2 = new int[2 * _size];
		for (int i = 0; i < _size; i++)
			pintarray2[i] = _vec[i];
	}
	_vec[_count] = element; 
	_count++;
}
void Vector::pop_back(){ _count--; }
unsigned const int Vector::size(){
	return _count;
}
const int Vector::at(int index){
	return _vec[index];
}
const bool Vector::empty(){
	bool empty = false;
	if (_count == 0){
		empty = true;
	}
	return empty;
}
void Vector::clear(){
	_count = 0;
}
void Vector::swap(Vector&V2) {
	Vector tmp;
	for (int i = 0; i < V2.size(); i++){
		tmp.push_back(V2.at(i));
	}
	V2.clear();
	for (int i = 0; i < this->size(); i++){
		V2.push_back(this->at(i));
	}
	this->clear();
	for (int i = 0; i < tmp.size(); i++){
		this->push_back(tmp.at(i));
	}

}


int main(){
	Vector V1;
	V1.push_back(6);
	V1.push_back(7);
	V1.push_back(8);
	Vector V2;
	V2.push_back(1);
	V2.push_back(2);
	V2.push_back(3);
	V2.pop_back();
	V1.pop_back();

	cout << V1.empty() << " " << V2.empty() << endl;

	V1.swap(V2);
	



}
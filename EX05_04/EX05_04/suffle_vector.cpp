#include<iostream>
#include <vector>
#include <ctime>

using namespace std;

template<typename T>
void shuffle(vector<T>& v){
	srand(time(NULL));
	vector<int>temp;
	for (int i = 0; i < v.size(); i++){
		temp.push_back(v.at(i));
	}
	v.clear();


	while (temp.size() > 0) {
		int idx = rand() % temp.size();
		v.push_back(temp.at(idx));
		temp.erase(temp.begin() + idx);
	}
}
int main(){
	vector<int> v1;
	for (int i = 0; i < 10; i++){
		cout << "enter a number: ";
		int num;
		cin >> num;
		v1.push_back(num);
	}
	shuffle(v1);

	for (int i = 0; i < 10; i++){
		cout << v1[i] << endl;
	}
}
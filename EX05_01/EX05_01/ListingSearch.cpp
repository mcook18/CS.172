#include <iostream>
#include <string>

using namespace std;

template <typename T>
int listingSearch(const T List[], T key, int arraySize){
	for (int i = 0; i < arraySize; i++){
		if (key == List[i]){
			return i;
		}
	}
	return -1;
}
//to save time i am putting the EX_02 function in with this code

template <typename t>
bool isSorted(const t list[], int size){
	bool sorted = false;
	for (int i = 0; i < size; i++){
		if (list[i] < list[i + 1]){
			sorted = true;
		}
		else
			sorted = false;
	}
	return sorted;
}

int main(){
	string a = "fantasy";// i used a variable here because without it my program thought the word was an array of chars
	int ListInts[]= { 1, 4, 4, 2, 5, -3, 6, 2 };
	double ListDoubles[] = { 1.1, 2.7, 8.2, 4.3, 5.6, 8.9, 6.8, 5.7 };
	string ListString[] = { "is", "this", "real", "life", "or", "is", "this", "just", "fantasy" };
	cout<<listingSearch(ListInts, 5, 8)<<endl;
	cout<<listingSearch(ListDoubles, 6.6, 8)<<endl;
	cout<<listingSearch(ListString, a, 9)<<endl;
	cout << isSorted(ListInts, 8) << endl;
	cout << isSorted(ListDoubles, 8) << endl;
	
}

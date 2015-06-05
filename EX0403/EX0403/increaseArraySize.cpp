#include <iostream>

using namespace std;
int*doubleCapacity(int* list, int size){
	int *pintarray2 = new int[2 * size];
	for (int i = 0; i < 2 * size; i++)
		pintarray2[i] = *list;

	return pintarray2;
}
int* alloc_array(int size){
	int *pintarray = new int[size];
	for (int i = 0; i < size; i++)
		pintarray[i] = 42;
	return pintarray;
}
void promt_count(int*size){
	cout << "how many numbers will you enter? ";
	cin >> *size;

}
void populate_numbers(int*numbers, int size){
	for (int *curr = numbers; curr < numbers + size; curr++){
		cout << "enter number: ";
		cin >> *curr;
	}
}
int main(){
	int nums;
	promt_count(&nums);
	int * numbers = alloc_array(nums);
	int * numbersTimes2 = doubleCapacity(numbers, nums);
	populate_numbers(numbersTimes2, nums);
	delete[] numbers;
	delete[]numbersTimes2;
}
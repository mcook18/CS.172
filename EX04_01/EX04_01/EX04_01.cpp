#include <iostream>

using namespace std;
void promt_size(int*size){
	cout << "how many numbers will you enter? ";
	cin >> *size;
}
void populate(int *numbers, int size){
	for (int *curr = numbers; curr < numbers + size; curr++){
		cout << "enter number: ";
		cin >> *curr;
	}
}
int* allocarray(int size){
	int *point_array = new int[size];
	for (int i = 0; i < size; i++){
		*point_array = 7;
	}
	return point_array;
}
double average(int *numbers, int size){
	int sum=0;
	double average;
	for (int *curr = numbers; curr < numbers + size; curr++)
	{
		sum += *curr;
	}
	average = sum / size;
	return average;
}
int aboveavg(int *numbers, int size){
	int sum=0;
	double average;
	int aboveavg = 0;
	for (int *curr = numbers; curr < numbers + size; curr++)
	{
		sum += *curr;
	}
	average = sum / size;
	for (int *curr2 = numbers; curr2 < numbers + size; curr2++){
		if (*curr2 > average)
			aboveavg++;
	}
	return aboveavg;
}
int main(){
	int nums;
	promt_size(&nums);
	int *numbers = allocarray(nums);
	populate(numbers, nums);
	cout << "the average was " << average(numbers, nums) << endl;
	cout << "there were " << aboveavg(numbers, nums) << " above average." << endl;

	delete[] numbers;
}
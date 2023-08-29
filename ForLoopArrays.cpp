#include <iostream>

#include <cmath>

#include <string>

using namespace std;
void readArrayDtat(int arr[100], int & length) {
	cout << "How Many Numbers do you want to enter? 1 to 100?" << endl;
	cin >> length;
	for(int i = 0; i <= length - 1; i++) {
		cout << "Please enter Number " << i + 1 << endl;
		cin >> arr[i];
	}
}
void printArrayDtat(int arr[100], int length) {
	for(int i = 0; i <= length - 1; i++) {
		cout << "Number [" << i + 1 << "] : " << arr[i] << endl;
	}
}
int CalculateArraySum(int arr[100], int length) {
	int sum = 0;
	for(int i = 0; i <= length - 1; i++) {
		sum += arr[i];
	}
	return sum;
}
float averageArrayData(int arr[100], int length) {
	return (float) CalculateArraySum(arr, length) / length;
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int arr[100], length = 0;
	
	readArrayDtat(arr, length);
	printArrayDtat(arr, length);
	
	cout << "sum Array Data " << CalculateArraySum(arr, length) << endl;
	cout << "average Array Data " << averageArrayData(arr, length) << endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
/*
 g++ index.cpp -o index.exe
index.exe

*/
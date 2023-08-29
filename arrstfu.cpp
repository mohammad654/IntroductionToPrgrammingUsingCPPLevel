#include <iostream>

#include <cmath>

#include <string>

using namespace std;
struct stInfo {
	string name;
	int phone;
};
void readInfo(stInfo & info) {
	cout << "Enter name of person" << endl;
	cin.ignore(1, '\n');
	getline(cin, info.name);
	cout << "Enter phone number of person " << endl;
	cin >> info.phone;
}
void printInfo(stInfo info) {
	cout << "name : " << info.name << endl;
	cout << "phone number : " << info.phone << endl;
}
void readPersonInfo(stInfo person[2]) {
	readInfo(person[0]);
	readInfo(person[1]);
}
void printPersonInfo(stInfo person[2]) {
	printInfo(person[0]);
	printInfo(person[1]);
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	cout << "C++" << endl;
	stInfo person[2];
	readPersonInfo(person);
	printPersonInfo(person);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}

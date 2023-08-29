#include <iostream>

#include <cmath>

#include <string>

using namespace std;

struct stInfo {
	string name;
	int phone;
};

void readInfo(stInfo &person) {
	cout<<"what is your name? "<<endl;
	cin.ignore(1,'\n');
	getline(cin,person.name);
	cout<<"what is your phone number?"<<endl;
	
	cin>>person.phone;	
}
void printInfo(stInfo person) {
	cout<<"name is :"<< person.name<<endl;
	cout<<"phone "<< person.phone<<endl;
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	cout << "C++" << endl;
	
	stInfo person1,person2;
	readInfo(person1);
	printInfo(person1);
	readInfo(person2);
	printInfo(person2);
	
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}

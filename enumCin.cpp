#include <iostream>

#include <cmath>

#include <string>

using namespace std;

enum enInfo { CPP = 1, C_SHARP = 2, JAVA = 3 };


int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	cout << "C++" << endl;
	
	cout<<"choose language?" <<endl;
	cout<<"(1)C++" <<endl;
	cout<<"(2)C#" <<endl;	
	cout<<"(3)Java" <<endl;
	
	enInfo info ;
	int c;
	
	cin>>c;	
	info=(enInfo) c;
	
 if (info == enInfo::CPP) {
        cout << "=> C++" << endl;
    }else if (info == enInfo::C_SHARP){
		 cout << "=> C#" << endl;
	}
	else if (info == enInfo::JAVA){
		 cout << "=>Java " << endl;
	}
	else{
	 cout << "other" << endl;	
	}
	
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
/*
 g++ index.cpp -o index.exe
index.exe

*/
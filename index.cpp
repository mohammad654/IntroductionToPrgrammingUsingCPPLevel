#include <iostream>

#include <cmath>

#include <string>

using namespace std;

int main()
{
	std::cout << "\n\n\n\n****************************************************\n\n";
	for (int i = 10; i >= 1; i--)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
/*
 g++ index.cpp -o index.exe
index.exe
git remote set-url origin https://github.com/C-/C++.git

*/
//============================================================================
// Name        : MyFirstProject.cpp
// Author      : adam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//comment
	int variable1 = 5;
	int variable2 = 2;
	int variable3 = 10;
	int variable4 = 0;
	cout << "Variable 1 is " << variable1 <<  endl;
	cout << "variable 2 is " << variable2 << endl;// prints !!!Hello World!!!

	cout << variable3 << endl;

	variable3 = (variable1 + variable2);

	cout << variable3 << endl;

	variable3 = (variable1 / variable2);
	cout << variable3 << endl;
	//+ - * / %
	variable4 = (variable1 % variable2);
	cout << variable4 << endl;

    cout << "The division " << variable1 << " by " << variable2 << " is " << variable3 << " with a remainder of " << variable4;

	return 0;
}

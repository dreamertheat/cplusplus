//============================================================================
// Name        : Unrealistic.cpp
// Author      : Sanctus Ignis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Employee.h"
using namespace std;

void process(double* amount);

int main() {

	double attack = 100.5;
	process(&attack);
	cout<<"original: "<<attack<<endl;
	return 0;
}

void process(double* amount){
	*amount =10.0;
	cout<<*amount<<endl;
}

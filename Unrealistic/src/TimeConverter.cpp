
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
void timeConverter(double sec){
	double hours =  floor(sec/3600);
	double minutes = floor(((sec/3600)-hours)*60);
	double seconds= ((((sec/3600)-hours)*60)-minutes)*60;


	cout<<"hours"<<hours<<endl;
	cout<<"minutes"<<minutes<<endl;
	cout<<"seconds"<<seconds<<endl;
}

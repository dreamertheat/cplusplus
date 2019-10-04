/*
 * Employee.h
 *
 *  Created on: Oct 4, 2019
 *      Author: dream
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
using namespace std;
class Employee {

	private:
		int id;
		int age;
		string first_name;
		string last_name;
	public:
		void setID(int id);
		void setAge(int age);
		void setMultiplier(double *amount);
		void setFirstName(string first_name);
		void setLastName(string last_name);
		int getID();
		int getAge();
		string getFirstName();
		string getLastName();
		//constructors
		Employee(int id, int age, string first_name, string last_name);
		Employee(int age, string first_name, string last_name);
		//deconstructors
		~Employee();
};



#endif /* EMPLOYEE_H_ */

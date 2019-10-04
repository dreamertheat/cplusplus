/*
 * Employee.cpp
 *
 *  Created on: Oct 4, 2019
 *      Author: dream
 */
#include <iostream>
#include "Employee.h"

using namespace std;
//constructors
//using this keyword/java way
Employee::Employee(int id, int age, string first_name, string last_name) {
	this->id = id;
	this->age = age;
	this->first_name = first_name;
	this->last_name = last_name;
}
//c++ shorthand
Employee::Employee(int age, string first_name, string last_name) :
		id(999), age(age), first_name(first_name), last_name(last_name) {
}
Employee::~Employee(){
	cout<<"deconstructor";
}
//setters
void Employee::setID(int id) {
	this->id = id;
}

void Employee::setAge(int age) {
	this->age = age;
}
void Employee::setMultiplier(double *amount) {
	cout<<"raw amount:"<<amount<<endl;
	cout<<"pointer amount:"<<*amount<<endl;
	cout<<"memory amount:"<<&amount<<endl;
	double amounter = *amount;
	cout <<"amounter"<<amounter<<endl;
	cout <<"amounter2"<<&amounter<<endl;
}
void Employee::setFirstName(string first_name) {
	this->first_name = first_name;
}
void Employee::setLastName(string last_name) {
	this->last_name = last_name;
}
//getters
int Employee::getID() {
	return id;
}
int Employee::getAge() {
	return age;
}
string Employee::getFirstName() {
	return first_name;
}
string Employee::getLastName() {
	return last_name;
}

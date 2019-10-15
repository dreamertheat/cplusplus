/*
 * Main.cpp
 *
 *  Created on: Oct 4, 2019
 *      Author: dream
 */
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void timeConverter(double seconds);
void justSomeVoid(int &p);
void pointerMaster();

class Person{
	private:
	string name;
	int age;
	public:
	~Person(){cout<<"constructor"<<endl;}
	Person(){cout<<"constructor"<<endl;}
	Person(int age):age(3){cout<<"constructorz"<<endl;}
	Person(Person &person):age(age=person.age){cout<<"constructor2"<<endl;}
	void setAge(int age){this->age=age;}
	int getAge(){return age;}
	void setName(string name){this->name=name;}
	string getName(){return name;}
};

class Creature{
private:
	int id;
	int life;
public:
	Creature(int id, int life):id(id),life(life){

	}

	string getInfo(){

		return "id: "+id;
	}
};




int main() {

	Creature d(50,9000);
	cout<<d.getInfo();

	cout<<"\n\n\n\n\n\n\n\n"<<endl;


	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char sentence[] = "the jaguar's film body pounce quake wave";
	cout <<sizeof(alphabet)<<endl;
	for(unsigned int g=0;g<sizeof(alphabet)-1;g++){
		for(unsigned int x=0;x<sizeof(sentence)-1;x++){
			if(alphabet[g]==sentence[x]){
				alphabet[g]=' ';
			}
		}
	}

	cout<<alphabet<<endl;





	Person p;
	Person c=p;

	p.setAge(100);
	cout<<c.getAge()<<endl;
	cout<<p.getAge()<<endl;

	cout<<"eeeeeeeeeeeeeeeeeeeeeeeend"<<endl;
	//call anything you want here

	string names[4] = {"Mathew","Mark","Luke","John"};
	string* employees = names;

	string* p1 = &names[0];
	string* p2 = &names[sizeof(names)/sizeof(string)];
	//regular iteration
	for(int g=0;g<sizeof(names)/sizeof(string);g++){
		//cout<<names[g]<<endl;
		cout<<"("+*employees<<endl;
		*employees++;
	}

	while(true){
		cout<<*p1<<endl;
		p1++;
		if(p1==p2){
			break;
		}
	}

	cout<<endl;
	int var1 = 800;
	int var0 = 100;
	int *var3 = &var1;
	int &var2 = var1;
	//var1=var0;
	//&var2 = var0; //cannot be! references cannot be reassigned
	cout<<var2<<endl;

	justSomeVoid(var1);

	Person *dpv = new Person();
	(*dpv).setAge(1);
	cout<<"person age:"<<dpv->getAge()<<endl;

	pointerMaster();

}

void justSomeVoid(int &p){
	cout<<p;
}
void freeMemory(char *word){
	cout<<"freeing memory"<<endl;
	delete [] word;
}
char *newMemory(){
	char *word = new char[10];
	return word;
}
void pointerMaster(){
	char *x = new char[100];
	cout<<sizeof(x)<<endl;
	freeMemory(x);
	delete [] x;
	cout<<"new "<<sizeof(x)<<endl;
}


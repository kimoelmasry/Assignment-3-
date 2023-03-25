#include <iostream>
#include "Person.h";
using namespace std;

Person::Person()
{
	name = "";
	ID = 0;
	age = 0;

}
void Person::setName(string name)
{
	this->name = name;

}
void Person::setID(int ID)
{
	this->ID = ID;

}
void Person::setAge(int age)
{
	this->age =age;

}

string Person::getName()
{
	return name;
}

int Person::getID()
{
	return ID;
}
int Person::getAge()
{
	return age;
}
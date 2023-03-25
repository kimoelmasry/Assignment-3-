#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Customer :public Person
{
private:
	int MechanicID;
	Appointment app;
public:
	void setMech(int);
	int getMech();
	void setApp(int, int);
	Appointment viewApp();
	void operator<(Appointment ap2);
	void operator>(Appointment ap2);
	void operator==(Appointment ap2);
	void printInfo();

	

};

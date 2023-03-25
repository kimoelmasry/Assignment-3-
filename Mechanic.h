#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Mechanic :public Person
{
private:
	int counter = 0;
	Appointment booked[10];
public:
	bool isAvail(Appointment );
	void setApp(Appointment );
	Appointment getApp(int);
	void printInfo();






};
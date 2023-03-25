#include <iostream>
#include "Person.h"
#include "Mechanic.h"
using namespace std;

void Mechanic::printInfo()
{
	cout << "Name:" << getName() << endl;
	cout << "Age:" << getAge() << endl;
	cout << "ID:" << getID()<<endl;
	cout << "Current Customers:" << counter<<endl;
	cout << "This mechanic's booked times are:" << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << booked[i].hours << ":" << booked[i].min;
		
	}


}
bool Mechanic::isAvail(Appointment A)
{
	for (int i = 0; i < counter; i++)
	{
		if (booked[i].hours != A.hours && booked[i].min != A.min)
			return true;

	}
	return false;

}
void Mechanic::setApp(Appointment A)
{
	booked[counter].hours == A.hours;
	booked[counter].min == A.min;

}

Person::Appointment Mechanic::getApp(int i)
{
	return booked[i];

}
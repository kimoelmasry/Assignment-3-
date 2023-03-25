#include <iostream>
#include "Person.h"
#include "Customer.h"
using namespace std;

void Customer::setMech(int iD)
{
	MechanicID = iD;

}

int Customer::getMech()
{
	return MechanicID;
}
void Customer::printInfo()
{
	cout << "Name:" << getName() << endl;
	cout << "Age:" <<getAge()<<endl;
	cout << "ID:" << getID();
	cout << "Assigned Mechanic ID:" << MechanicID;


}
Person::Appointment Customer::viewApp()
{

	return app;
}

void Customer::setApp(int hrr, int mnn)
{
	app.hours == hrr;
	app.min == mnn;


}

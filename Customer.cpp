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

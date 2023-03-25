#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"

using namespace std;
int main()
{
//assuming there are 3 Mechanics available
	Mechanic WorkForce[3];
	WorkForce[0].setName("Mark");
	WorkForce[0].setID(4844);
	WorkForce[0].setAge(27);
	
	WorkForce[1].setName("John");
	WorkForce[1].setID(6784);
	WorkForce[1].setAge(23);

	WorkForce[2].setName("Luke");
	WorkForce[2].setID(4783);
	WorkForce[2].setAge(45);	

	Customer Clients[4];
	for (int i = 0; i < 4; i++)
	{
		string n;
		int id;
		int age;
		cin >> n >> id >> age;
		Clients[i].setName(n);
		Clients[i].setID(id);
		Clients[i].setAge(age);
	}


}
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

	Customer Clients[7];
	for (int i = 0; i < 7; i++)
	{
		string n;
		int id;
		int age;
		cin >> n >> id >> age;
		Clients[i].setName(n);
		Clients[i].setID(id);
		Clients[i].setAge(age);
	}
	for (int i = 0; i < 7; i++)
	{

		int hr, mn;
		cout << "Select an hour in the day you would like:";
		cin >> hr;
		cout << "Select a the precise minute in the day you would like:";
		cin >> mn;
		Clients[i].setApp(hr, mn);
	}
	int c = 0;
	for (int j = 0; j < 4; j++)
		{
			
			if (WorkForce[c].isAvail(Clients[c].viewApp()))
			{
				Clients[c].setMech(WorkForce[j].getID());
				c++;
			}
	

		}

	


}
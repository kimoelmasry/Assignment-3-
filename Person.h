#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int ID;
	int age;
protected:
	struct Appointment
	{
		int hours;
		int min;

	};
public:
	Person();
	void setName(string);
	void setID(int);
	void setAge(int);
	string getName();
	int getID();
	int getAge();
	virtual void printInfo() = 0;
		


};
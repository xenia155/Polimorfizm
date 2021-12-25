#include "Shop_Worker.h"
#include <iostream>

using namespace std;


Shop_Worker::Shop_Worker(string aName, int aAge)
{
	setName(aName);
	setAge(aAge);
}

Shop_Worker::Shop_Worker()
{
	name = "";
	age = 0;
}

void Shop_Worker::setName(string n)
{
	name = n;
}

string Shop_Worker::getName() const
{
	return name;
}

void Shop_Worker::setAge(int a)
{
	age = a;
	
}

int Shop_Worker::getAge() const
{
	return age;
}


void Shop_Worker::print_position() const
{

	cout << name << "'s position is";
}


std::ostream& operator<<(std::ostream& os, const Shop_Worker& p)
{

	os << "Name: " << p.getName() << "\t"  << "Age: " << p.getAge();
	return os;
}




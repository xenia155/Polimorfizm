#include "Security_Guard.h"
#include <iostream>
#include "Shop_Worker.h"


Security_Guard::Security_Guard(string aName, int aAge, string aPlace)
{
	setName(aName);
	setAge(aAge);
	setPlaceOfWork(aPlace);
}

Security_Guard::Security_Guard()
{
	name = "";
	age = 0;
	place_of_work = "";
}

void Security_Guard::print_position() const
{
	Shop_Worker::print_position();
	cout << " security guard." << endl;
}


void Security_Guard::setPlaceOfWork(string pw)
{
	place_of_work = pw;
}

string Security_Guard::getPlaceOfWork() const
{
	return place_of_work;
}



std::ostream& operator<<(std::ostream& os, const Security_Guard& p)
{
	os << "Name: " << p.getName() << "\t" << "Age: " << p.getAge() << "Place of work: " << p.getPlaceOfWork();
	return os;
}

void Security_Guard::print_info(ostream& os)
{
	os << "Name: " << name << "  " << "Age: " << age << "  " << "Place of work: " << place_of_work << endl;
}

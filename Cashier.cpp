#include "Cashier.h"
#include <iostream>




void Cashier::setSpeciality(string s)
{
	specialty = s;
}

string Cashier::getSpeciality() const
{
	return specialty;
}

Cashier::Cashier(string aName, int aAge, string aSpecialty)
{
	name = aName;
	age = aAge;
	specialty = aSpecialty;
}

Cashier::Cashier()
{
	name = "";
	age = 0;
	specialty = "";

}

void Cashier::print_position() const
{
	Shop_Worker::print_position();
	cout << " cashier." << endl;
}

void Cashier::print_info(ostream& os)
{
	os << "Name: " << name << "  " << "Age: " << age << "  " << "Specialty: " << specialty << endl;
}

std::ostream& operator<<(std::ostream& os, const Cashier& p)
{
	os << "Name: " << p.getName() << "\t" << "Age: " << p.getAge() << "Specialty: " << p.getSpeciality();
	return os;
}

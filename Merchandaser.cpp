#include "Merchandaser.h"
#include <iostream>

Merchandaser::Merchandaser()
{
	name = "";
	age = 0;

}

Merchandaser::Merchandaser(string aName, int aAge, string aType_of_product)
{
	setName(aName);
	setAge(aAge);
	setTypeOfProduct(aType_of_product);
}

void Merchandaser::setTypeOfProduct(string aType_of_product)
{
	type_of_product = aType_of_product;
}

string Merchandaser::getTypeOfProduct() const
{
	return type_of_product;
}

void Merchandaser::print_position() const
{
	Shop_Worker::print_position();
	cout << " merchandaser.";
}

void Merchandaser::print_info(ostream& os)
{
	os << "Name: " << name << "  " << "Age: " << age << "  " << "Type of product worker deals with: " << type_of_product << endl;

}

std::ostream& operator<<(std::ostream& os, const Merchandaser& p)
{
	os << "Name: " << p.getName() << "\t" << "Age: " << p.getAge() << "Type of product: " << p.getTypeOfProduct();
	return os;
}

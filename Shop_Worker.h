
#pragma once
#include <string>

using namespace std;


class Shop_Worker
{
protected:
	string name;
	int age;

public:

	Shop_Worker(string aName, int aAge);
	Shop_Worker();

	void setName(string n);
	string getName() const;

	void setAge(int a);
	int getAge() const;

	

	virtual void print_position() const;

	virtual void print_info(ostream&) = 0;

	friend std::ostream& operator <<(std::ostream& os, const Shop_Worker& p);
};


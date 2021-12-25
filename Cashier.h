#pragma once
#include "Shop_Worker.h"
class Cashier :
    public Shop_Worker
{
public:
    string specialty;

    Cashier(string aName, int aAge, string Specialty);
    Cashier();

    void setSpeciality(string);
    string getSpeciality() const;


    void print_position() const override;
    void print_info(ostream&) override;


    friend std::ostream& operator <<(std::ostream& os, const Cashier& p);
};


#pragma once
#include "Cashier.h"
class Merchandaser :
    public Cashier
{
public:
    string type_of_product;

    Merchandaser();
    Merchandaser(string aName, int aAge, string aType_of_product);

    void setTypeOfProduct(string aType_of_product);
    string getTypeOfProduct() const;

    void print_position() const override;

    void print_info(ostream&) override;

    friend std::ostream& operator <<(std::ostream& os, const Merchandaser& p);


};


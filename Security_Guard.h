#pragma once
#include "Shop_Worker.h"
#include <string>
using namespace std;

//enum place_of_work { str1, str2, str3 };
//
//string str1 = "In front of cameras", str2 = "Outdoor the shop", str3 = "In the shop";
//
//
//std::istream& operator>>(std::istream& is, place_of_work& i)
//{
//    int tmp;
//    if (is >> tmp)
//        i = static_cast<place_of_work>(tmp);
//    return is;
//}



class Security_Guard :
    public Shop_Worker
{
public:
    string place_of_work;

    Security_Guard(string aName, int aAge, string aPlace);
    Security_Guard();

    void print_position() const override;

    void print_info(ostream&) override;


    void setPlaceOfWork(string);
    string getPlaceOfWork() const;

    friend std::ostream& operator <<(std::ostream& os, const Security_Guard& p);


};


using namespace std;
#include <string>
#include <iostream>
#include "Assignment2_Question6.h"
#include <cstdlib>
#include <fstream>

class Address
{
public:

//default constructor
Address()
    {
        streetName = "";
        city = "";
        streetNr = 0;
        postalCode = "0000";
    }

     //accessor function for getting the postal code
    string getPostalCode();

    //overloaded extraction operator
    friend istream& operator >>(istream& sendIn, Address& fileAddress);

    //overloaded insertion operator
    friend ostream& operator <<(ostream& sendOut, Address& fileAddress);

private:
    //private variables
    string streetName;
    int streetNr;
    string city;
    string postalCode;

};

//overloaded extraction operator that can be used to input values of type Shares
  istream& operator>>(istream& sendIn, Address& fileAddress)
 {
    getline(sendIn>>ws, fileAddress.streetName, '\n');
    sendIn >> fileAddress.streetNr;
    getline(sendIn>>ws,fileAddress.city);
    sendIn >> fileAddress.postalCode;

    return sendIn;
}

//overload the ostream to print out addresses
ostream& operator << (ostream &out, Address &fileAddress)
{
    out << fileAddress.streetName <<endl<< fileAddress.streetNr <<endl<< fileAddress.city<<endl<< fileAddress.postalCode;

    return out;

}

 //accessor functions to get the postal code
    string Address::getPostalCode()
    {
        return postalCode;
    }


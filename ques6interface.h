using namespace std;
#include <string>
#include <iostream>

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

//functions to request the address information and to print the address
    void readin();
    void print();

//accessor functions
    string getStreetName();
    int getStreetNr();
    string getCity();
    string getPostalCode();
    //Address getAddressObj(int i);

//overloaded extraction operator
    friend istream& operator >>(istream& sendIn, const Address& s1);

//overloaded insertion operator
    friend ostream& operator <<(ostream& sendOut, const Address& s1);

//mutator functions
    void setStreetname(string);
    void setStreetNr(int);
    void setCity(string);
    void setPostalCode(string);
    void setAddressObj[](int, Address);

   Address addressObj[20];
   getAddressObj(int i);

private:
//private variables
    string streetName;
    int streetNr;
    string city;
    string postalCode;


};

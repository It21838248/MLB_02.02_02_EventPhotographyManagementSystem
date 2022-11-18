//IT21838248 Perera P.A.H.V
//Event phototgraphy management system
//Package.cpp

#include "Package.h"
#include <iostream>
#include <cstring>
using namespace std;

//Default constructor
Package::Package()
{
  packagePrice = 0.0;
  packageType = 0;
}

//Overloaded constructor
Package::Package(float p_price, int p_type)
{
  packagePrice = p_price;
  packageType = p_type;
}

//setters

void Package::setPackagePrice(float p_price)
{
  packagePrice = p_price;
}

void Package::setPackageType(int p_type)
{
  packageType = p_type;
}

//getters
int Package:: getPackageType()
{
  return packageType;
}

float Package:: getPackagePrice()
{
  if (packageType==1)
    packagePrice=10000.00;
  else
  {if (packageType==2)
        packagePrice=15000.00;
      else
        packagePrice=25000.00;
  }
  
  return packagePrice;
}

void Package::displayPackageDetails()
{
  cout<<"Our Packages : "<<endl<<endl;
  
  cout<<"Package 1 : This package is specially for events like Parties"<<endl;
  cout<<"Package Price : Rs. 10,000.00"<<endl<<endl;

  cout<<"Package 2: This package is specially for concerts"<<endl;
  cout<<"Package Price : Rs. 15,000.00"<<endl<<endl;

  cout<<"Package 3: This package is specially for weddings"<<endl;
  cout<<"Package Price : Rs. 25,000.00"<<endl<<endl;
  
}
void Package::displayPackagePrice()
{
  cout<<endl;
  cout<<"You selected Package Type : " << packageType << endl;
  cout<<"Package Price : " << packagePrice <<endl;
  cout<<"***********************************"<<endl;
}

//Destructor
Package::~Package()
{
  cout<<"The selected package is removed"<<endl;
}

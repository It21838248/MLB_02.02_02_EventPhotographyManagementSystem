#include <iostream>
#include <cstring>
using namespace std;

//IT21838248 Perera P.A.H.V
//Event phototgraphy management system
//Package.h

class Package
{
private:
  float packagePrice;
  int packageType;
  string packageDetails;

public:
  Package();
  Package(float p_price, int p_type);
  void setPackagePrice(float p_price);
  void setPackageType(int p_type);
  int getPackageType();
  float getPackagePrice();
  void displayPackageDetails();
  void displayPackagePrice();
  ~Package();
};
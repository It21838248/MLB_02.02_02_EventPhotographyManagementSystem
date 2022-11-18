#include "Package.h"
#include <cstring>
#include <iostream>
using namespace std;

int main() 
{
	//create package object
	Package* pac[2];
	pac[0] = new Package();
	pac[1] = new Package(2300.00, 2);
	
	//acces method in package class
  pac[0]->displayPackageDetails();
	pac[0]->getPackageType();
	pac[0]->getPackagePrice();
	pac[0]->displayPackagePrice();
	

	//clear dynamic memory space after complete the process 
	delete pac[0];
	delete pac[1];

return 0;

}
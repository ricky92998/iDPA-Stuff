#include "NyanCat.h"

NyanCat::NyanCat(void)
{
	color = 0;
	nyanCount =1;
	dimensions = 3;
	name = "Scott";
	hasLazers = true;
	isRainbow = true;
}

NyanCat::~NyanCat(void)
{
	nyanCount = 0;
    
    cout << name << " Dyed" << endl;
}

void NyanCat::fly()
{
    cout << name << " is flying!" << endl;
}
void NyanCat::nyan()
{
    cout << "Nyan" << endl;
    nyanCount++;
}
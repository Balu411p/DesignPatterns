#include "CommonAlgorithm.h"
void CommonAlgorithm::boilWater()
{
	cout << "boiling water" << endl;
}
void CommonAlgorithm::pourInCup()
{
	cout << "Pour Into Cup" << endl;
}

void CommonAlgorithm::makeReceipe()//Template Method
{
	boilWater();
	prepareReceipe();
	pourInCup();
	addIngrediants();
}
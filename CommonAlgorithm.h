#ifndef _COMMON_ALGO_H
#define _COMMON_ALGO_H
#include<iostream>
using namespace std;

class CommonAlgorithm
{
public:
	void boilWater();
	void pourInCup();
	void makeReceipe();
	virtual void addIngrediants() = 0;
	virtual void prepareReceipe() = 0;
};
#endif
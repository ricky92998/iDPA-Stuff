#include <iostream>
#include <string>
using namespace std;
#pragma once

class NyanCat
{
public:
	NyanCat(void);
	~NyanCat(void);
	 int color;
    double dimensions;
    int nyanCount;
    string name;
    bool hasLazers;
    bool isRainbow;

    void fly();
    void move(int direction);
    void nyan();
};

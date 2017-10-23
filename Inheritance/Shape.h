#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>

using namespace std;

class Shape {
private:
int* xcoords;
int* ycoords;
string name ;
public :
Shape();
void setName(string n);
void setXcoords (int* xc);
void setYcoords (int* yc);
std::string getName();
double getArea();
double getPerimeter();


};

#endif

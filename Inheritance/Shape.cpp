
#include "Shape.h"

using namespace std;

void Shape::Shape(){

     cout << "Shape inited "<<endl;
}

std::string Shape::getName(){
    return name;
}
void Shape::setName(string d){
    name = d;
}

void Shape::setXcoords(int* xc){
    xcoords = xc;
}


void Shape::setYcoords(int* yc){
    ycoords = yc;
}

double Shape::getArea(){
    return 91.0;
}

double Shape::getPerimeter(){
    return 2.0;
}




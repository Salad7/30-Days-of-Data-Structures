#include <iostream>
#include "CustomLinkedList.cpp"


using namespace std;


int main(){
    Player p;
    Player p2;
    Player p3;
    string test = "test";
    string n = "mohamed";
    string lebron = "lebron";
    
    p.setName(&test);
    p2.setName(&n);
    p3.setName(&lebron);
    //cout << p.getName();
    
    
    CustomLinkedList linkedList;
    linkedList.addPlayer(&p);
    linkedList.addPlayer(&p2);
    linkedList.addPlayer(&p3);

    linkedList.printAll();
    
}   
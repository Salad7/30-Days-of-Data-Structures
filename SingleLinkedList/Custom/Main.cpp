#include <iostream>
#include "CustomLinkedList.cpp"


using namespace std;


int main(){
    Player p;
    Player p2;
    Player p3, p4;
    string test = "test";
    string n = "mohamed";
    string lebron = "lebron";
     string chebron = "leon";
    
    p.setName(&test);
    p2.setName(&n);
    p3.setName(&lebron);
    p4.setName(&chebron);
    //cout << p.getName();
    
    CustomLinkedList linkedList;
    linkedList.addPlayer(&p);
    linkedList.addPlayer(&p2);
    linkedList.addPlayer(&p3);
    linkedList.addPlayer(&p4);
    linkedList.deleteNode(p4);
    linkedList.printAll();
    
}   
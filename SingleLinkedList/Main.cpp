#include <iostream>
#include "Player.cpp"


using namespace std;


int main(){
    Player p;
    string test = "test";
    
    p.setName(&test);
    cout << p.getName();
    
}   
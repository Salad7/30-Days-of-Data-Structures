#include <iostream>

using namespace std;

class Player {
    private:
    std::string d;
    
    public:
    Player();
    Player(string n);
    void setName(string* n);
    string getName();
    
    
    
};

Player::Player(string n){
    
    d = n;
}
Player::Player(){
    
}
void Player::setName(string* n){
    d = *n;
    
}

string Player::getName(){
    
    return d;
}
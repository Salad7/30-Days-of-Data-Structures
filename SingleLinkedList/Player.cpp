#include <iostream>

using namespace std;

class Player {
    private:
    std::string d;
    Player* next;
    
    public:
    Player();
    Player(string n);
    void setName(string* n);
    string getName();
    Player getNext();
    void setNext(Player* nextPlayer);
    
    
    
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

Player Player::getNext(){
    return *next;
}

void Player::setNext(Player* nextPlayer){
    next = nextPlayer;
    
}
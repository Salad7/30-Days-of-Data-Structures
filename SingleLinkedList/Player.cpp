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
    Player getNext();
    Player* next;
    void setNext(Player* nextPlayer);
    
    
    
};


Player::Player(string n){
    
    d = n;
}
Player::Player(){
    next = nullptr;
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
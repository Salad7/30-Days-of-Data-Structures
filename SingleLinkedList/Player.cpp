#include <iostream>

using namespace std;

class Player {
    private:
    std::string d;
    *Player next;
    
    public:
    Player();
    Player(string n);
    void setName(string* n);
    string getName();
    Player getNext();
    void setNext(Player* next);
    
    
    
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

Player getNext::Player(){
    return *next;
}

void setNext(Player* nextPlayer){
    next = nextPlayer;
    
}
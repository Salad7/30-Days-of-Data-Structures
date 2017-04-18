#include "Player.cpp"
Player::Player(std::string n){
    name = n;
}

Player::Player(){
    
}

void Player::setName(std::string n){
    
    name = n;
}

void Player::setPPG(double b){
    ppg = b;
}

std::string Player::getName(){
    return name;
}

double Player::getPPG(){
    return ppg;
}
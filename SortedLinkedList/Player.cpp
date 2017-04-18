 #include <iostream>
 using namespace std;
 
 class Player {
    std::string name;
    double ppg;
    
    
    
    public: 
    Player(std::string name);
    Player();
    void setName(std::string s);
    void setPPG(double d);
    std::string getName();
    double getPPG();
    
};
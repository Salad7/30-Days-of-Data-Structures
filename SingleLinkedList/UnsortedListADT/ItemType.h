#ifndef ITEMTYPE_H
#define ITEMTYPE_H
class ItemType {
    enum RelationType{LESS,EQUAL,GREATER};
private:
std::string name;


public:
std::string getName();
void setName(std::string n);
};


#endif
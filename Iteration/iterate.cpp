#include <iostream>

using namespace std;

class iteratableInterface{
    public:
    //Positions to the previous item
    virtual void previous();
    //Determines whether the iterator refers to an item returns true if the end has been reached
    virtual bool isDone();
    virtual void first();
    virtual void last();
    
    
    
};

class iteratable : public iteratableInterface{
    
    
    
};

int main(){
    
    
    
}



#include "Player.cpp"

class CustomLinkedList{
    private:
    Player* first;
    Player* last;
    int size;
    
    public:
    CustomLinkedList();
    void addPlayer(Player* addP);
    Player getPlayer(string* name);
    void printAll();
    
};


CustomLinkedList::CustomLinkedList(){
    //first = 0;
    //last = NULL;
    size = 0;
}

void CustomLinkedList::addPlayer(Player* addP){
    if(size == 0){
        first = addP;
        last = addP;
    }
    else if (size == 1){ 
        last = addP;
    first->setNext(last);
    
    }
    else{
        Player* temp = first;
        int tempS = 0;
        while(tempS < size-1){
          *temp = temp->getNext();
          tempS++;  
        }
        temp->setNext(addP);
        last = addP;
    }
    //Create temp variable
        //Player* temp = first;
        
        //Loop through until linked list until we find a node whose next is null
        //while
        
        last->setNext(addP);
    size++;
    
}

void CustomLinkedList::printAll(){
    Player* temp = first;
    int start = 0;
    while(start < size ){
        std::cout << temp->getName() << std::endl;
        *temp = temp->getNext();
        start++;
    }
    
    
}





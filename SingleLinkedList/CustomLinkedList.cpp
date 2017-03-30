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
        size = 1;
    }
    else if (size == 1){ 
        last = addP;
    first->setNext(last);
    size = 2;
    }
    else{
        Player* temp = first;
        int tempS = 0;
        while(tempS < size-1){
            cout << "while tempS: " << tempS << " Is less then size-1 : " << size-1  << endl;
         // temp = temp->getNext();
          tempS++;  
          
        }
        temp->setNext(addP);
        last = addP;
    }
    size++;
}

void CustomLinkedList::printAll(){
    Player* temp = first;
    int start = 0;
    while(start < size ){
        std::cout << temp->getName() << std::endl;
        *temp = *temp->getNext();
        start++;
    }
    
    
}





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
        cout << "size is 0 " << endl;
    }
    else if (size == 1){ 
        last = addP;
    first->setNext(last);
            cout << "size is 1 " << endl;
            cout << "last is xasxa";

    }
    else{
        Player* temp = first;
        while(temp->next != nullptr){
          temp = temp+sizeof(temp);
        }
        cout << "temp is " << temp->getName();
        temp->setNext(addP);
        last = addP;
        last->setNext(addP);
    }
        
    size++;
    
}

void CustomLinkedList::printAll(){
    Player* temp = first;
    while(temp->next != nullptr){
        std::cout << temp->getName() << std::endl;
        temp = temp+sizeof(temp);
    }
    
    
}





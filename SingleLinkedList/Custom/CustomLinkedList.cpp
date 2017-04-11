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
        last->setNext(0);
        cout << "size is 0 " << endl;
    }
    else if (size == 1){ 
        last = addP;
    first->setNext(last);

    }
    else{
        Player* temp = first;
        while(temp->next != 0){
          temp = temp+sizeof(temp);
          cout << "last is " << temp->getName();
        }
        //cout << "temp is " << temp->getName();
        //temp->setNext(addP);
        //last = addP;
        temp->setNext(addP);
        last = temp;
        temp->setNext(0);
    }
        
    size++;
    
}

void CustomLinkedList::printAll(){
    Player* temp = first;
    while(temp->next != 0){
        std::cout << temp->getName() << std::endl;
        temp = temp+sizeof(temp);
    }
    
    
}





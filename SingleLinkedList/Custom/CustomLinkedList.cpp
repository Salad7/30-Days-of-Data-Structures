#include "Player.cpp"

class CustomLinkedList{
    private:
    Player* first;
    Player* last;
    
    
    public:
    CustomLinkedList();
    void addPlayer(Player* addP);
    Player getPlayer(string* name);
    void printAll();int size;
    void deleteNode(Player n);
    
};


CustomLinkedList::CustomLinkedList(){
    //first = 0;
    //last = NULL;
    size = 0;
}

void CustomLinkedList::deleteNode(Player n){
    if(first->getName() == n.getName()){
        first = first ->next;
        size--;
    }
    else if(last->getName() == n.getName()){
       delete last;
        size--;
    }
    else
    {
        Player* temp = first;
        while(temp->next->getName() != n.getName()){
            if(temp->next != nullptr){
            }
            temp = temp->next;
        }
        temp->setNext(temp->next->next);
        size--;
    }
}


void CustomLinkedList::addPlayer(Player* addP){
    if(size == 0){
        first = addP;
        last = first;
        last->setNext(nullptr);
        size = 1;
    }
    else if (size == 1){ 
        last = addP;
         size = 2;
    first->setNext(addP);
    }
    else{
        Player* temp = first;
        while(temp->next != nullptr){
          temp = temp->next;
        }
         temp->setNext(addP);
         last = temp->next;
         size++;
    }
        
   
    
}

void CustomLinkedList::printAll(){
    Player* temp = first;
    cout << size << endl;
    //cout << temp->getName();
    while(temp->next != nullptr){
        std::cout << temp->getName() << std::endl;
        temp = temp->next;
    }
    cout << temp->getName();
    
}





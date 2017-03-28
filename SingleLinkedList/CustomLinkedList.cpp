

public class CustomLinkedList{
    private:
    Player first;
    Player last;
    int size;
    
    public:
    CustomLinkedList();
    void addPlayer(Player* addP);
    
}


CustomLinkedList::CustomLinkedList(){
    first = last = null;
    size = 0;
}

void addPlayer::CustomLinkedList(Player* addP){
    if(size == 0){
        first = last = *addP;
    }
    
}



class CustomSortList {
    
    Player first;
    Player last;
    int size;
    
    
    public:
    void printAll();
    Player addItem(Player p);
    Player deleteItem(Player p);
    bool compareTo(Player p1, Player p2);
    Player getPlayer(std::string name);
    int getSize();
    

};
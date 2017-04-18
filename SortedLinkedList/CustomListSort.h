    //itemInQ - The item added to the list
    //current - the current item in the list to compare ith
    //Only add if this is true
    bool CustomSortList::compareTo(Player itemInQ, Player current){
        if(itemInQ.getPPG() > current.getPPG()){
            return false;
        }
        return true;
        
    }
    
    int CustomSortList::getSize(){
        return size;
    }
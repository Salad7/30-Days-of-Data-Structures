#include "ItemType.h"
UnsortedADT::UnsortedADT(){
    length = 0;
    currentPos = 0;
    
}

void ItemType::makeEmpty(){
    length = 0;
}

bool UnsortedADT::isFull() const
{
    return (length == 10);
}
void UnsortedADT::printList(std::ofstream &dataFile, UnsortedADT list){
    int length;
    ItemType item;
    list.resetList();
    length = list.length;
    for(int counter = 1; i <= length; counter++){
        list.getNextItem(item);
        item.print(dataFile)
    }
    
void UnsortedADT::createListFromFile(std::ifstream &dataFile, UnsortedType &list){
    
    ItemType item;
    list.makeEmpty();
    getData(dataFile, item);
    while(dataFile){
        if(!list.isFull){
            list.insertItem(item);
            getData(dataFile,item);
        }
    }
}

int UnsortedADT::lengthLs() const {
    return length;
}
  
void UnsortedADT::retrieveItem(ItemType& item, bool& found){
    
    bool moreToSearch;
    int location = 0;
    found = false;
    moreToSearch = (location < length);
    //While item is not found or last is not the item we're at
        //Search through list for item
        //Compare items and if they are equal
        //Set the currentItem to this item and set found to true
        while (moreToSearch && !found){
            switch(item.comparedTo(info[location])){
                case LESS:
                location++;
                moreToSearch = (location < length);
                break;
                case EQUAL:
                found = true;
                item = info[location];
                case GREATER:
                location++;
                moreToSearch = (location < length);
                break;
            }
            
            
        }
        
    
}

void UnsortedADT::InsertItem(ItemType item){
    if(length < 10){
        info[length] = item;
        length++;
        printf("found item");
    }
}
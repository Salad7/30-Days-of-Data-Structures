#ifndef UNSORTEDADT_H
#define UNSORTEDADT_H

#include "ItemType.h"
class UnsortedADT {
    
    
private:
int length;
int currentPos;
enum RelationType{LESS,EQUAL,GREATER};
 //int MAX_ITEMS = 10;
 ItemType info[10];
RelationType relationType;

public:
UnsortedADT();
RelationType comparedTo(ItemType item);
void makeEmpty();
bool isFull();
int lengthLs();
void retrieveItem(ItemType &item, bool &found);
void insertItem(ItemType item);
void deleteItem(ItemType item);
void resetList();
void getNextItem(ItemType &item);
void printList(std::ofstream &dataFile);
void createListFromFile(std::ifstream &dataFile, UnsortedADT &list);
};

#endif
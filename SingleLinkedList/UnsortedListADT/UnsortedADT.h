class ItemType {
    enum RelationType{LESS,EQUAL,GREATER};
    const int MAX_ITEMS = 10;
private:
int length;
ItemType info[MAX_ITEMS];
RelationType relationType;
int currentPos;


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
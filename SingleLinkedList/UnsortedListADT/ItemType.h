class ItemType {
    enum RelationType{LESS,EQUAL,GREATER};
private:
const int MAX_ITEMS = 10;
RelationType relationType;


public:
RelationType comparedTo(ItemType item);
void makeEmpty();
bool isFull();
int lengthLs();
ItemType RetrieveItem(ItemType &item, bool &found);
void insertItem(ItemType item);
void deleteItem(ItemType item);
void resetList();
ItemType getNextItem(ItemType &item);
};
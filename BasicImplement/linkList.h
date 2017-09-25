#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

initLinkList();
destroyLinkList();
clearLinkList();
bool listEmpty();
bool getElement(LinkList *ls, int i, &e);
linkListInsert();
linkListDelete();
linkListReserve();


#endif // LINKLIST_H_INCLUDED

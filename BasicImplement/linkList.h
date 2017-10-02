#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
#include <stdbool.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList initLinkList();
bool createLinkList(LinkList llist, int n);
LinkList clearLinkList(LinkList llist);
bool listEmpty(LinkList llist);
bool getElement(LinkList llist, int i, int *e);
bool linkListInsert(LinkList llist, int i, int e);
bool linkListDelete(LinkList llist, int i, int *e);
void linkListPrint(LinkList llist);



#endif // LINKLIST_H_INCLUDED

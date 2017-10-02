#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "linklist.h"

LinkList initLinkList() {
    LinkList pHead = malloc(sizeof(LNode));
    if(NULL == pHead) {
        printf("memory failed.\n");
        exit(-1);
    }
    // pHead -> data = 0;
    pHead -> next = NULL;
    //printf("success.");
    return pHead;
}

bool createLinkList(LinkList llist, int n) {
    printf("create your linkList:\n");
    LNode *pTail = llist;
    int i;
    int val = 0;
    for(i = 0; i < n; i++) {
        LNode *p = (LNode *)malloc(sizeof(LNode));
        if(NULL == p) {
            printf("memory failed.\n");
            exit(-1);
        }
        scanf("%d", &val);
        p -> data = val;
        pTail -> next = p;//notes,not p = ptali->next
        p -> next = NULL;
        pTail = p;

    }
    return true;
}

LinkList clearLinkList(LinkList llist) {
    LNode *p = llist;
    if(llist == NULL) {
        printf("the linkList is null, clear finished.\n");
        return p;
    }
    while(llist -> next) {
        //p = llist;
        llist = llist -> next;
        free(p);
        p = llist;
    }
    printf("the linkList is Cleared.\n");
    return p;

}
bool listEmpty(LinkList llist) {
    if(NULL == llist -> next) {
        return true;
    }
    return false;

}
bool getElement(LinkList llist, int pos,int *e) {
    LNode *p = llist;
    int i;
    for(i = 0; i < pos; i++) {
        if(p -> next == NULL) {
            printf("the position over flow.");
            return false;
        }
        p = p -> next;
    }
    *e = p -> data;
    return true;

}
bool linkListInsert(LinkList llist, int pos, int e) {
    LNode *p = llist, *pCur;
    int i;
    if(NULL == llist -> next) {
        printf("the linkList is empty,insert is failed.\n");
        return false;
    }
    for(i = 0; i < pos - 1 && NULL != p; i++) {
        p = p -> next;
    }//notes NULL != p
    if(NULL == p) {
        printf("the position is over flow.\n");
        return false;
    }

    pCur = (LNode *)malloc(sizeof(LNode));
    pCur -> data = e;

    pCur -> next = p -> next;
    p -> next = pCur;
    return true;
}
bool linkListDelete(LinkList llist, int pos, int *e) {
    LNode *p = llist, *d;
    int i;
    if(NULL == llist -> next) {
        printf("the linkList is empty,insert is failed.\n");
        return false;
    }
    for(i = 0; i < pos - 1 && NULL != p; i++) {
        p = p -> next;
    }//notes NULL != p
    if(NULL == p) {
        printf("the position is over flow.\n");
        return false;
    }

    *e = (p -> next) -> data;//get e
    d = p -> next;
    p -> next = p -> next -> next;

    free(d);
    return true;

}

void linkListPrint(LinkList llist) {
    LNode *p = llist;
    if(NULL == p -> next) {
        printf("the list is null.\n");
        return;
    }
    p = p -> next;
    while(p) {
        printf("%d ", p -> data);
        p = p -> next;
    }
    printf("\n");
    return;
}

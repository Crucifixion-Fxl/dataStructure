// Created on iPad Pro 2021.

#include <iostream>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList &L){
    L =(LNode *)malloc(sizeof(LNode));
    if(L==NULL){
        return false;
    }
    L->next = L;
    return true;
}

bool Empty(LinkList L){
    if(L->next ==L){
        return true;
    }else{
        return false;
    }
}

bool isTail(LinkList L,LNode *p){
    if(p->next == L){
        return true;
    }else{
        reture false;
    }
}

int main() {
    cout << "Hello World!";
    return 0;
}
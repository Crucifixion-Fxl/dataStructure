// Created on iPad Pro 2021.

#include <iostream>
using namespace std;

bool InitDLinkList(DLinklist &L){
    L = (DNode *) malloc(sizeof(DNode));
    if(L==NULL){
        return false;
    }
    L->prior =L;
    L->next = L;
    return true;
}

bool Empty(DLinklist L){
    if(L->next == L){
        return true;
    }else{
        return false;
    }
}

bool isTail(DLinklist L,DNode *p){
    if(p->next ==L){
        return true;
    }else{
        return false;
    }
}

bool InsertNextDNode(DNode *p,DNode *s){
    s->next = p->next;
    p->next->prior = s;
    s->prior = p;
    p->next = s;
}

bool DeleteNode(DNode *p,DNode *s){
    p->next = q->next;
    q->next->prior = p;
    free(q);
    reture true;
}

int main() {
    cout << "Hello World!";
    return 0;
}
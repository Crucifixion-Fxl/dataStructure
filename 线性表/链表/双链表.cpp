// Created on iPad Pro 2021.

#include <iostream>
using namespace std;

typedef struct DNode{
    int data;
    struct DNode *prior,*next;
}DNode,*DLinklist;

bool InitDLinkList(DLinklist &L){
    L = (DNode *)malloc(sizeof(DNode));
    if(L==NULL){
        return false;
    }
    L->prior = NULL;
    L->next = NULL;
    return true;
}

bool InsertNextDNode(DNode *p,DNode *s){
    if(p==NULL || s=NULL){
        return false;
    }
    s->next = p->next;
    if(p->next !=NULL){
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}

void DestoryList(DLinklist &L){
    while(L->next !=NULL){
        DeleteNextDnode(L);
    }
    free(L);
    L=NULL;
}

bool DeleteNextDNode(DNode *p){
    if(p==NULL) return false;
    DNode *q = p->next;
    if(q==NULL) reture false;
    p->next = q->next;
    if(q->next != NULL)
    {
        q->next->prior = p;
    }
    free(q);
    return true;
}

//双链表的遍历
//1.后向遍历
void houxiangbianli(){
    while(p!=NULL){
        p=p->next;
    }
}
//2.前向遍历
void qianxiangbinali(){
    while(p!=NULL){
        p=p->prior;
    }
}
//3.前向遍历
void qianxiangbinali2(){
    while(p->prior!=NULL){
        p=p->prior;
    }
}


int main() {
    cout << "Hello World!";
    return 0;
}
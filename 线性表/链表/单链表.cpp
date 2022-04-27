// Created on iPad Pro 2021.

#include <iostream>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

//不带头节点单链表
// bool InitList(LinkList &L){
//     L==NULL;
//     return true;
// }

//不带头节点-判空
// bool Empty(LinkList L){
//     return L==NULL;
// }

bool InitList(LinkList &L){
    L=(LNode *)malloc(Sizeof(LNode));
    if(L==NULL){
        return false;
    }
    L->next == NULL;
    return true;
}

bool Empty(LinkList L){
    if(L->next ==NULL){
        return true;
    }else{
        return false;
    }
}


LNode *GetElem(LinkList L,int i ){
    int j =1;
    LNode *p = L->next;
    if(i==0){
        return L;
    }
    if(i<1){
        return NULL；
    }
    while(p!=NULL && j<i){
        p = p->next;
        j++;
    }
    return p;
}



int main() {
    cout << "Hello World!";
    return 0;
}
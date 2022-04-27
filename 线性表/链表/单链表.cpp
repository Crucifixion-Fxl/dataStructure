// Created on iPad Pro 2021.

#include <iostream>

using namespace std;

typedef struct LNode{
    int data;
    //定义一个机构体类型的指针 指向下一片区域
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

// 不带头节点的位序插入
bool ListInsert(LinkList &L,int i,int e){
    if(i<1){
        return false;
    }
    if(i==1){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }
    LNode *p;
    int j = 1;
    p=L;
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next; 
    p->next = s;
    return true;
}

bool InsertPriorNode(LNode *p,int e){
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s==NULL){
        return false;
    }
    s->next = p->next;
    p->next = s;
    s->data = p->data;
    p->data = e;
    return true;
}

bool ListDelete(LinkList &L,int i,int e){
    if(i<1){
        return false;
    }
    LNode *p;
    int j=0;
    p=L;
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *q =p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool Delete(LNode * p){
    if(p==NULL){
        return false;
    }
    LNode *q = p->next;
    p->data  = p->next->data;
    p->next = q->next;
    free(q);
    return true;
}


bool InsertNextNode(LNode *p,int e){
    if(p=-NULL){
        return false;
    }
    LNode *s= (LNode *)malloc(sizeof(LNode));
    if(s==NULL){
        return false;
    }
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;

}

// 带头节点：初始化单链表
bool InitList(LinkList &L){
    L=(LNode *)malloc(sizeof(LNode));
    if(L==NULL){
        return false;
    }
    L->next == NULL;
    return true;
}

//带头节点判空
bool Empty(LinkList L){
    if(L->next ==NULL){
        return true;
    }else{
        return false;
    }
}

//带头节点  -- 尾插法
bool ListInsert(LinkList &L,int i ,int e){
    if(i<1){
        return false;
    }
    LNode *p;
    int j = 0;
    p=L;
    //定位到前驱节点
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    //下面这行代码 表示s和p指向相同的位置
    s->next = p->next;
    p->next = s;
    return true;

}

// 头插法建立单链表
LinkList ListInsert(LinkList &L){
    LNode *s;
    int x;
    //建立头节点 
    //头节点没有数据域
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d",&x);
    while(x!=9999){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d",&x);
    }
    return L;
}

//按位查找 所需的元素
//i为位序 并不是数据小表
//将 头节点的位序定义为0
LNode * GetElem(LinkList L,int i ){
    int j = 1;
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

//按值查找
LNode * LocateElem(LinkList L,int e){
    LNode *p =L->next;
    while(p!=NULL && p->data !=e){
        p = p->next;
    }
    // 当p为空的时候，代码没有对应的元素 
    // 如果有则返回对应的 节点
    return p;
}

// 返回链表的长度：带头节点
int Length(LinkList L){
    int len = 0;
    LNode *p =L;
    while(p->next !=NULL){
        p = p->next;
        len++;
    }
    return len;
}

int main() {
    cout << "Hello World!";
    return 0;
}
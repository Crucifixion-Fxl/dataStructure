// Created on iPad Pro 2021.

#include <iostream>
#include <stdlib.h>

using namespace std;

#define InitSize 20


typedef struct{
    int *data ;
    int MaxSize;
    int length;
}

void InitList(SqList &L){
    L.data = (int *)malloc(InitList*sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}

void IncreaseSize(SeqList &L,int len){
    int *p = L.data;
    L.data = (int *)malloc(sizeof(L.MaxSize + len)*sizeof(int));
    for(int i = 0;i<L.length;i++){
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}


int main() {
    SqList L;
    InitList(L);
    //TODO:插入元素
    IncreaseSize(L,5);
    return 0;
}
// Created on iPad Pro 2021.

#include <iostream>
#include <stdlib.h>

#define MaxSize 10 

using namespace std;

typedef struct {
    int data[MaxSize]；
    int length;
}SqList;

void InitList(SqList &L){
    for(int i = 0 ;i < MaxSize ; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}

bool ListInsert(SeqList &L,int i,int e){

    if(i<1 || i>L.length +1){
        return false;
    }
    if(L.length >= L.MaxSize){

        return false;
    }

    for(int j = L.length;j>=i;j--){
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool ListDelete(SeqList &L,int i ,int &e){
    if(i<1 || i >L.length){
        return false;
    }
    e = L.data[i-1];
    for(int j =i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}

int GetElem(SeqList L,int i){
    return L.data[i-1];
}

int LocateElem(SeqList L,int e){
    for(int i =0;i<L.length;i++){
        if(L.data[i]==e){
            return i+1;
        }
    }
    return 0;
}

int main() {
    SqList L;
    InitList(L);
    ListInsert(L,3,3);
    int e =  -1;
    if(ListDelete(L,3,e)){
        printf("已经删除第三个元素，删除的元素的值是=%d\n",e);
    }else{
        printf("位序i不合法，删除失败\n");
    }
    return 0;
}
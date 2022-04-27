// Created on iPad Pro 2021.

#include <iostream>

//malloc函数和free函数 ： 所在的库
#include <stdlib.h>

#define MaxSize 10 

using namespace std;

typedef struct {
    int data[MaxSize]；
    int length;
}SqList;


//初始化静态链表
void InitList(SqList &L){
    //初始阶段将所有的的数据值设置为0， 防止读取到内存中的脏数据
    //不同的编译器对代码的优化不同
    //一些编译器会帮助优化复制操作 、节省掉下面的赋值过程
    for(int i = 0 ;i < MaxSize ; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}

//静态分配顺序表的插入
bool ListInsert(SeqList &L,int i,int e){

    //对不合法的插入位置进行 判断 i在此时表示的是位序
    //位序与数组的下标不同
    if(i<1 || i>L.length +1){
        return false;
    }
    //静态链表已经是满空间时
    if(L.length >= L.MaxSize){
        return false;
    }
    
    //依次将后面的所有元素往后移动一个位置
    for(int j = L.length;j>=i;j--){
        L.data[j] = L.data[j-1];
    }
    
    //将数据元素插入到第i个位置
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool ListDelete(SeqList &L,int i ,int &e){
    if(i<1 || i >L.length){
        return false;
    }
    e = L.data[i-1];
    //将后面的元素依次向前移动
    for(int j =i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    //链表的长度减去1
    L.length--;
    return true;
}

//获取一个元素
int GetElem(SeqList L,int i){
    return L.data[i-1];
}

//定位一个元素的位序
int LocateElem(SeqList L,int e){
    for(int i =0;i<L.length;i++){
        if(L.data[i]==e){
            return i+1;
        }
    }
    return 0;
}

//遍历静态链表中的所有元素
void TravelSal(SeqList L){
    for(int i=0; i <L.length;++i){
        printf("%d ",L.data[i]);
    }
}


int main() {
    SqList L;
    InitList(L);
    ListInsert(L,3,3);
    int e = -1;
    if(ListDelete(L,3,e)){
        printf("已经删除第三个元素，删除的元素的值是=%d\n",e);
    }else{
        printf("位序i不合法，删除失败\n");
    }
    return 0;
}
// Created on iPad Pro 2021.

#include <iostream>
using namespace std;

#define MaxSize 10

struct Node{
    int data;
    int next;
};

typedef struct{
    int data;
    int next;
}SLinkList[MaxSize];

//初始化 静态链表：
// 把a[0]的next设置为 -1
// 把其他节点的next设置为一个特殊值用来表述空闲节点 如：-2


//查找：
// 从头节点出发，挨个往后遍历节点

//插入为序为i的节点
//找到一个空的节点用来 存入数据元素
//从头节点出发，找到位序为i-1的节点
//修改新节点的next
//修改i-1号节点的next

int main() {
    struct Node x;
    printf("sizeX = %d\n",sizeof(x));

    struct Node a[MaxSize];
    printf("sizeA=%d\n",sizeof(a));
    
    SLinkList b;
    printf("sizeB=%d\n",sizeof(b));
    return 0;
}
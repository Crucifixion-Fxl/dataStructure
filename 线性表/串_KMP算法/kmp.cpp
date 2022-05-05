// Created on iPad Pro 2021.

#include <iostream>
using namespace std;


//首先是串的顺序存储：定长
//这里为了保证位置元素的为序从1开始 选择浪费第一个数组空间 
#define MAXLEN 255
typedef struct{
    char ch[MAXLEN];
    int length;
}SString;

//堆的分配存储：动态分配内存
typedef struct{
    char * ch;
    int length;
}HString;

//朴素模式匹配算法（暴力）
int Index(SString S,SString T){
    int i=1,j=1;
    while(i<=S.length && j<=T.length){
        if(S.ch[i]==T.ch[j]){
            i++;
            j++;
        }else{
            //使主串的指针回到上个位置的下一个字符 即下一个元素
            i = i - j + 2;
            j = 1;
        }        
    }
    //当发现模式串已经匹配完成时 说明子串匹配完成
    if(j>T.length){
        return i-T.length;
    }else{
        return 0;
    }
}

//next数组求法
void get_next(String T,int next[]){
    int i=1,j=0;
    next[1] = 0;
    while(i<T.length){
        if(j==0 || T.ch[i]==T.ch[j]){
            ++i;++j;
            next[i]=j;
        }else{
            j = next[j];
        }
    }
}

//KMP算法函数
void Index_KMP(SString S,SString T,int next[]){
    int i =1,j=1;
    while(i<=S.length && j<=T.length){
        if(j==0 || S.ch[i]==T.ch[j]){
            ++i;++j;
        }else{
            j=next[j];
        }
    }
    if(j>T.length){
        return i-T.length;
    }else{
        return 0;
    }
}

void get_nextval(SString T,int nextval[]){
    int i = 1 ,j=0;
    nextval[1] = 0;
    while(i<T.length){
        if(j==0 || T.ch[i]==T.ch[j]){
            ++i;++j;
            if(T.ch[i]!=T.ch[j]){
                nextval[i]=j;
            }else{
                nextval[i] = nextval[j];
            }
        }else{
            j=nextval[j];
        }
    }
}




int main() {
    cout << "Hello World!";
    return 0;
}
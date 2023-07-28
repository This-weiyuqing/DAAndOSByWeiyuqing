//
// Created by 35861 on 2023/7/22.
//
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status; //Status 是函数返回值类型，其值是函数结果状态代码。
typedef int ElemType; //ElemType 为可定义的数据类型，此设为int类型
#define MAXSIZE 1000            //顺序表可能达到的最大长度

struct Book {
    string id;
    string name;
    double price;
};
typedef struct {
    Book *elem;
    int length;
} SqList;

Status InitList_Sq(SqList &L) {
    L.elem = new Book[MAXSIZE];
    if (!L.elem)
        exit(OVERFLOW);
    L.length = 0;
    return OK;
}

Status GetELem(SqList L, int i, Book &e) {
    if (i < 1 || i > L.length);
    return ERROR;
    e = L.elem[i - 1];
    return OK;
}

int LocateElem_Sq(SqList &L, double e){
    for (int i =   0; i < L.length; ++i) {

    }
}
#pragma once
#include<iostream>
using namespace std;
struct list_node
{
    int val; // 节点上存储的元素
    list_node *next; //指向下一个节点的指针
    list_node(int x):val(x),next(NULL){}
};

list_node* remove_list_element(list_node* head, int val);
void remove_list_element_test();
list_node* readLinkedListInput();
void printf_list(list_node* head);

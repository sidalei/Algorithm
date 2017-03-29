//
//  doublelinkedlist.cpp
//  doublelinkedlist
//
//  Created by suchao on 3/29/17.
//  Copyright © 2017 suchao. All rights reserved.
//

#include "doublelinkedlist.h"
#include <iostream>
#include <cstddef>

using namespace std;

DoubleLinkedList::DoubleLinkedList(){
    length = 0;
    p_head = NULL;
}

DoubleLinkedList::~DoubleLinkedList(){
    Node *p_tmp;
    for(int i = 0; i < length; i++){
        p_tmp = p_head;
        p_head = p_head->p_next;
        delete p_tmp;
    }
}

void DoubleLinkedList::Insert(int val, int pos){
    Node *node = p_head;
    Node *tmp = new Node(val);
    if(pos < 0){
        cout << "position must be greater than 0!" << endl;
        return;
    }else if (pos ==0){
        p_head = tmp;
        tmp->p_next = node;
        if(node != NULL){
            node->p_pre = tmp;
        }
        length++;
        return;
    }else if(pos > 0 && pos < length){
        for(int i=0 ; i<pos; i++){
            node = node->p_next;
        }
        tmp->p_next = node;
        tmp->p_pre = node->p_pre;
        node->p_pre->p_next = tmp;
        node->p_pre = tmp;
        length++;
        return;
    }else if(pos == length){
        for(int i=0 ; i<pos-1 ; i++){
            node = node->p_next;
        }
        node->p_next = tmp;
        tmp->p_pre = node;
        length++;
        return;
    }
    
}

void DoubleLinkedList::InsertHead(int val){
    Insert(val, 0);
    
}

void DoubleLinkedList::Remove(int pos){
    Node *tmp = p_head;
    if(pos == 0){
        p_head = p_head->p_next;
        tmp = NULL;
        length--;
    }else if (pos == length){
        while(tmp->p_next != NULL){
            tmp = tmp->p_next;
        }
        tmp->p_pre->p_next = NULL;
        tmp = NULL;
        length--;
    }else{
        for(int i=0 ; i<pos-1; i++){
            tmp = tmp->p_next;
        }
        tmp->p_pre->p_next = tmp->p_next;
        tmp->p_next->p_pre = tmp->p_pre;
        tmp = NULL;
        length--;
    }
    return;
        
}

int DoubleLinkedList::GetLength(){
    return length;
}

void DoubleLinkedList::Print(){
    Node *tmp = p_head;
    for(int i=0 ; i<length ; i++){
        cout << tmp->data << endl;
        tmp = tmp->p_next;
    }
}


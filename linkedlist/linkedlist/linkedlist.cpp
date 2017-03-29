//
//  linkedlist.cpp
//  linkedlist
//
//  Created by suchao on 3/29/17.
//  Copyright © 2017 suchao. All rights reserved.
//

#include "linkedlist.h"
#include <iostream>
#include <cstddef>

using namespace std;

LinkedList::LinkedList(){
    p_head = NULL;
    length = 0;
}

LinkedList::~LinkedList(){
    Node *p_tmp;
    for(int i = 0; i < length; i++){
        p_tmp = p_head;
        p_head = p_head->p_next;
        delete p_tmp;
    }
}

int LinkedList::Length(){
    return length;
}

void LinkedList::InsertHead(int val){
    Insert(val, 0);
}

void LinkedList::Insert(int val, int pos){
    if(pos < 0){
        cout << "position must be greater than 0" <<endl;
        return;
    }
    int index = 1;
    Node *p_tmp = p_head;
    Node *p_node = new Node(val);
    if(pos == 0){
        p_node->p_next = p_tmp;
        p_head = p_node;
        length++;
        //	cout << "lenght =" << length << endl;
        return;
    }
    
    while(p_tmp != NULL && index < pos){
        cout << "yes" << endl;
        p_tmp = p_tmp->p_next;
        index++;
    }
    if(p_tmp == NULL){
        cout << "insert failed" <<endl;
        return;
    }
    p_node->p_next = p_tmp->p_next;
    p_tmp->p_next = p_node;
    length++;
    return;
}

void LinkedList::Remove(int pos){
    if(pos <= 0 || pos > length){
        cout << "error!" << endl;
        return;
    }else{
        if(pos == 1){
            p_head = p_head->p_next;
            length--;
            return;
        }
        Node *p_tmp = p_head;
        int index = 2;
        while(p_tmp !=NULL && index < pos){
            p_tmp = p_tmp->p_next;
            index++;
        }
        p_tmp->p_next = p_tmp->p_next->p_next;
        length--;
        return;
        
        
    }
}

void LinkedList::Print(){
    if(p_head == NULL){
        cout << "Empty." << endl;
        return;
    }else{
        Node *p_tmp = p_head;
        while(p_tmp != NULL){
            cout << p_tmp->data <<endl;
            p_tmp = p_tmp->p_next;
        }
        return;
    }
    return;
}

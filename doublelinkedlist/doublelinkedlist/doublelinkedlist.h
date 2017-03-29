//
//  doublelinkedlist.h
//  doublelinkedlist
//
//  Created by suchao on 3/29/17.
//  Copyright © 2017 suchao. All rights reserved.
//

#ifndef doublelinkedlist_h
#define doublelinkedlist_h

#include <cstddef>

using namespace std;

struct Node{
    int data;
    Node* p_next;
    Node* p_pre;
    Node(int i):data(i),p_next(NULL),p_pre(NULL){}
};

class DoubleLinkedList{
public:
    DoubleLinkedList();
    void InsertHead(int val);
    void Insert(int val, int pos);
    void Remove(int pos);
    int GetLength();
    int FindVal(int val);
    void Print();
    ~DoubleLinkedList();
    
private:
    Node* p_head;
    int length;
    

};

#endif /* doublelinkedlist_h */

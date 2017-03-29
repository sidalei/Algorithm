//
//  linkedlist.h
//  linkedlist
//
//  Created by suchao on 3/29/17.
//  Copyright © 2017 suchao. All rights reserved.
//

#ifndef linkedlist_h
#define linkedlist_h

#include <cstddef>

using namespace std;

struct Node{
    int data;
    Node* p_next;
    
    Node(int i):data(i),p_next(NULL){}
};

class LinkedList{
public:
    LinkedList();
    void InsertHead(int val);
    void Insert(int val, int pos);
    void Remove(int pos);
    int Length();
    void Print();
    
    ~LinkedList();
    
private:
    int length;
    Node* p_head;
};



#endif /* linkedlist_h */

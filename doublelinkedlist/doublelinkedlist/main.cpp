//
//  main.cpp
//  doublelinkedlist
//
//  Created by suchao on 3/29/17.
//  Copyright © 2017 suchao. All rights reserved.
//

#include <iostream>
#include "doublelinkedlist.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    DoubleLinkedList dll;
    
    dll.Print();
    cout << "===============" << endl;
    cout << "testing inserting 10...." << endl;
    dll.Insert(10,0);
    cout <<"length="<< dll.GetLength() <<endl;
    dll.Print();
    cout << "===============" << endl;
    
    cout << "testing inserting 9...." << endl;
    dll.Insert(9,1);
    dll.Print();
    cout << "===============" << endl;
    
    cout << "testing inserting 8...." << endl;
    dll.Insert(8,2);
    dll.Print();
    cout << "===============" << endl;
    cout << "testing remove 9" << endl;
    dll.Remove(2);
    dll.Print();
    return 0;
}

//
//  main.cpp
//  linkedlist
//
//  Created by suchao on 3/29/17.
//  Copyright © 2017 suchao. All rights reserved.
//

#include <iostream>
#include "linkedlist.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    LinkedList ll;
    
    ll.Print();
    cout << "===============" << endl;
    cout << "testing inserting 10...." << endl;
    ll.Insert(10,0);
    cout <<"length="<< ll.Length() <<endl;
    ll.Print();
    cout << "===============" << endl;
    
    cout << "testing inserting 9...." << endl;
    ll.Insert(9,1);
    ll.Print();
    cout << "===============" << endl;
    
    cout << "testing inserting 8...." << endl;
    ll.Insert(8,2);
    ll.Print();
    cout << "===============" << endl;
    cout << "testing remove 9" << endl;
    ll.Remove(2);
    ll.Print();
    
    return 0;
}

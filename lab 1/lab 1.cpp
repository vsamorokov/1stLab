﻿//var 8

#include <iostream>
#include "List.h"

using namespace std;


int main()
{
    List<int> l1;
    for (int i = 0; i < 5; i++) {
        l1.insert(i);
    }
    for (auto it = l1.begin(); it != l1.end(); it++) {
        cout << *it;
    }
}
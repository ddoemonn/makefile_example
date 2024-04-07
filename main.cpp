// main.cpp

#include <iostream>
#include "./accept/accept_functions.h"

using namespace std;

int main() {
    int v[6] = {1,2,3,4,5,6};
    int* p = &v[3];
    cout << p << endl; // 0x16d79708c

    cout << (p+1) << endl; // 0x16d797090

    char c[12] = {'a','b','c','d','e','f','a','b','c','d','e','f'};
    char* d = &c[0];

    //cout << d << endl; 
    cout << static_cast<void*>(d) << endl;

    //cout << (d+2) << endl; 
    cout << static_cast<void*>(d+2) << endl;

}

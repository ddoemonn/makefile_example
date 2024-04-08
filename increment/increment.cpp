#include <iostream>

using namespace std;

void increment(){
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (int i=0; i!=10; ++i) {
        int& x = v[i];
        x++;
    }

    for (int i=0; i!=10; ++i){
        cout << v[i] << endl;
    }
}

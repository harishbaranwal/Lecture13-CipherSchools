#include <iostream>
using namespace std;

int main(){

    // int a=5;

    // int *x;
    // x=&a;

    // cout << "the address of a, which is stored in the pointer x is: " << x << endl;
    // cout << "the value of x+1 is: "<< x+1 <<endl;
    // cout << x+2 << endl;


    int a[5];
    int *x;

    x=&a[0];

    for(int i=0;i<6;i++){
        cout << &a[i] << endl;
    }

    return 0;
}

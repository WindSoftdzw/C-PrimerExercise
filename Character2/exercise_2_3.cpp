#include <iostream>

using namespace std;

int main(){

    //混用有符号数与无符号数得到的是无符号数
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl; //32
    cout << u - u2 << endl; //32

    int i = 10, i2 = 42;
    cout << i2 - i << endl; // 32
    cout << i - i2 << endl; // -32
    cout << i - u2 << endl; // 0
    cout << u - i2 << endl; // 0
    return 0;
}
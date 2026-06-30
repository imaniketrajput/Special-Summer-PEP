#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 23;
    int y = 16;

    cout << x << endl;
    cout << y << endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << x << endl;
    cout << y << endl;
}
#include<bits/stdc++.h>
using namespace std;


int main(){
    int num = 10;
    int binary = 0;
    int i = 0;

    while(num != 0)
    {
        int bit = num % 2;
        binary = bit * pow(10, i) + binary;
        i++;
        num/=2;
    }



    cout << binary;

    return 0;
}
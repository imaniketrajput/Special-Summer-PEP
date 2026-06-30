#include<bits/stdc++.h>
using namespace std;

bool powerOf2(int x)
{
    if(x <= 0) return false;

    return ((x & (x-1))) == 0;
    
}

bool generalPowerOFAnyNumber(int x, int k)
{
    if(x <= 0) return false;

    while(x % k == 0) x/=k;

    if(x==1) return true;

}

int main()
{
    int x = 81;
    int k = 3;

    cout << powerOf2(x) << endl;
    cout << generalPowerOFAnyNumber(x, k) << endl;

    return 0;

}
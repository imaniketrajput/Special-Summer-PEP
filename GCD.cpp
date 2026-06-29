#include<bits/stdc++.h>
using namespace std;


// LCM * GCD = a*b

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int LCM(int a, int b)
{
    return (a * b) / gcd(a,b);
}

int main(){
    int a = 10;
    int b = 45;

    cout << "HCF/GCD: " << gcd(a, b) << endl;
    cout << "LCM : " << LCM(a,b) << endl;

    return 0;
}
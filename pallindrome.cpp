#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x = 12338921;

    int reverseHalf = 0;

    while(x > reverseHalf)
    {
        reverseHalf = reverseHalf * 10 + x % 10;

        x /= 10;
    }

    if(x == reverseHalf || x==reverseHalf / 10)
    {
        cout << "Palindromeeeee!!";
    }
    else{
        cout << "Not Palindromeeeee!!";

    }

    return 0;
}
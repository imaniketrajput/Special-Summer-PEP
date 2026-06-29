#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 100;

    for(int i=1; i<=sqrt(x); i++)
    {

        if(x % i == 0)
        {
            cout << i << " ";

            if( i != x/i)
            {
                cout << x / i << " ";
            }
        }

        
    }

    return 0;
}

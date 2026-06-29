#include<bits/stdc++.h>
using namespace std;

int countDigits(int num)
{
    int count = 0;
    while(num != 0)
    {      
        count++;
        num /= 10;
    }

    return count;
}

int power(int base, int pow)
{
    int ans = 1;
    for(int i=0; i<pow; i++)
    {
        ans *= base;
    }

    return ans;
}

int main(){
    int x = 15894373;

    int digit = countDigits(x);

    int sum = 0;
    int o = x;

    while(x!= 0)
    {
        int ld = x % 10;
        sum += power(ld, digit);
        x /= 10;
    }

    if(sum == o)
    {
        cout << "ARMSTRONG!!!";
    }
    else{
        cout << "NOT ARMSTRONG!!!";

    }

    return 0;

}
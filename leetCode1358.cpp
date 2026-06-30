/*
Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

Example 1:

Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
Example 2:

Input: s = "aaacb"
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
Example 3:

Input: s = "abc"
Output: 1
 

Constraints:

3 <= s.length <= 5 x 10^4
s only consists of a, b or c characters. */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcabc";

    long long count = 0;
    int lastA = -1, lastB = -1, lastC = -1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') lastA = i;
        else if (s[i] == 'b') lastB = i;
        else if (s[i] == 'c') lastC = i;

        int minIdx = min({lastA, lastB, lastC});
        if (minIdx != -1) {
            count += (minIdx + 1);
        }
    }

    cout << count;

    TLEEEEEEE
    // vector<string> arr;

    // int count = 0;

    // for(int i=0; i<str.length(); i++)
    // {
    //     for(int j=0; j<str.length()-i; j++)
    //     {
    //         string s = "";
    //         for(int k=i; k<=i+j; k++)
    //         {
    //             s+=str[k];

    //         }

    //         if(s.find("a") != string::npos && s.find("b") != string::npos && s.find("c") != string::npos)
    //         {
    //             count++;
    //         }
    //         arr.push_back(s);
    //     }
    // }

    // for(string wo : arr)
    // {
    //     cout << wo << " ";
    // }

    // cout << "\n" << count << endl;

    return 0;
}
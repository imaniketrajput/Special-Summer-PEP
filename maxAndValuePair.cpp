/*
Given an array arr[] of positive integers, You have to find the maximum bitwise AND value obtained by any pair (arr[i], arr[j]) such that i ≠ j .

Examples:

Input: arr[] = [4, 8, 12, 16]
Output: 8
Explanation: Pair (8,12) has the maximum AND value 8.
Input: arr[] = [4, 8, 16, 2]
Output: 0
Explanation: All pairwise AND values are 0, so the maximum possible AND value among them is also 0.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105 */

#include<bits/stdc++.h>
using namespace std;

int maxAND(vector<int>& arr) {
    int ans = 0;

    for (int bit = 31; bit >= 0; bit--) {
        int temp = ans | (1 << bit);

        int cnt = 0;

        for (int x : arr) {
            if ((x & temp) == temp)[=[]]
                cnt++;
        }

        if (cnt >= 2)
            ans = temp;
    }

    return ans;
}












// TLEEEEEEEEEEEEE

// int maxAND(vector<int>& arr) {
//         // code here
//         int s = arr.size();
        
//         int max = 0;
        
//         for(int i=0; i<s; i++)
//         {
//             for(int j=i+1; j<s; j++)
//             {
//                 if((arr[i]&arr[j]) > max)
//                 {
//                     max = arr[i]&arr[j];
//                 }
//             }
//         }
        
//         return max;

// }


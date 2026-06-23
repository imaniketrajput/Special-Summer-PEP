/* Example 1:

Input: nums = [23,2,4,6,7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
Example 2:

Input: nums = [23,2,6,4,7], k = 6
Output: true
Explanation: [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
Example 3:

Input: nums = [23,2,6,4,7], k = 13
Output: false */

#include<bits/stdc++.h>
using namespace std;

bool calculate(){
    
    vector<int> arr = {23,2,4,6,7};
    int k = 6;

    unordered_map<int, int> mp;
    mp[0] = -1;

    int sum = 0;

    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        int rem = sum % k;

        if(mp.count(rem)){
            if(i-mp[rem] >= 2){
                return true;
            }
        }
        else{
            mp[rem] = i;
        }
    }

    return false;


    // TLEEEE

    // for(int i=0; i<arr.size(); i++){
    //     int sum = arr[i];
    //     for(int j=i+1; j<arr.size(); j++){
    //         sum += arr[j];
    //         if(sum % k == 0){
    //             return true;
    //         }
    //     }
    // }

    // return false;
}

int main()
{
    cout << calculate();
}
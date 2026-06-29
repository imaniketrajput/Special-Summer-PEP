#include<bits/stdc++.h>
using namespace std;

/* Lower Bound = First element >= target
Upper Bound = First element > target

Function	        Condition	             Move	              Result
Lower Bound	      arr[mid] >= x	        right = mid - 1	        First >= x
Upper Bound	      arr[mid] > x	        right = mid - 1	        First > x
Last <= x	      arr[mid] <= x	        left = mid + 1	        Last <= x
Last < x	      arr[mid] < x	        left = mid + 1	        Last < x

*/

// // LOWER BOUND ">=" first element in the array which is greater than or equal to target element

// int main()
// {
//     vector<int> arr = {1,3,5,54,67,89};


//     int n = arr.size();
//     arr.resize(n + 1);
//     int left = 0;
//     int right = n - 1;


//     int ele = 10;

//     int idx = -1;

//     while(left <= right){
//         int mid = left + (right-left) / 2;

//         if(arr[mid] >= ele)
//         {
//             idx = mid;
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid+1;
//         }

//     }

//     cout << idx;

//     for(int i=arr.size()-1; i>idx; i--)
//     {
//         arr[i] = arr[i-1];
//     }

//     arr[idx] = ele;

//     for(int el : arr)
//     {
//         cout << el << " ";
//     }

//     return 0;
// } 


// Upper BOUND ">" First element in the array which is greater than to target element

int main()
{
    vector<int> arr = {1,3,5,54,67,89};


    int n = arr.size();
    arr.resize(n + 1);
    int left = 0;
    int right = n - 1;


    int ele = 10;

    int idx = -1;

    while(left <= right){
        int mid = left + (right-left) / 2;

        if(arr[mid] > ele)
        {
            idx = mid;
            right = mid - 1;
        }
        else
        {
            left = mid+1;
        }

    }

    cout << idx;

    for(int i=arr.size()-1; i>idx; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[idx] = ele;

    for(int el : arr)
    {
        cout << el << " ";
    }

    return 0;
} 
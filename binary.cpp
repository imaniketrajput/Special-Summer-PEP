#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr = {1,2,3,45,89,99,100};
    int left = 0;
    int right = arr.size() - 1;
    int target = 45;

    int ans = 0;

    while(left<=right)
    {
        int mid = (left + (right-left)) / 2;

        if(target == arr[mid]){
            ans = mid;
            break;
        }
        else if(target > arr[mid]) left = mid + 1;
        else right = mid - 1;


    }

    cout << ans;


}
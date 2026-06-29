#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>& arr, int left, int right, int tg){
    if(left > right) return -1;

    int mid = left + (right - left) / 2;

    if(tg == arr[mid]) return mid;
    else if(tg > arr[mid]) return binary(arr, mid+1, right, tg);
    else return binary(arr, left, mid-1, tg);
}

int main()
{
    vector<int> arr = {1,2,3,6,87,91,95,156,1156};
    int left = 0;
    int right = arr.size() - 1;
    int tg = 91;
    cout << binary(arr, left, right, tg);


    return 0;
}
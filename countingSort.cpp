#include<bits/stdc++.h>
using namespace std;


void countingSort(vector<int>& arr)
{
    int n = arr.size();
    int maxi = arr[0];

    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }

    vector<int> count(maxi+1, 0);

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for(int i=1; i<=maxi; i++){
        count[i] += count[i-1];
    }

    vector<int> output(n);

    for(int i=n-1; i>=0; i--)
    {  
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}

int main(){
    vector<int> arr = {2,2,9,4,1,7,2,5,9,4,3,2};

    countingSort(arr);

    for(int el : arr){
        cout << el << " ";
    }

    return 0;
}
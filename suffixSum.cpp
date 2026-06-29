#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int s = arr.size();


    for(int i=0; i<s; i++){
        int sum = 0;
        for(int j=i; j<s; j++){
            sum += arr[j];
        }
        cout << sum << " ";
    }



    // vector<int> ans;

    // int sum = 0;

    // for(int i=s-1; i>=0; i--){
    //     sum += arr[i];
    //     ans.push_back(sum);
    // }

    // reverse(ans.begin(), ans.end());

    // for(int el : ans){
    //     cout << el << " ";
    // }



}
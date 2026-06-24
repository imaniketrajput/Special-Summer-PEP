#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3};
    int s = arr.size();



    for(int i=0; i<s; i++){
        for(int j=0; j<s-i; j++)
        {
            for(int k=i; k<=i+j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }


    return 0;

}
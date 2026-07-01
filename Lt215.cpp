
#include<bits/stdc++.h>
using namespace std;



int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // int idx = n-k;
        multiset<int> st;

        for(int i=0; i<k; i++){
            st.insert(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(nums[i]>(*st.begin())){
                st.erase(st.begin());
                st.insert(nums[i]);
            }
        }

        return *(st.begin());
}


int main(){
    vector<int> arr = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;

    cout << findKthLargest(arr, k);
}


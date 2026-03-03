#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;

int longSub(vector<int> & arr, int target){
    int n = arr.size();
    unordered_map<int, int>st;
    int maxLen = 0;
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];

        if(sum == 0){
            maxLen = i+1;
        }
        else if(st.find(sum) != st.end()){
            maxLen = max(maxLen, i - st[sum]);
        }else {
            st[sum] = i;
        }
    }
    return maxLen;
}


int main(){

    vector<int>arr = {9, -3, 3, -1, 6, -5};
    int target = 0;
    cout<<longSub(arr, target)<<endl;
 
 return 0;
}
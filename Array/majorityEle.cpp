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

vector<int> majorityEle(vector<int>arr){
    int n = arr.size();
    int cnt1 = 0;
    int cnt2 = 0;
    int ele1 = 0;
    int ele2 = 0;

    for(int i=0; i<n; i++){
        if(cnt1 == 0 && ele2 != arr[i]){
            cnt1 = 1;
            ele1 = arr[i];
        }else if(cnt2 == 0 && ele1 != arr[i]){
            cnt2 = 1;
            ele2 = arr[i];
        }else if(ele1 == arr[i]){
            cnt1++;
        }else if(ele2 == arr[i]){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0;
    cnt2 = 0;

    int freq = n/3 + 1;
    for(int i = 0; i<n; i++){
        if(arr[i]== ele1){
            cnt1++;
        }else if(arr[i] == ele2){
            cnt2++;
        }
    }
    vector<int>ans;

    if(cnt1 >= freq){
        ans.push_back(ele1);
    }
    if(cnt2 >= freq){
        ans.push_back(ele2);
    }
    return ans;
}
 
int main(){

    vector<int>arr = {1, 2, 1, 1, 3, 2, 2};
    vector<int>ans = majorityEle(arr);

    for(auto i : ans){
        cout<<i<<" ";
    }
 
 return 0;
}
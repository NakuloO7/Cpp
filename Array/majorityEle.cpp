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

int majorityEle(vector<int>arr){
    int n = arr.size();
    int count = 0;
    int ele = 0;

    for(int i = 0; i<n; i++){
        if(count == 0){
            ele = arr[i];
            count++;
        }else if(arr[i] == ele){
            count++;
        }else{
            count--;
        }
    }

    int target=0;
    for(int i = 0; i<n; i++){
        if(arr[i] == ele){
            target++;
        }
    }

    if(target > n/2){
        return ele;
    }
    return -1;
}
 
int main(){

    vector<int>arr = {2,2,1,1,1,2,2};
    cout<<majorityEle(arr);
 
 return 0;
}
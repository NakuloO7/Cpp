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

bool linearSearch(vector<int>arr, int num){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i]== num) return true;
    }
    return false;
}

int longCount(vector<int>& arr){
    int n = arr.size();
    int maxCount = 1;

    for(int i = 0; i<n; i++){
        int x = arr[i];
        int cnt = 1;

        while(linearSearch(arr, x+1) == true){
            cnt+=1;
            x +=1;
        }
        maxCount = max(maxCount, cnt);
    }
    return maxCount;
}


int main(){
    vector<int>arr = {1,9, 3, 10, 4, 20, 2};
    cout<<longCount(arr);
 return 0;
}
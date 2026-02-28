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


vector<int> missing(vector<int>arr){
    int n = arr.size();
    int repeating = -1;
    int missing = -1;

    for(int i = 1; i<=n; i++){
        int cnt = 0;

        for(int j = 0; j<n; j++){
            if(arr[j] == i) cnt++; 
        }

        if(cnt==2) repeating = i;
        else if(cnt == 0 ) missing = i;

        if(missing == -1 && repeating == -1) break;
    }

    return {repeating, missing};

}
int main(){

    vector<int>arr = {3,5,4,1,1};
    vector<int> ans = missing(arr);

    for(auto i : ans){
        cout<<i<<" ";
    }
 
 return 0;
}
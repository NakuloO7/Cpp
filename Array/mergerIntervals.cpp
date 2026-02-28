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
 
int main(){


    vector<vector<int>>v = {{1,3}, {2,6}, {8,10}, {15,18}};
    sort(v.begin(), v.end());
    int m = v.size();
    int n = v[0].size();
    // Result array to store merged intervals
    vector<vector<int>> ans;



    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
 
 return 0;
}
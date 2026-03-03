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

vector<vector<int>> fourSum(vector<int>arr, int target){
    int n = arr.size();
    set<vector<int>>st;   //to store the unique quadrapletes
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            unordered_set<int>temp;
            for(int k = j+1; k<n; k++){
                int fourth = target - arr[i] - arr[j] - arr[k];
                
                if(temp.find(fourth) != temp.end()){
                    vector<int>v = {arr[i], arr[j], arr[k], fourth};
                    sort(v.begin(), v.end());
                    st.insert(v);
                }
                temp.insert(arr[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(), st.end());
    return ans;
}
 
int main(){

    vector<int> arr = {1,0,-1,0,-2,2};
    int target = 0;


    vector<vector<int>>ans = fourSum(arr, target);

    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 
 return 0;
}
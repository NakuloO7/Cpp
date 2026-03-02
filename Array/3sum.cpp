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

vector<vector<int>> threeSum(vector<int>arr){
    set<vector<int>>st;
    int n = arr.size();

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int>temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }


    vector<vector<int>>ans(st.begin(), st.end());
    return ans;
}
 
int main(){
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> res = threeSum(arr);

    for(int i = 0; i<res.size(); i++){
        for(int j = 0; j<res[0].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 
 return 0;
}
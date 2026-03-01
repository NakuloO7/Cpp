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
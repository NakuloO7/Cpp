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

void reverse(vector<int> & arr, int s, int e){
    if(s >= e) return;
    swap(arr[s], arr[e]);
    reverse(arr, s+1, e-1);
}
 
int main(){

    vector<int> arr = {12,3,4,5,6};

    reverse(arr, 0, arr.size()-1);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
 
 return 0;
}
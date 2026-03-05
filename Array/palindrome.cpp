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

bool isPalindrome(string s){

    int l = 0;
    int r = s.size()-1;

    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;

}
 
int main(){
    string s = "radkr";

    cout<<isPalindrome(s);
 
 return 0;
}
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

bool isPalindrome(string s, int l, int r){
    if(l >= r) {
        return true;
    }

    if(s[l] != s[r]){
        return false;
    }

    return isPalindrome(s, l+1, r-1);

}
 
int main(){
    string s = "radar";

    cout<<isPalindrome(s, 0, s.size()-1);
 
 return 0;
} 
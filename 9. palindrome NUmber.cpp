#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 ||(x%10==0 && x!=0)){
            return false;
        }
        int rev=0;
        int temp=x;
        while(temp>0){
            int ld=temp%10;
            temp=temp/10;

            if(rev>(INT_MAX-ld)/10){
                return false;
            }
            rev=rev*10+ld;
        }
        return rev==x;
    }
};
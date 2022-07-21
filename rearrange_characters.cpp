#include<bits/stdc++.h>
using namespace std;

string rearrangeString(string str){
    string ans;
    unordered_map<char,int> mp;
    int n = str.length();
    for(int i=0; i<n; i++)
        mp[str[i]]++;
    if(n%2 == 0){
        for(auto i=mp.begin(); i!=mp.end(); i++){
            if(i->second > n/2){
                ans = "0";
                break;
            }
            else
                ans="1";
        }
        return ans;
    }
    else{
        for(auto i=mp.begin(); i!=mp.end(); i++){
            if(i->second > n/2 + 1){
                ans = "0";
                break;
            }
            else
                ans="1";
        }
        return ans;
    }
}


int main(){
    string str = "geeksforgeeks";
    cout<<rearrangeString(str);
}
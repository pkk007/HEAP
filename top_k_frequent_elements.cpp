#include<bits/stdc++.h>
using namespace std;

vector<int> k_frequent(vector<int>& nums, int k){
    vector<int> v;
    unordered_map<int,int> mp;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
    for(int i=0; i<nums.size(); i++)
        mp[nums[i]]++;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        p.push({i->second, i->first});
        if(p.size()>k)
            p.pop();
    }
    while(p.size()>0){
        v.push_back(p.top().second);
        p.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,3,4};
    int k=2;
    vector<int> v = k_frequent(arr,k);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
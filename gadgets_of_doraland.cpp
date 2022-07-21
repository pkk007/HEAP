#include<bits/stdc++.h>
using namespace std;

vector<int> TopK(vector<int>& array, int k){
    vector<int> v;
    int n = array.size();
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++)
        mp[array[i]]++;
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        pq.push({i->second, i->first});
        if(pq.size()>k)
            pq.pop();
    }
    while(pq.size()>0){
        pair<int,int> a = pq.top();
        pq.pop();
        v.push_back(a.second);
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    vector<int> array = {1, 1, 2, 2, 3, 3, 3, 4};
    int k = 2;
    vector<int> v = TopK(array,k);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
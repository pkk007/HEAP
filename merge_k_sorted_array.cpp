#include<bits/stdc++.h>
using namespace std;

vector<int> mergeKArrays(vector<vector<int>> arr, int K){
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i=0; i<K; i++){
        for(int j=0; j<K; j++){
            p.push(arr[i][j]);
        }
    }
    while(p.size()>0){
        v.push_back(p.top());
        p.pop();
    }
    return v;
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},{2,2,3,4},{5,5,6,6},{7,8,9,9}};
    int k=4;
    vector<int> v = mergeKArrays(arr,k);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
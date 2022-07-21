#include<bits/stdc++.h>
using namespace std;

vector<int> k_largest_element(int arr[], int n, int k){
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> minH;
    for(int i=0; i<n; i++){
        minH.push(arr[i]);
        if(minH.size()>k)
            minH.pop();
    }
    while(minH.size()>0){
        v.push_back(minH.top());
        minH.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    int arr[] = {12,5,787,1,23};
    int k=2;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v = k_largest_element(arr,n,k);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
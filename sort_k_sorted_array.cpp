#include<bits/stdc++.h>
using namespace std;

string sort_k_sorted_array(int arr[], int n, int k){
    string ans;
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i=0; i<n; i++){
        p.push(arr[i]);
        if(p.size()>k){
            v.push_back(p.top());
            p.pop();
        }
    }
    while(p.size()>0){
        v.push_back(p.top());
        p.pop();
    }
    for(int i=1; i<n; i++){
        if(v[i]>v[i-1])
            ans = "YES";
        else{
            ans = "NO";
            break;
        }
    }
    return ans;
}

string other_method(int arr[], int n, int k){
    unordered_map<int, int>m;
        for(int i=0; i<n; i++)
            m[arr[i]] = i;
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            if(abs(m[arr[i]] - i) > k)
               return "No";
        }
        return "Yes";
}

int main(){
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<sort_k_sorted_array(arr,n,k);
}
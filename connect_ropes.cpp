#include<bits/stdc++.h>
using namespace std;

int connect_ropes(int arr[], int n){
    int tcost = 0;
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i=0; i<n; i++){
        p.push(arr[i]);
    }
    while(p.size()>=2){
        int first = p.top();
        p.pop();
        int second = p.top();
        p.pop();
        tcost += first + second;
        p.push(first+second);
    }
    return tcost;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"MINIMUM TORAL COST : "<<connect_ropes(arr,n);
}
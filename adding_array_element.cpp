#include<bits/stdc++.h>
using namespace std;

int minOperations(int arr[], int n, int k){
    int sum = 0;
    int count = 0;
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i=0; i<n; i++)
        p.push(arr[i]);
    
    sum = p.top();
    p.pop();
    while(sum<k){
        sum += p.top();
        p.pop();
        count++;
    }
    return count;
}

int main(){
    int arr[] = {7,3,7,1,8,10,15,6};
    int n = 8;
    int k = 7;
    cout<<minOperations(arr,n,k);
}
#include<bits/stdc++.h>
using namespace std;

int kth_smallest_element(int arr[],int n, int k){
    priority_queue<int> maxH;
    for(int i=0; i<n; i++){
        maxH.push(arr[i]);
        if(maxH.size()>k)
            maxH.pop();
    }
    return maxH.top();
}

int main(){
    int arr[] = {7,10,4,3,20,15};
    int k=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<kth_smallest_element(arr,n,k);
    return 0;
}
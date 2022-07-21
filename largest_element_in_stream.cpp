#include<bits/stdc++.h>
using namespace std;

vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        vector<int>ans;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<n; i++)
        {
            pq.push(arr[i]);
            if(pq.size() < k)
            ans.push_back(-1);
            else if(pq.size() == k)
            ans.push_back(pq.top());
            else
            {
                pq.pop();
                ans.push_back(pq.top());
            }
        }
        return ans;
    }

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6};
    // int arr[]= {3,4};
    int n=6;
    int k=4;
    vector<int> v = kthLargest(k,arr,n);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
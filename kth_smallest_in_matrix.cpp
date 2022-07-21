#include<bits/stdc++.h>
using namespace std;

const int MAX = 10;

int kthSmallest(int mat[MAX][MAX], int n, int k){
    priority_queue<int> p;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            p.push(mat[i][j]);
            if(p.size()>k)
                p.pop();
        }
    }
    return p.top();
}

int main(){
    int arr[MAX][MAX] = {{16, 28, 60, 64},
                        {22, 41, 63, 91},
                        {27, 50, 87, 93},
                        {36, 78, 87, 94 }};
    int n= 4;
    int k=3;
    cout<<kthSmallest(arr,n,k);
}
#include<bits/stdc++.h>
using namespace std;

long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2){
    long long sum=0;
    priority_queue<long long> p;
    for(int i=0; i<N; i++)
        p.push(A[i]);
    while(p.size()>=K2)
        p.pop();

    int run = K2-K1-1;
    while(run>0){
        sum+= p.top();
        p.pop();
        run--;
    }
    return sum;
}

int main(){
    long long A[] = {10,2,50,12,48,13};
    int N=6;
    int k1=2;
    int k2=6;
    cout<<sumBetweenTwoKth(A,N,k1,k2);
}
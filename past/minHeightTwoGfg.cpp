#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int A[], int n, int k) {
    sort(A, A+n);
    int ans=A[n-1]-A[0];    
    int maxi=A[n-1]-k, mini=A[0]+k;
    for(int i=1;i<n;i++){
        maxi=max(A[i-1]+k, A[n-1]-k);
        mini=min(A[i]-k, A[0]+k);
        if(mini<0) continue;
        ans=min(ans, maxi-mini);
    }
    return ans;
}
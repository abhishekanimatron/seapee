#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int A[], int n, int k) {
    sort(A, A+n);
    int maxi=A[n-1], mini=A[0];
    int ans=maxi-mini;    
    for(int i=1;i<n;i++){
        maxi=max(A[i-1]+k, A[n-1]-k);
        mini=min(A[i]-k, A[0]+k);
        ans=min(ans, maxi-mini);
    }
    return ans;
}
// int getMinDiff(int A[], int n, int k) {
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=A[i];
//     }
//     int avg=sum/n;
//     for(int i=0;i<n;i++){
//         if(abs((A[i]+=k)-avg) < abs((A[i]-=k)-avg)){
//             A[i]+=k;
//         }
//         else
//             A[i]-=k;
//     }
//     int maxi=0, mini=1e6;
//     for(int i=0;i<n;i++){
//         maxi=max(maxi, A[i]);
//         mini=min(mini, A[i]);
//     }
//     return maxi-mini;
// }
// int getMinDiff(int A[], int n, int k) {
//     int sum=0;
//     int maxi=0, mini=1e6;
//     for(int i=0;i<n;i++){
//         sum+=A[i];
//         maxi=max(maxi, A[i]);
//         mini=min(mini, A[i]);
//     }
//     maxi=maxi-k;
//     mini=mini+k;
//     return maxi-mini;
// }
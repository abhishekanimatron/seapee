int subarraySumK(vector<int> &a, int n, int k)
{
    int psum[n];
    psum[0]=a[0];
    for(int i=1;i<n;i++){
        psum[i]=psum[i-1]+a[i];
    }
    int minLen=INT_MAX;
    for(int i=0;i<n;i++){
        
    }
}
sort(arr,arr+n);
int mid=n/2;
vector<int>v1;
for(int i=0;i<=mid;i++){
    v1.push_back(arr[i]);
}
vector<int>v2;
for(int i=mid+1;i<n;i++){
    v2.push_back(arr[i]);
}
int vi=0, wi=0;
for(int i=0;i<n;i++){
    if(i%2==0)
        arr[i]=v1[vi++];
    else
        arr[i]=v2[wi++];
}
return arr;

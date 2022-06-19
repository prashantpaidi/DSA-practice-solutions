long long int maxSum(int arr[], int n)
{
    
    
    long long int ans=0;
    sort(arr,arr+n);
    // vector<int>v;
    int k=0,j=n-1,i=0;
    while(i<j){
        ans+= abs(arr[i++]-arr[j]);
        ans+= abs(arr[i]-arr[j--]);
    }
    // for(int i=0;i<v.size()-1;i++){
    //     ans+=abs(v[i]-v[i+1]);
    // }
    
    ans+=abs(arr[0]-arr[i]);
    return ans;
    
    

}

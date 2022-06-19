class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        long long int ans=0;
        sort(a,a+n);
        int mod=1e9+7;
        for(long long int i=0;i<n;i++){
            ans += (a[i]*i)%mod;
            ans%=mod;
        }
        return ans;
    }
};
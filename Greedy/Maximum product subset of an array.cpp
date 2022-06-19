class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here
        if(n==1)
            return a[0];
            
        int mod=1e9 + 7;
        long long int ans;
        long long int prod=1;
        int cnt0=0,cntn=0;
        int maxneg=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt0++;
                continue;
            }
            if(a[i]<0){
                cntn++;
                maxneg=max(maxneg,a[i]);
            }
            
            prod=(prod*a[i])%mod;
        }
        if(cnt0==n){
            return 0;
        }
        else if(cntn==1 and cnt0 == n-1){
            return 0;
        }else if(cntn&1)
        return prod/maxneg;
        
        return prod;
            
        
    }
};

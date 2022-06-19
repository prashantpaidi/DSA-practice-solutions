class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(Arr.rbegin(),Arr.rend());
        long long sum=0;
        for(int i=0;i<N;i++){
            sum+=Arr[i];
        }
        if(sum==0)
            return N;
        long long ans=0;
        int i=0;
        while(i<N and (sum-Arr[i])>=(ans+Arr[i])){
            sum-=Arr[i];
            ans+=Arr[i];
            i++;
        }
        return i+1;
        
    }
};

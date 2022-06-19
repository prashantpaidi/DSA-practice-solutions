class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long i=0;
        long long j=m-1;
        long long int mi=INT_MAX;
        sort(a.begin(),a.end());
        while(j<n){
            mi = min(mi,a[j]-a[i]);
            j++;i++;
        }
        return mi;
    }   
};
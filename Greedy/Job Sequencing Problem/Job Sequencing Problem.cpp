class Solution 
{
    static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code her
        
        
        sort(arr,arr+n,cmp);
        bool done[n]= {0};
        int cntjob=0, profit=0;
        
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead-1);j>=0;j--){
                if(done[j]==false){
                     cntjob++;
                     profit+=arr[i].profit;
                    done[j]=true;
                    break;
                }
            }
        }
        return {cntjob,profit};
        

       } 
};

class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        int xcut=1,ycut=1;
        vector<pair<int,char>>v;
        for(int i=0;i<M;i++)
            v.push_back({X[i],'V'});
        for(int i=0;i<N;i++)
            v.push_back({Y[i],'H'});
        sort(v.rbegin(),v.rend());
        
        int ans=0;
        int i=0;
        while(i<N+M){
            if(v[i].second=='H'){
                ans+=v[i].first*ycut;
                xcut++;
            }else{
               ans+=v[i].first*xcut;
               ycut++; 
            }
            i++;
        }
        
        
        return ans;
    }
};

class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back({price[i],i+1});
        }
        
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(v[i].second,k/v[i].first);
            k-=v[i].first*min(v[i].second,k/v[i].first);
        }
        
        return ans;
    }
};


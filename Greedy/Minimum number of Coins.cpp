class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> deno ={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        int i=deno.size()-1;
        vector<int>ans;
        while(N>0){
            while(N>=deno[i]){
                N-=deno[i];
                ans.push_back(deno[i]);
            }
            
            i--;
        }
        return ans;
    }
};
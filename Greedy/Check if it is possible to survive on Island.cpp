class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        // cout<<(S-(S/7))*N;
        
        if(((S-(S/7))*N)>=M*S){// 
            return (1+((S*M-1)/N));// ceil division 
            
        }
        return -1;
    }
};

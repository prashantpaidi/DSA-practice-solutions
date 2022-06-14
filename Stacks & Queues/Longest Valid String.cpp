class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        
        int left=0,right=0,ma=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            if(right==left)
                ma=max(ma,2*right);
            else if(right>left)
                left=right=0;
        }
        left=right=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            if(right==left)
                ma=max(ma,2*right);
            else if(left>right)
                left=right=0;
        }
        return ma;
    }
};

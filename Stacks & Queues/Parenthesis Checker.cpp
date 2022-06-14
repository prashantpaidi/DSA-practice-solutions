class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<int>st;
        for(int i=0;i<x.size();i++){
            if(x[i]== '[' or x[i]=='(' or x[i]=='{')
                st.push(x[i]);
            else{
                if(st.empty())
                    return false;
                else if(x[i]==')' and st.top()!='(')
                    return false;
                else if(x[i]=='}' and st.top()!='{')
                    return false;
                else if(x[i]==']' and st.top()!='[')
                    return false;
                st.pop();
            }
                
        }
        if(st.empty())
            return true;
        return false;
    }

};
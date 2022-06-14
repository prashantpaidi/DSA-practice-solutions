char reverse(char S, int len)
{
    code here
    stackintst;
    for(int i=0;ilen;i++){
        st.push(S[i]);
    }
    for(int i=0;ilen;i++){
        S[i]=st.top();
        st.pop();
    }
    return S;
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack<int> st;
    queue<int> q2;
    while(!q.empty() and k!=0){
        st.push(q.front());
        q.pop();
        k--;
    }
    while(!st.empty()){
        q2.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }
    
    return q2;
}
stack<int> tmp;

void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
	if(tmp.empty() || tmp.top()>=a){
	    tmp.push(a);
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	    return true;
    return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here.
	if(s.size()==0)
	    return true;
    return false;
}

int pop(stack<int>& s){
	// Your code goes here
    if(s.empty())
       {
           return -1;
       }
	int x = s.top();
	if(x==tmp.top())
	    tmp.pop();
	s.pop();
	return x;
}

int getMin(stack<int>& s){
	// Your code goes here
	if(tmp.empty())
   {
       return -1;
   }
	return tmp.top();
}
//two redundant conditions are there
// 1.if immediate pop does not encounter any bracket then we can say redundant brackets are there for ex.((a))
// 2.(((a+B))+c) in this when we pop untill down then the opening bracket is left which is pop condition
  stack<char>st;
    for(auto& ch:s){
        if(ch==')'){
            char top=st.top();
            st.pop();
            bool flag=true;
            while(!st.empty() && top!='('){
                 if (top == '+' || top == '-' || 
                    top == '*' || top == '/')
                    flag = false;
                  top=st.top();
                  st.pop();  
            }
            if(flag==true)
                return true;
        }else{
            st.push(ch);
        }
    }
    return false;

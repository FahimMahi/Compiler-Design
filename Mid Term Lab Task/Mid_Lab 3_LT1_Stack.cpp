#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    st.push(')');
    st.push('4');
    st.push('3');
    st.push('2');
    st.push('1');
    st.push('(');
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}

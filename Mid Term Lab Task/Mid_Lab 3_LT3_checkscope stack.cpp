#include<bits/stdc++.h>
using namespace std;

string readFile(string filename){
    ifstream fin(filename);
    string line,all;
    while(getline(fin,line)){
        all+=line+'\n';
    }
    return all;
}

void checkscope(string w){
    stack<char> st;
    for(int i=0;w[i]!='\0';i++){
        if(w[i]=='('){
            st.push('(');
            cout<<"(";
        }
        if(w[i]==')'){
            st.pop();
            cout<<")";
        }
    }
    cout<<endl;
    if(st.empty()){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
}

int main(){
    string s = readFile("Mid_Lab 3_LT1_Stack.cpp");
    checkscope(s);
    return 0;
}

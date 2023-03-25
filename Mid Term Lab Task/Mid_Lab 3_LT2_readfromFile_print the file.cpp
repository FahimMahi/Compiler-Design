#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    ifstream fin("Mid_Lab 3_LT1_Stack.cpp");
    string alls;
    while(getline(fin,name)){
        alls=alls+name+'\n';
    }
    cout<<alls;
    return 0;
}

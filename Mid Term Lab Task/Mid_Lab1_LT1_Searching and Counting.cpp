#include<bits/stdc++.h>
using namespace std;

int xD(char j[], char c){
    int k=0;
    for(int i =0;j[i]!='\0';i++){
        if(j[i]==c){
            k++;
        }
    }
    return k;
}

int main(){
    char s[]="I Love C++";
    cout<<xD(s,'+')<<endl;
    return 0;
}

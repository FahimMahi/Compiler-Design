#include<bits/stdc++.h>
using namespace std;

char* f(char a[]){
    int s1 = strlen(a);
    char *m = new char [2*s1+1];
    int k=0;
    int i=0;
    for(;i<2*s1+1;i++){
        if(i%2==0){
            m[i]=a[k];
            k++;
        }
        else{
            m[i]=' ';
        }
    }

    m[i]='\0';
    return m;
}

int main(){
    char y[]="I love Bangladesh";
    char *p= f(y);

    cout<<p<<endl;
    return 0;
}

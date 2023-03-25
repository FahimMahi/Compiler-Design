#include<bits/stdc++.h>
using namespace std;

char* f(char a[]){
    int s1 = strlen(a);
    char *m = new char [s1+1];
    int k=0;
    for(int i=0;a[i]!='\0';i++){
        if(i%2==0){
            m[k]=toupper(a[i]);
            k++;
        }
        else{
            m[k]=a[i];
            k++;
        }
    }
    m[k]='\0';
    return m;
}

int main(){
    char y[]="I love Bangladesh";
    char *p= f(y);
    cout<<p<<endl;
    return 0;
}

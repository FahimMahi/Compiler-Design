#include<bits/stdc++.h>
using namespace std;

void printList(int x[], int s){
    for(int i=0;i<s;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

 int sumList(int *x, int s){
     int sum=0;
     for(int i=0;i<s;i++){
            sum+=x[i];
     }
     return sum;
}

int *doubleList(int *x, int s){
    int *w= new int[s];
    for(int i=0;i<s;i++){
            w[i]=x[i]*2;
    }
    return w;
}

int main(){
    int a[4]={10,20,30,40};
    printList(a,4);

    int result = sumList(a,4);
    cout<<result<<endl;

    int *p = doubleList(a,4);
    printList(p,4);
    return 0;
}

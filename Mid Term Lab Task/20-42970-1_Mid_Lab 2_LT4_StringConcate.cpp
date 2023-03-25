#include<bits/stdc++.h>
using namespace std;

char* myStrcat(string a, string b){
    int s1 = a.length();
    int s2 = b.length();
    char *m = new char [s1+s2+1];
    int k=0;

    for(int i=0;a[i]!='\0';i++){
            m[k]=a[i];
            k++;
    }

    for(int i=0;b[i]!='\0';i++){
            m[k]=b[i];
            k++;
    }
    m[k]='\0';
    return m;
}

string readFile(string fname){
    ifstream in(fname);
    string s;
    string line;

    while(getline(in,s)){
        line = line + s+'\n';
    }
    return line;
}

int main(){
    string obj1 = readFile("xD1.txt");
    string obj2 = readFile("xD2.txt");

    char *p= myStrcat(obj1,obj2);
    cout<<p<<endl;
    return 0;
}

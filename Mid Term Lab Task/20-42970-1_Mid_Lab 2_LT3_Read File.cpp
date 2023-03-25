#include<bits/stdc++.h>
using namespace std;

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
    string alltext1 = readFile("xD1.txt");
    cout<<alltext1<<endl;

    string alltext2 = readFile("xD2.txt");
    cout<<alltext2<<endl;
}

#include<bits/stdc++.h>
using namespace std;



/// Solution ###



string readfile(string fread)
{
    ifstream in(fread);
    string s;
    string line="";



   while(getline(in,s))
    {
        line = line + s;
        line = line + '\n';
    }
    return line;
}


string removeComments(string s){

    string result;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='/' && s[i+1]=='/')
        {
            i++;
            while(s[i]!='\n')
            {
                i++;
            }
        }

        else if(s[i]=='/' && s[i+1]=='*')
        {
            i++;
            while(true)
            {
                if(s[i]=='*' && s[i+1]=='/')
                {
                    i++;
                    break;
                }
                i++;
            }
        }

        else
        {
            result=result+s[i];

        }
    }
   return result;


}

string removeBlankLine(string s)
{
    string result;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='\n' && s[i+1]=='\n')
        {
            i++;
            while(s[i]=='\n' && s[i+1]=='\n')
            {
                i++;
            }
        }
        if(s[i]==' ' && s[i+1]==' ')
        {
            i++;
            while(s[i]==' ' && s[i+1]==' ')
            {
                i++;
            }
        }
        else
        {
            result=result+s[i];
        }
    }
    return result;
}

string removeSpace(string s)
{
    string result;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='\n' && s[i+1]=='\n')
        {
            i++;
            while(s[i]=='\n' && s[i+1]=='\n')
            {
                i++;
            }
        }
        if(s[i]=='\n' && s[i+1]=='\n')
        {
            i++;
            while(s[i]=='\n' && s[i+1])
            {
                i++;
            }
        }
        else
        {
            result=result+s[i];
        }
    }
    return result;
}

int main()
{
    string s = readfile("in.cpp");
    cout<<s<<endl;


    string r = removeComments(s);
    cout<<r<<endl;


    string x = removeBlankLine(r);
    cout<<x<<endl;

    string z = removeSpace(x);
    cout<<z<<endl;

    return 0;
}

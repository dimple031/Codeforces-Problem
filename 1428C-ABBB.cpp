#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        vector<int> leftOver;
        for(int i=0;i<s.length();i++)
        {
            if(leftOver.size() != 0 && s[i] == 'B')
               leftOver.pop_back();   //remove the left char
            else
               leftOver.push_back(s[i]);   //add the current char
        }
        cout<<leftOver.size()<<endl;
    }
    return 0;
}

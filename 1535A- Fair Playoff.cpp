#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int skill[4];
        for (int i = 0; i < 4; ++i) {
            cin >> skill[i];
        }
    
    int a=max(skill[0],skill[1]);
    int b=max(skill[2],skill[3]);
    
    sort(skill, skill + 4);
    if(a>b) swap(a,b);
    if(a==skill[2] && b==skill[3]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
    }
    }
    return 0;
}

    #include <iostream>
    #include <bits/stdc++.h>
    #include <cmath>
     
    #define ll long long
    using namespace std;
     
     
    int main()
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
     //we need to check a^b > c^d
//so taking log both sides
//log(a^b) > log(c^d)
        if( b*log(a) > d*log(c)){
            cout << "YES";
        }else{
            cout << "NO";
        }
     
     
        return 0;
    }

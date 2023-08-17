#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,a,len,wid;
    cin>>n>>m>>a;
    /*method 1
    len=n/a;
    if(n/a != 0)  len++;
    wid=m/a;
    if(m/a != 0)  wid++;
    */
    len=ceil((double)n / a);
    wid=ceil((double)m / a);
    cout <<len*wid<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,a,b,count=0;
    cin>>n>>m;
    for(a=0;a<=max(n,m);a++){
        for(b=0;b<=max(n,m);b++){
            if(a*a+b == n && a+b*b == m)  count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

/*
This code iterates through possible values of a and b, calculates the values of the left-hand sides of the equations, and checks
if they are equal to n and m. If they are, it increments the count of valid pairs. Finally, it prints the count of valid pairs as the output.
Note that the upper bounds of the loops (max(n, m)) are used to ensure that you consider all possible combinations of a and b within
the given range.
Keep in mind that this solution might not be the most efficient one, especially for large inputs, but it should work fine for the given constraints.

method 2 for large inputs

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int count = 0;

    for (int a = 0; a * a <= n && a <= m; ++a) {
        int b = n - a * a;
        if (a + b * b == n && a * a + b == m) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

*/

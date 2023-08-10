    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a= a=a%100, b=b%100, c = c%100, d=d%100; // we did becoz long long will store only till 10^18 and in quest, each digit is up to 10^9,
      //thus total value will be 10^36 which can't be store in 1LL, so to solve this problem we already minimise the value by %100
        int ans = a*b*c*d;
        if(ans%100 <= 9) cout <<"0";   //we can't put endl becoz we have to print both output in the same line, eg: ans =4, output = 04;
        cout<<ans%100;
     
        return 0;
    }

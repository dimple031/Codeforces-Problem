    #include <iostream>
         
        using namespace std;
         
        int main()
        {
            long long t;
            cin>>t;
            while(t--)
            {
                long long l,r;
                cin>>l>>r;
                 long long sum=0;
              //this method doesn't work because of TLE
        // for(int i=l;i<=r;i++)
        // {
        //     sum += i;
        // }
                 if(l>r) swap(l,r); //we also have to check the condition if l>r 
                 sum = (l+r)*((r-l)+1)/2;
                cout<<sum<<endl;
            }
         
            return 0;
        }

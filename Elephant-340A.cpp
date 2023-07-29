        #include <iostream>
         
        using namespace std;
         
        int main()
        {
            int x;
            cin>>x;
            
            //method 1
            //int steps = x/5;
            // if(x<=5)
            // cout<<"1";
            // else if(x>5 && x%5==0)
            // cout<<steps;
            // else
            // cout<<steps+1;
            
            //method 2
            // cout<<(x+4)/5;
            
            //method 3
            int s=x/5;
            if(x%5==0)
            cout<<s;
            else
            cout<<s+1;
         
            return 0;
        }

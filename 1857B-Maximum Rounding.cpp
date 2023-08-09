    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;cin>>t;
        while(t--)
        {
            string s;cin>>s;
            //A character '0' is concatenated to the beginning of the string s. 
            s='0'+s;
            /* 
            An integer p is assigned the value of the size of the string s, 
            which represents the length of the string including the additional
            '0' character added earlier.
            */
            int pos=s.size();
            /* 
            This is a loop that iterates through the string s in reverse order,
            starting from the last character. Inside the loop, it checks if the 
            current character's ASCII value is greater than or equal
            to '5' (which corresponds to digit 5 in ASCII). 
            If this condition is met, it increments the character immediately
            to the left (by one) and updates the value of p to the 
            current index i. This step is part of a rounding operation 
            for the number represented by the string.
            */
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]>='5')s[i-1]++,pos=i;
            }
            /*
            Another loop is used here, which starts iterating from either
            index 1 or index 0 of the string s, depending on whether the
            initial character is '0'. It then prints characters from the string,
            either '0' or the original characters from the string s, depending
            on whether the current index i is greater than or equal
            to p (which was set in the previous loop). 
            This loop effectively prints the rounded numbers for each test case.
            */
            for(int i=(s[0]=='0');i<s.size();i++)
            {
                cout<<(i>=pos?'0':s[i]);
            }
            cout<<"\n";
        }
    }

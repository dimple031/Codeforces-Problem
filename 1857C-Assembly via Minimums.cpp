        /*
           n-1  n-2  n-3  ---------------- n-(n-1)
            a1   a2   a3 -------------------a(n-1)
        We can't determine the exact value of an , because it won't be written to 
        array b. Therefore, for an we can choose any number in the range [an−1;109].
        The complexity is O(n2logn).
        */
         
        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int t;
            cin>>t;
            while(t--)
            {
                int n;
                cin>>n;
                
        /*
        Here, m is calculated as the number of elements in the array 'b', 
        which is generated from 'a'. The formula n * (n - 1) / 2 represents 
        the total number of pairs that can be formed from 'n' elements, 
        each of which is counted only once (when i < j). 
        An array b of size m is declared to store the elements of 'b'.
        */
                int size=n*(n-1)/2,b[size];
                for(int i=0;i<size;i++)
                cin>>b[i];
                sort(b,b+size);
        /*
        Another loop is used to print the elements of array 'b' in a specific pattern.
        It starts at index 0 and increments by decreasing values of n in each iteration.
        This effectively selects elements from array 'b' in a way that preserves
        the order of minimum values that were taken when constructing
        array'b' from 'a'.
        */
                for(int i=0;i<size;i+=--n)
                cout<<b[i]<<' ';
        /*
        After printing the elements of array 'b' as explained above, 
        a constant value of 1000000000 is printed. This constant value seems to be 
        used as an indicator for the end of each test case's output.
        */
                cout<<"1000000000\n";
            }
        }

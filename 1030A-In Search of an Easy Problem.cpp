    #include <iostream>
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
        
        bool isHard = false; // Initialize a boolean variable to track if "1" is present
     
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            
            if (num == 1)
            {
                isHard = true; // Set isHard to true if a "1" is encountered
            }
        }
     
        if (isHard)
        {
            cout << "hard" << endl; // Print "hard" only if at least one "1" is present
        }
        else
        {
            cout << "easy" << endl; // Print "easy" if no "1" is present
        }
     
        return 0;
    }

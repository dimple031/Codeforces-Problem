    #include <iostream>
    using namespace std;
    //This function is responsible for processing one test case of the problem.
    void ans() {
      //nested loops are used to read the input for an 8x8 grid of characters
    	for (int r = 0; r < 8; r++) {
    		for (int c = 0; c < 8; c++) {
    			char x;
    			cin >> x;
          //checks if the character read from the input is not equal to a period ('.'). 
          //If it's not a period, the character is printed to the output using the cout object
    			if (x != '.') {cout << x;}
    		}
    	}	
    	cout << '\n';
    }
     //code then enters a loop that runs t times. For each test case, the ans function is called to process the 8x8 grid of characters
//and print the output
    int main() {
     
    	int t; cin >> t; for (int i = 1; i <= t; i++) 
    	{
    	    ans();
    	}
     
    }

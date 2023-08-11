    /*
    To determine whether a given number N is a float or an integer, 
    you can use the modf function from the <cmath> (or <math.h> in C) 
    library to check if the fractional part of the number is non-zero. 
    If it's non-zero, then N is a float; otherwise, it's an integer.
    */
    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main() {
        double N;
        cin >> N;
     
        double intPart;
        //Use the modf function to extract the fractional part of N and store 
        //the integer part in intPart.
        
        double fracPart = modf(N, &intPart);
        if (fracPart != 0) {
            cout << "float " << intPart << " " << fracPart << endl;
        } else {
            cout << "int " << intPart << endl;
        }
     
        return 0;
    }

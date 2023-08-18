#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while(true)    //if digits are same increment y by 1
    {
        y+=1;
        int a=y/1000;     //1st digit
        int b=y/100%10;  //2nd digit
        int c=y/10%10;   //3rd digit
        int d=y%10;      //4th digit
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout<<y;
        return 0;
        }
    }
    return 0;
}

#include <iostream>
/*A program that reads two integer values ​​as input
calculates the sum of their squares, and outputs them.*/ 
//learn target:example of cin
using namespace std;
int main(){
    int x,y,sumsquare;
    cout << "Enter two integer numbers: ";
    cin >> x>>y;
    sumsquare = x*x+y*y;
    cout<<"x = "<<x<<","<<"y = "<<y <<endl;
    cout<<"sum of squares is : "<<sumsquare;
    cin.ignore();
    cin.get(); 

}
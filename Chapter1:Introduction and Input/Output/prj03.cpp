#include <iostream>
//Examples of data types: In this example, we use data to print something.
int main(){
int x;
x=20;
//or
int y = 30;
double pi = 3.1415926535;
char A = 'C';
bool c = 10.248f;
std::cout<<x<< std::endl;
std::cout<<y<< std::endl;
std::cout<<pi<< std::endl;
std::cout<<A<< std::endl;
std::cout<<c<< std::endl;
// Printing the size of each data type
std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
std::cout << "Size of double: " << sizeof(double) << " bytes";

    



return 0;

}
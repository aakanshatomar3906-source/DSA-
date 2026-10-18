// 1 bit = binary digit
// 8 bit = 1 bytes
// 1024 bytes= 1 KB
// 1024 KB = 1 MB
// 1024 MB = 1 GB
// 1024 GB = 1 TB
// 1024 TB = 1 PB
// 1024 PB = 1 EB
// 1024 EB = 1 ZB
// 1024 ZB = 1 YB
// 1024 YB = 1 BB
// 1024 BB = 1 NB
// 1024 NB = 1 DB
// 1024 DB = 1 CB



// write first program in c++
// # include <iostream> // preprocessor directive;
// header file : iostream => input output stream

// int main() {
//     std::cout << "Hello World" << std::endl;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World"<<endl;
//     return 0;
// }

// variable : a name given to a memory location that stores data.
// data type : defines the type of data that can be stored in a variable.

// int : integer data type ( 4 bytes = 32 bits)
// name : variable name
// = : assignment operator
// 10 : value assigned to the variable

// char name[20] = "John"; // character array
// char name[20]='J','o','h','n'; // character array

// char ( 1 byte = 8 bits) : character data type
// 
// char name;
// char name = 'J'; // character variable
// char p='da' //not allowed ; only one character can be stored in a char variable

// float ( 4 bytes = 32 bits) : floating point data type
// double ( 8 bytes = 64 bits) : double precision floating point data type

// bool ( 1 byte = 8 bits) : boolean data type ( true or false)

#include <iostream>
using namespace std;
int main(){
    // variable declaration and initialization
    int a = 10; // integer variable
    char b = 'J'; // character variable
    float c = 10.5; // floating point variable
    double d = 20.5; // double precision floating point variable
    bool e = true; // boolean variable

    cout<<"Integer: "<<a<<endl;
    cout<<"Character: "<<b<<endl;
    cout<<"Float: "<<c<<endl;
    cout<<"Double: "<<d<<endl;
    cout<<"Boolean: "<<e<<endl;

    return 0;
}


// negative => 2's complement representation

//int 32 bit
//positive range : 0 to 2^31 - 1 = 0 to 2147483647
//negative range : -2^31 to -1 = -2147483648 to -1
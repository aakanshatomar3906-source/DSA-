// WHILE LOOP
// while(condition {break}) {
//     // code block to be executed
//     update condition
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     while (i <= 10) {
//         cout << i << endl; 
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     while (i <= n) {
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//         i++;
//     }
// }

// do while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     do{
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//         i++;  // update condition
//     }while(i<=n);  // break condition
// }


// BREAK STATEMENT , CONTINUE STATEMENT

// #include<iostream>
// using namespace std;
// int main(){

//     int i=1;
//     while(i<=10){
//         if(i==5){
//             break;  // break the loop when i is 5
//         }
//         cout<<i<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int i=1;
//     while(i<=10){
//         if(i==5){
//             i++;  // update condition before continue
//             continue;  // skip the rest of the loop when i is 5
//         }
//         cout<<i<<endl;
//         i++;
//     }
// }



// SWITCH CASE
// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"Enter a number (1-7): ";
//     cin>>day;
//     switch(day){
//         case 1:
//             cout<<"Monday"<<endl;
//             break;
//         case 2:
//             cout<<"Tuesday"<<endl;
//             break;
//         case 3:
//             cout<<"Wednesday"<<endl;
//             break;
//         case 4:
//             cout<<"Thursday"<<endl;
//             break;
//         case 5:
//             cout<<"Friday"<<endl;
//             break;
//         case 6:
//             cout<<"Saturday"<<endl;
//             break;
//         case 7:
//             cout<<"Sunday"<<endl;
//             break;
//         default:
//             cout<<"Invalid input"<<endl;
//     }
// }



// SCOPE OF A VARIABLE
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;  // global variable
//     {
//         int b=20;  // local variable
//         cout<<a<<endl;  // can access global variable
//         cout<<b<<endl;  // can access local variable
//     }
//     cout<<a<<endl;  // can access global variable
//     // cout<<b<<endl;  // cannot access local variable, will give error
// }



// {
//     int i=20;
//     {
//         int i=30;  // local variable
//         cout<<i<<endl;  // will print 30, as local variable has higher
//         int i=40;  // local variable  // not allowed to declare same variable name in same scope, will give error
//     }
//     int i=40;  // local variable  // not allowed to declare same variable name in same scope, will give error
//     cout<<i<<endl;  // will print 40, as local variable has higher
// }


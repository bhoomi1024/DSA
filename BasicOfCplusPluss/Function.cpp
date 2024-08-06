#include <iostream>
#include<string>
using namespace std;

/*
function are set of code which 
perform somthing for you.

fuction are used to increase readability

function are used to use some code multiple time

void - which does not return any thing

parameterised

non parameterised

*/

/*void printname( string name){
    cout << "hey" << name << endl;
}
int main(){
    string name;
    cin >> name ;
    printname(name);

    string name2;
    cin >> name2;
    printname(name2);
    return 0;
}
input -
bhoomi 
shruti
output-
heybhoomi
heyshruti

*/

//Take two number and print its sum

/*int sum(int num1 , int num2){
    int num3 = num1 + num2;
    return num3;
}
int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    int res = sum(num1 , num2);
    cout << res;
return 0;
}
input 2 3
output 5
*/

/*int maxx(int num1 , int num2){
    if(num1 >= num2){
        return num1;
    }
    return num2;
}
int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1 , num2);
    cout << maximum;
    return 0 ;
}
input - 2 3
output - 3
*/

//pass by value

/*When a function parameter is passed by
 value, a 
copy of the actual parameter's
 value is made in memory. This 
 means that any changes made to
  the parameter inside the function 
  do not affect the original value.*/
/*void dosomthing(int num){
    cout << num << endl;
    num +=5;
     cout << num << endl;
    num +=5;
     cout << num << endl;
    num +=5;
}
int main(){
    int num =10;
    dosomthing(num);
    cout << num << endl;
    return 0;
}
output
10
15
20
10
*/

//pass by reference
/*
When a function parameter is passed 
by reference, the function operates on
 the actual parameter used to call the function. 
 This means that changes made to the parameter
 inside the function affect the original value.
 void dosomthing(string &s){
    s[0] = 't';
    cout << s << endl;
 }
 int main(){
    string s = "raj";
   dosomthing(s);
        cout << s << endl;
        return 0;
    
 }
 output 
 taj
taj

 */

/*
Key Differences
Effect on Original Value:

Pass by Value: The original value is not modified.
Pass by Reference: The original value can be modified.
Memory Usage:

Pass by Value: Requires additional memory to store the copy of the value.
Pass by Reference: Uses the same memory location as the original variable.
Function Signature:

Pass by Value: void modifyValue(int x)
Pass by Reference: void modifyValue(int &x)

*/


//pass by refference
/*void dosomthing(int arr[] , int n){
    arr[0] += 100;
    cout << "value inside function :"<<arr[0]<<endl;
}
int main(){
    int n= 5;
    int arr[n];
    for(int i=0 ; i < n ; i++){
        cin >> arr[i];
    }
    dosomthing(arr , n);
    cout << "value inside int main: "<<arr[0]<< endl;
return 0;
}
value inside function :108
value inside int main: 108

*/



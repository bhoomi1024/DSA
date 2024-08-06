//If else statement

//#include <bits/stdc++.h>
//using namespace std;

//write a program that take an input of 
//age and print if you are adult or not >=18, 
//< 18 , no

/*int main(){
    int age;
    cin >> age;
    if(age >=18){
        cout << "you are an adult";
    }else{
        cout << "you are not an adult";
    }
    return 0;
}
input -22
output-you are an adult
*/

//A school has following grading syastem
//a. Below 25-F
//b. 25 to 44 -E
//c.45 to 49 -D
//d.50 to 59 -C
//e. 60 to 79 - B
//f.80 to 100 - A

/*int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }else if (marks <= 44){
        cout << "E";
    }else if (marks <= 49){
        cout << "D";
    }else if (marks <= 59){
        cout << "C";
    }else if (marks <= 79){
        cout << "B";
    }else if (marks <= 100){
        cout << "A";
    }
    return 0;
}
input - 45
output - D
*/

//Nested if else statement

/*Take the age from th user and
 then decide accordingly
 1.if age < 18 
 print - not eligible for job
 2.if age >=18 & age <= 54 
 print-eligible for job
 3.if age >=55 and age <=57
 print- eligible for job , but retirement soon
 4.if age > 57 
 print - retirement time
 */

/*#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age < 18){
        cout << "not eligible for job";
    }else if (age <= 57){
         cout << "eligible for job";
         if(age >=55){
            cout << " But , retirement is soon";
         }else{
             cout << "retirement time";
         }
    }
    return 0;
}
input -55
output-eligible for jobBut , retirement is soon
*/

//Switch statement
/*
Take the day no 
and print the corresponding day for
1 print Monday for 2 print tuesday and so on for 7 print 
sunday*/

/*#include <iostream>
using namespace std;

int main(){
    int day;
    cin >> day;
    switch(day){
        case 1 :cout << "Monday" ;
        break;
         case 2 :cout << "Tuesday" ;
        break;
         case 3 :cout << "wednesday" ;
        break;
         case 4 :cout << "thusday" ;
        break;
         case 5 :cout << "friday" ;
        break;
         case 6 :cout << "saturday" ;
        break;
         case 7 :cout << "sunday" ;
        break;
        default:
        cout << "Invalid";
    }
    cout << "Check";
    return 0 ;
}
input-2
output-TuesdayCheck
*/


//While loop
/*#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while (i <=5)
    {
        cout << "bhoomi" << i << endl;
        i= i+1;
    }
    return 0;
    
}
output -bhoomi1
bhoomi2
bhoomi3
bhoomi4
bhoomi5
*/

//Do while
/*#include <iostream>
using namespace std;

int main(){
    int i =2;
    do{
        cout << "bhoomi" << i << endl;
        i= i+1;
    }while(i <=1);
    cout << i << endl;
    return 0 ;
}
output-
bhoomi2
3
*/

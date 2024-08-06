//pattern 1
/*#include <iostream>
using namespace std;

void forest(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
        forest(n);
    }
    return 0;
}
input 2
7
output - Enter the number of test cases: Enter the size of the square for test case 1: * * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
Enter the size of the square for test case 2: * * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 

*/

//patter2

/*void nForest(int n) {
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
        nForest(n);
    }
    return 0;
}
input - 2
3
5
output-
Enter the number of test cases: Enter the size of the square for test case 1: * 
* * 
* * * 
Enter the size of the square for test case 2: * 
* * 
* * * 
* * * * 
* * * * * 

*/

//patern 3

/*void nTriangle(int n) {
	for(int i=1 ; i<=n; i++){
		for(int j=1 ; j<=i ; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         nTriangle(n);
    }
    return 0;
}
input-2 3 5
output-Enter the number of test cases: Enter the size of the square for test case 1: 1 
1 2 
1 2 3 
Enter the size of the square for test case 2: 1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

//patter4

/*void triangle(int n) {
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout << i << " ";
		}
		cout << endl;
	}
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         triangle(n);
    }
    return 0;
}
input- 2 3 5
output- 
Enter the number of test cases: Enter the size of the square for test case 1: 1 
2 2 
3 3 3 
Enter the size of the square for test case 2: 1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

/*void seeding(int n) {
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n-i+1 ; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         seeding(n);
    }
    return 0;
}
input- 2 3 5
output 
Enter the number of test cases: Enter the size of the square for test case 1: * * * 
* * 
* 
Enter the size of the square for test case 2: * * * * * 
* * * * 
* * * 
* * 
* 
*/

//pattern 6 
/*void nNumberTriangle(int n) {
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i+1 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         nNumberTriangle(n);
    }
    return 0;
}input - 2 3 5
output 
Enter the number of test cases: Enter the size of the square for test case 1: 1 2 3 
1 2 
1 
Enter the size of the square for test case 2: 1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/

//pattern 7
/*void nStarTriangle(int n) {
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0 ; j<n-i-1 ; j++){
            cout <<  " ";
        }
//stars
for(int j=0 ; j<2*i+1 ; j++){
    cout << "*";
}
//space
 for(int j=0 ; j<n-i-1 ; j++){
            cout <<  " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         nStarTriangle(n);
    }
    return 0;
}
input 1 5
output 
Enter the number of test cases: Enter the size of the square for test case 1:     *    
   ***   
  *****  
 ******* 
*********

*/

//patter 8
/*void nStarTriangle(int n) {
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0 ;j<i ; j++){
            cout << " ";
        }
        //star
        for(int j=0 ; j < 2 * n - (2 * i + 1); j++){
            cout << "*";
        }
     //space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         nStarTriangle(n);
    }
    return 0;
}
input - 1 5
output-
Enter the number of test cases: Enter the size of the square for test case 1: *********
 ******* 
  *****  
   ***   
    *    

*/
/*void nStarDiamond(int n) {
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0 ; j<n-i-1 ; j++){
            cout <<  " ";
        }
//stars
for(int j=0 ; j<2*i+1 ; j++){
    cout << "*";
}
//space
 for(int j=0 ; j<n-i-1 ; j++){
            cout <<  " ";
        }
        cout << endl;
    }
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0 ;j<i ; j++){
            cout << " ";
        }
        //star
        for(int j=0 ; j < 2 * n - (2 * i + 1); j++){
            cout << "*";
        }
     //space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
         nStarDiamond(n);
    }
    return 0;
}
input - 1 5
output
Enter the number of test cases: Enter the size of the square for test case 1:     *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    

*/

//pattern 10
/*void nStarTriangle(int n) {
  for (int i = 1; i < 2 * n; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i;
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
      nStarTriangle(n);
    }
    return 0;
}
input - 1 5
output 
Enter the number of test cases: Enter the size of the square for test case 1: *
**
***
****
*****
****
***
**
*

*/
//patern 11

/*void nBinaryTriangle(int n) {
    int start;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        
        for(int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start; // Alternate between 1 and 0
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the square for test case " << i + 1 << ": ";
        cin >> n;
      nBinaryTriangle(n);
    }
    return 0;
}
input - 1 5
output 
Enter the number of test cases: Enter the size of the square for test case 1: 1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/

//pattern 12

/*void numberCrown(int n) {
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        // Print the left increasing sequence
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // Print the spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        // Print the right decreasing sequence
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
        space -= 2; // Decrease the space by 2 for the next row
    }
}
int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    numberCrown(n);
    return 0;
}
input 5
output 
Enter the value of N: 1         1 
1 2       2 1 
1 2 3     3 2 1 
1 2 3 4   4 3 2 1 
1 2 3 4 5 5 4 3 2 1 

*/
//pattern 13
/*void nNumberTriangle(int n) {
    int num =1;
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=i; j++){
            cout << num << " ";
            num = num+1;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    nNumberTriangle(n);
    return 0;
}
input -5
output- Enter the value of N: 1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

//patten 14
/*void nLetterTriangle(int n) {
    for(int i=0 ; i<n ; i++){
        for(char ch='A'; ch<='A' + i ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "";
    cin >> n;
    nLetterTriangle(n);
    return 0;
}
input - 5
output -
A 
A B 
A B C 
A B C D 
A B C D E 

*/

//pattern 15
/*void nLetterTriangle(int n) {
    for(int i=0 ; i<n ; i++){
        for(char ch='A' ;ch <='A'+ ( n - i - 1) ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "";
    cin >> n;
    nLetterTriangle(n);
    return 0;
}
input - 5
output - 
A B C D E 
A B C D 
A B C 
A B 
A 

*/
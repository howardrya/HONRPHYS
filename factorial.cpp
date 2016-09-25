#include<iostream>
using namespace std;

int main() {
  int i, n, factorial = 1; //defines variables

  cout<<"Enter a positive integer to find its factorial: " ; //displays prompt to enter number
  cin>>n; //allows user to enter a number and defines it as n

  for (i = 1; i <= n; ++i) {
    factorial *= i;   // factorial = factorial * i;
  }
  /*loop assigns i to 1 and adds one to i incrementally while i is less than n.
  The factorial function multiples itself times i than sets itself equal to the product and then repeats
   */
  cout<< "Factorial of "<<n<<" = "<<factorial ; //displays the factorial of n 
  return 0;

}

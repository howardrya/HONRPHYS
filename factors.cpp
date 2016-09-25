#include <iostream>
using namespace std;
int main()
{
  int n,i; //defines variables
  cout << "Enter a number to find its factors: "; //displays a prompt to enter a number
  cin >> n; //allows user to enter a number and defines it as n
  cout << "Factors of " << n << " are: " << endl; //shows a message listing the factors 
  for(i=1;i<=n;++i)
    {
      if(n%i==0)
	cout << i << endl;
    }
  /* loop makes i increase incrementally and divides n by i until i reaches n. 
The % opperator shows the remainder of the division, if the remainder is zero
which makes it a factor of n it echos the number 
  */

  return 0;
}

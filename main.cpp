#include <iostream>
using namespace std;

int main() {

  for (int n=0; n<10; n++) {
    cout << "n is " << n << ": ";
    for (int m=0; m<=n; m++) {
      // notice that this time we don't need to write 'm=0' explicity. this is built into the inner for loop statement
      cout << m;
    }
    cout << endl;
  }


 }

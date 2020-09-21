#include <iostream>
using namespace std;

int main() {
  long n;
  long fact;
  fact = 1;

  cout << "Introduceti n: ";
  cin >> n;

  if(n >= 0){
    while(n > 1){
      fact = fact * n;
      n = n - 1; //n--;
      }
    cout << "n! = " << fact << endl;
   }
    else 
      cout << "n trebuie sa fie >= 0" << endl;
  
  return 0;
}
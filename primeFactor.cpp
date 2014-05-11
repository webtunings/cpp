#include <iostream>
using namespace std;

void primeFactors(int number);

int main() {
 int number = 10577490;
 primeFactors(number);
 return 0;
}

void primeFactors(int number) {
 for(int i=2; i <= number/i; i++){
 cout<<"i= "<< i <<" number= " << number <<endl;
 
  while(number%i == 0) {
  number = number/i;
  cout << "Factor: " << i << endl;
  }
 }

 if(number > 1) {
 cout << "Factor: " << number << endl;
 }

}

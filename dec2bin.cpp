#include <iostream>
using namespace std;

int dec2bin(int);

int main(){
 int bin = dec2bin(229);
 cout<< "binary= " << bin <<endl;
 return 0;
}

int dec2bin(int number) {
 int bin =0;
 int i=1;
 
while(number >0 ){
  bin += (number%2)*i;
  number = number/2;
  i*=10;
 }
return bin;
}


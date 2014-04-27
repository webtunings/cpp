#include <iostream>
using namespace std;

float add(float, float); //prototype

int main() {
 float a = 1.1;
 float b = 2.2;
 cout<< add(a,b)<<endl; 

 return 0;
}

float add(float a, float b) {
 return a+b;
}


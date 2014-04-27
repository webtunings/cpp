#include <iostream>
using namespace std;
double sqrt(double); //prototype

int main() {
 double num = 123567.23111;
 double result = sqrt(num);
 cout<<"final result= " <<result<<endl;

 return 0;
}

double sqrt(double number) {
 double error = 0.00001;
 double s = number;

 while((s - number/s) > error) {
 s = (s+ number/s)/2;
 cout<<"Intermediate result= " << s<<endl;
 }
 return s;
}

#include <iostream>
#include <random>
using namespace std;

int couponCollector(int number);

int main(){
cout <<  "result= " << couponCollector(365) <<endl;
}

int couponCollector(int number) {
 
 //dynamic memory allocation
 bool *collected = new bool[number];

 //initialize each element to false
 for(int i=0; i < number; i++){
  collected[i] = false;
 }

 int iteration = 0, unique = 0;

 random_device rd;
 mt19937 engine(rd());
 uniform_int_distribution<int> distribution(1,365);

 while(unique < number) {
  int random =  distribution(engine);
  if(!collected[random]){
   unique++;
   collected[random] = true;
  }
  iteration++;
 } 

 delete[] collected;
 return iteration;
}

#include<iostream> 
using namespace std;
int* sum(int* , int*);
int main()
{ 
 int a , b;
 a= 10;
 b = 30;
 cout<<*(sum(&a , &b))<<endl;

 return 0;
} 
int* sum(int* x , int* y){
  int z = 100;
  int *ptr;
  ptr = &z;
  return ptr;
}

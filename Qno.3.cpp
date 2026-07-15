#include<iostream>
#include <cmath>
using namespace std;
int main(){
	float x;
	float y;
	cout<<"Enter the value of x: ";
	cin>>x;
	if(x>=0){
		y = (x * x + sqrt(x));
	}else if(x<0 && x>-10){
		y = 1 - exp(x);
	}else{
		y = abs(x + 5);
	}
	cout<<"The value of y is "<<y;
	
	return 0;
}
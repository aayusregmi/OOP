#include<iostream>
using namespace std;
int main(){
	float tempC;
	cout<<"Enter the Temperature in degree Celsius : " ;
	cin>>tempC;
	cout<<"The temperature in Fehrenheit is "<<( 1.8 * tempC ) + 32;
	
	return 0;
}
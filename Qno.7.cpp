#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<setw(50)<<"Aayus Regmi (Section A)"<<endl;
	int num , div , digit[20] , i , binary = 0 , num2;
	cout<<"Enter the number: ";
	cin>>num;
	num2 = num;
    i = 0;
    while(num != 0){
    	div = num / 2;
    	digit[i] = num % 2;
    	num = div;
    	i++;
	}
	i--;
	while(i >= 0){
		binary = binary * 10 + digit[i];
		i--;
	}
	cout<<"The binary of number "<<num2 <<": "<< binary<<endl;
	return 0;
}
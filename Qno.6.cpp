#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<setw(50)<<"Aayus Regmi (Section A)"<<endl;
	int year , month , day , num;
	cout<<"Enter the number: ";
	cin>>num;
	year = num / 365;
	month = (num % 365 ) / 30;
	day = (num % 365 ) % 30;
	cout<<"Year:"<<year<<endl;
	cout<<"Month:"<<month<<endl;
	cout<<"Day:"<<day<<endl;
	
	return 0;
}
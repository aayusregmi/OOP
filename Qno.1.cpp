#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	cout<<setw(50)<<"Aayus Regmi (Section A)"<<endl;
 cout<<left<<setw(6)<<"S.No"<<setw(15)<<"City"<<setw(15)<<"District"<<setw(15)<<"Province"<<right<<setw(20)<<"Population"<<endl;
  cout<<left<<setw(6)<<" 1"<<setw(15)<<"Kathmandu"<<setw(15)<<"Kathmandu"<<setw(15)<<"Bagmati"<<right<<setw(20)<<"50000"<<endl;
   cout<<left<<setw(6)<<" 2"<<setw(15)<<"Pokhara"<<setw(15)<<"Kaski"<<setw(15)<<"Gandaki"<<right<<setw(20)<<"50000"<<endl;
   cout<<left<<setw(6)<<" 3"<<setw(15)<<"Butwal"<<setw(15)<<"Rupendehi"<<setw(15)<<"Lumbini"<<right<<setw(20)<<"100000"<<endl;
   cout<<left<<setw(6)<<" 4"<<setw(15)<<"Dharan"<<setw(15)<<"Sunsari"<<setw(15)<<"Madhesh"<<right<<setw(20)<<"80000"<<endl;
   
	
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:  
    string name;
    int age;
    Student(string name , int age){
      this->name = name;
      this->age = age;
    }
   
};

int main(){
    Student student1("Aayushma" , 18);     
    Student student2("Aayus" , 20);
    cout<<student1.name<<endl;     
    cout<<student1.age<<endl;
    cout<<student2.name<<endl;
    cout<<student2.age<<endl;

    return 0;
}
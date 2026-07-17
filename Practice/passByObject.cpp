#include<iostream>
using namespace std;
class numberXchng{
    int x , y;
    public:
    numberXchng(){}
    numberXchng(int x , int y){  //paramterized constructor 
        this->x = x;
        this->y = y;
    }

    void xchng2(numberXchng copy){
        copy.x = 90;
        copy.y = 100;
    }

    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

};


int main(){
    numberXchng num(100 , 200) , xchng;
    xchng.xchng2(num);
    xchng.display();
    
}
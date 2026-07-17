#include<iostream>
using namespace std;
class Point{
int x,y;
public:
Point(){ }
Point(int a, int b){x=a; y=b;}
 void update(Point p){
    p.x=20; p.y=30;
}
 void display(){
 cout<<"x="<<x<<endl;
 cout<<"y="<<y<<endl;
 }
};
int main(){
Point p1(2,5),p2;
p2.update(p1);
p1.display();
return 0;
}

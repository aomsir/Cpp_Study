#include <iostream>
using namespace std;
class Shape{
private:
    float x,y;
public:
    Shape(int px,int py):x(px),y(py){
        cout<<"Shape constructor called"<<endl;
    }
    float Area(){
        return 0;
    }
};

class Circle:public Shape{
private:
    int r;
public:
    Circle(int px,int py,int pr):Shape(px,py),r(pr){
        cout<<"Circle constructor called"<<endl;
    }
    float Area(){
        return 3.14*r*r;
    }
};

int main(){
    Circle cr(30,40,4);
    Shape *p = &cr;
    cout<<cr.Area()<<endl;
    cout<<p->Area()<<endl;
}
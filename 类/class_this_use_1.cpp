#include <iostream>
#define PI 3.14
using namespace std;
class circle{
private:
    int r;
public:
    circle(int pr){
        r = pr;
    }

    double getArea() {
        return PI * r * r;
    }
};

int main(){
    circle cir(5);
    cout<<cir.getArea()<<endl;
}
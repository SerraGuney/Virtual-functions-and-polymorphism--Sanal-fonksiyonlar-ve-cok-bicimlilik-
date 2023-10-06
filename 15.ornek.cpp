#include <iostream>
using namespace std;
class square{
    public:
    int a;
    square(){
    }
    virtual void area(){
        cout<<" area of square:"<<a*a;
    }
};
class rectangle:public square{
    public:
    int c,b;
    rectangle(int e,int y){
        c=e;
        b=y;
    }
    void area(){
        cout<<"area of the rectangle:"<<c*b<<endl;
    }
};
class circle:public square{
    public:
    double p;
    int r;
    circle(double pi,int yr){
        p=pi;
        r=yr;
    }
    void area(){
        cout<<"area of the circle:"<<p*r*r;
    }
};
int main(){
	int d1,d2;
	cout<<"enter the short side of the rectangle:";
	cin>>d1;
	cout<<"enter the long side of the rectangle:";
	cin>>d2;
    rectangle s(d1,d2);
    square*ptr;
    ptr=&s;
    ptr->area();
    int radius;
    cout<<"enter the radius for the area of the circle:";
    cin>>radius;
    circle ci(3.14,radius);
    ptr=&ci;
    ptr->area();
    return 0;
}


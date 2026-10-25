#include<iostream>
using namespace std;
class Shape{
    public:
    virtual float area()=0;
};
class Circle:public Shape{
    private:
    float radius;
    public:
    Circle (float r){
        radius=r;

    }
    float area(){
        return 3.14*radius*radius;
    }
};
class Rectangle:public Shape{
    private:
    float length,breadth;
    public:
    Rectangle(float l,float b){
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth;
    }
};
class Triangle:public Shape{
    private:
    float base,height;
    public:
    Triangle(float tb,float th){
        base=tb;
        height=th;
    }
    float area(){
        return 0.5*base*height;
    }
};
int main(){
    float r,l,b,th,tb;
    cout<<"Enter the circle radius:";
    cin>>r;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Enter the base and height of the triangle:";
    cin>>tb>>th;
    Circle c(r);
    Rectangle rec(l,b);
    Triangle t(tb,th);
    Shape*ptr;
    ptr=&c;
    cout<<"Circle Area:"<<ptr->area()<<endl;
    ptr = &rec;
    cout<<"Rectangle Area:"<<ptr->area()<<endl;
    ptr=&t;
    cout<<"Triangle Area:"<<ptr->area()<<endl;
    return 0;
}
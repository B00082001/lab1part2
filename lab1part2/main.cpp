#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
 // pure virtual function providing interface framework.
 virtual int getArea() = 0;
/* void setWidth(int w)
 {
 width = w;
 }*/
  void setRaduis(int r)
 {
 Raduis =r ;
 }
 /*void setHeight(int h)
 {
 height = h;
 }*/
protected:
 int Raduis;
 int height;
};
class Triangle: public Shape
{
public:
 int getArea()
 {
 return (width * height);
 }
};
int main(void)
{
 Triangle Tri;
 Tri.setWidth(2);
 Tri.setHeight(7);
 // Print the area of the object.
 cout << "Total Triangle area: " << Tri.getArea() << endl;
 return 0;
}

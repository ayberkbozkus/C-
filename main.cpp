#include <iostream>

using namespace std;

class Rectangle{

private:

  int length;
  int breadth;

public:

  Rectangle()
  {
    length=0;
    breadth=0;
  }
  Rectangle(int l, int b)
  {
    length=l;
    breadth=b;
  }
  int area()
  {
    return length*breadth;
  }
  int perimeter()
  {
    return 2*(length*breadth);
  }

  void SetLength(int l);
  void SetBreadth(int breadth);
  int GetLength();
  int GetBreadth();

  ~Rectangle(){
    cout<<"Destructor";
  }
};

void Rectangle::SetLength(int l)
  {
    this->length=l;
  }
void Rectangle::SetBreadth(int breadth)
  {
    this->breadth=breadth;
  }
int Rectangle::GetLength()
  {
    return this->length;
  }
int Rectangle::GetBreadth()
  {
    return this->breadth;
  }

int main()
{
  Rectangle r(10,5);
  cout<<"Area "<<r.area()<<endl;
  cout<<"Perimeter "<<r.perimeter()<<endl;

  return 0;
}
#include <iostream>

using namespace std;
/*
struct Rectangle{
  int length;
  int breadth;
};*/

class Rectangle{
  private:
    int length;
    int breadth;
  public:
  Rectangle(int l, int b){
    length = l;
    breadth = b;
  }
  int area(){
    return length * breadth;
  }
  void changeLength(int l){
    length = l;
  }

};

int main()
{
  //int n;
  //cout<<"Enter Size";
  //cin>>n;
  //int A[n];
  //int n;
  //int A[10]={2,4,6,8,10,12,14};
  //A[0]=12;
  //A[1]=15;
  //A[2]=25;

  //cout<<sizeof(A)<<endl;
  //cout<<A[1]<<endl;
  //printf("%d\n",A[9]);

  //for(int i=0;i<10;i++){
  //  cout<<A[i]<<endl;
  //}

  //for(int x:A){
  //  cout<<x<<endl;
  //}
 /*
  int *p,*a;

  p = (int *)malloc(5*sizeof(int));
  a =new int[5];
  
  delete []p;

  int * p1;
  char *p2;
  float *p3;
  double *p4;

  cout<<sizeof(p1)<<endl;
  cout<<sizeof(p2)<<endl;
  cout<<sizeof(p3)<<endl;
  cout<<sizeof(p4)<<endl;
  cout<<sizeof(p)<<endl;

  int k=5;
  int * k1 = &k;
  cout<< k1 <<endl << *k1 << endl;


  Rectangle r = {10,5};

  cout<<r.length<<endl;
  cout<<r.breadth<<endl;

  Rectangle *p = &r;

  p=new Rectangle;

  p->length = 15;
  p->breadth = 17;


  cout<<p->length<<endl;
  cout<<p->breadth<<endl;
  */

  Rectangle r(10,5);
  int a = r.area();
  r.changeLength(20);
  cout << a <<endl;

  return 0;
}
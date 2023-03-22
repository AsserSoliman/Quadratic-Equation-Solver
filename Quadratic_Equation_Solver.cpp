#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{  
  cout<<"\t\t\t***Soving Quadratic Equation***\n\n";
  
  float a,b,c;
  cout<<"Enter Coefficient of A: ";
  cin>>a;
  cout<<"Enter Coefficient of B: ";
  cin>>b;
  cout<<"Enter Coefficient of C: ";
  cin>>c;

  cout<<"******************************\n";

  float p1,p2,p3; //Parts of Equation

  p1 = -b;
  p2 = pow(b,2)-4*a*c;
  p3 = 2*a;

  if(p2<0)
  {  
    cout<<"The Answers are Imaginary Numbers\n";
    cout<<"First Answer: "<<(p1/p3)<<"+"<<sqrt(abs(p2))/p3<<"i"<<endl;
    cout<<"Second Answer: "<<(p1/p3)<<"-"<<sqrt(abs(p2))/p3<<"i"<<endl;   
  }
  else
  {  
    cout<<"The Answers are Real Numbers\n";
    cout<<"First Answer: "<<(p1+sqrt(p2))/p3<<endl;
    cout<<"Second Answer: "<<(p1-sqrt(p2))/p3<<endl;
  }
}

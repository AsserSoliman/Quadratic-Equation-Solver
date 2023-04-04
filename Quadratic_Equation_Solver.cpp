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
  
  if (a == 0)
  {
  	cout<<"This is not a Quadratic Equation.";
  }
  else
  {
  	if(p2 < 0)
	{
		cout<<"The Eqution doesn't have any solution that belongs to Real Numbers.";
	}
	else if(p2 == 0)
	{
		 cout<<"The Equation has only one solution :"<<p1/p3<<endl;
	}
	else
	{
		cout<<"The Equation has two solutions"<<endl;
		cout<<"First: "<<(p1+sqrt(p2)/p3)<<endl;
		cout<<"Second: "<<(p1-sqrt(p2)/p3)<<endl;
	}
  }
  
}

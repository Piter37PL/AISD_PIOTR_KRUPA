#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	return x*x + 2*x - 2;
}



int main()
{
	double a = 1;
	double b = 0;
	
	const double Ex = 0.00001;
	const double E0 = 0.00001;	
	
	double x0 = 0;
	double f0 = 0;
	double fa = 0;

	if(f(a)*f(b) > 0) cout<<"Funkcja nie spełnia założeń"<<endl;
	else
	{
	while(abs(a-b)>Ex)
		{
			x0 = (a+b)/2;
			f0 = f(x0);
			fa = f(a);
			if(abs(f0) < E0)
				{
					cout<<"Pierwiastek: "<<x0<<endl;
					break;
				}
			else
			{
				if(f(a)*f(b)<0) b = x0;
				else
				{
					a = x0;
					fa = f0;
				}
			}
		}
		if(abs(a-b)<Ex) cout<<"Pierwiastek: "<<x0<<endl;			
		}
	return 0;
}


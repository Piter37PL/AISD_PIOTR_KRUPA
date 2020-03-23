#include <iostream>

using namespace std;

double oblicz(double a[], int n, double x)
{
	double wynik = a[0];
	for(int i=1; i<=n; i++) wynik = wynik*x + a[i];
	return wynik;
}


int main()
{
	int n;
	double x;
	double *a;

	cout<<"Podaj stopień wielomianu"<<endl;
	cin>>n;

	a = new double[n+1];

	for(int i=0; i<=n; i++)
	{
		cout<<"Podaj współczynnik stojący przy potędze "<<n-i<<": ";
		cin>>a[i];

	}

	cout<<"Podaj argument: "<<endl;
	cin>>x;

	cout<<"W( "<<x<<" ) = "<<oblicz(a,n,x)<<endl;
	
	delete [] a;	
		
	return 0;
}


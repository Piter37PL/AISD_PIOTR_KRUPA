/* Algorytm szybkiego potęgowania */
#include <iostream>

/*Rekurencyjna wersja*/
int potegowanie(int x, int n)
{
	if(n==0) return 1;
	else if(n%2==1) return x*potegowanie(x,n-1); //potegowanie(x*x,(n-1)/2)
	else return potegowanie(x*x,n/2);  
}

/*Iteracyjna wersja*/
double pot_iter(double x, unsigned int n)
{
	double wynik = 1.0;
	while(n>0)
		{
		if(n%2==1)
			{
			wynik = x*wynik;
			}
		x = x*x;
		n = n >> 1;
		}
	return wynik;

}

/*
	x^101001  -> x^41  //Zmiana systemu na dwójkowy
	x^100000 * x^001000 * x^000001 = x^32 * x^8 * x^1

	double pow(x,n){
	double wynik = 1.0
	while (n > 0)
		{
		if(n%2==1)
			{
			wynik = x * wynik;
			}
		x = x*x;
		n = n >> 1;
		}
	return wynik;

*/

int main()
{
	std::cout<<potegowanie(2,2)<<std::endl;
	std::cout<<potegowanie(5,10)<<std::endl;
	std::cout<<pot_iter(5.0,10)<<std::endl;
	return 0;
}

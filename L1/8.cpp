#include <iostream>

void sito_eratostenesa(unsigned int n, bool *prime)
{
	for(int i=2; i*1<=n; i++)
	{
		if(!prime[i])
		{
			for(int j = i*i; j<=n; j+= i) prime[j] = 1;
		}
	}

	std::cout<<"Wszystkie liczby pierwsze mniejsze od n = "<<n<<std::endl;
	for(int i=2; i<=n; i++)
		if(!prime[i]) std::cout<<i<<" ";

	std::cout<<std::endl;	

}


int main()
{
	int n = 100; 
	bool *prime; 

	prime = new bool [n+1];  	//Utworzenie tablicy "dynamicznej"

	for(int i=2; i<=n; i++) prime[i] = 0;  //Przygotowanie tablicy
	
	sito_eratostenesa(n,prime);

	delete [] prime;	//Usunięcie tablicy po zakończeniu pracy

	return 0;
}

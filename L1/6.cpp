#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void otworz_i_zapisz_do_programu(vector<int> &V, string tytul)
{
	string roz = ".txt";
	int znak = 0;

	ifstream plik(tytul + roz);
	while(plik >> znak)
		V.push_back(znak);

	plik.close();
}

void oblicz_i_zapisz_do_pliku(vector<int> A, vector<int>B, vector<int>C)
{
	for(size_t i=0; i<A.size(); i++)
		for(size_t j=0; j<B.size(); j++)
			C[i+j] += A[i]*B[j];

	std::fstream plik_wynik;
	plik_wynik.open(("c.txt"),std::ios::out);
	
	for(size_t i=0; i<C.size(); i++)
		plik_wynik << C[i] << " ";
	
	plik_wynik.close();
}

int main()
{
	vector<int> A;
	vector<int> B;
	vector<int> C;

	otworz_i_zapisz_do_programu(A,"a");
	otworz_i_zapisz_do_programu(B,"b");

	for(size_t i=0; i<(A.size()+B.size())-1; i++)
		C.push_back(0);

	oblicz_i_zapisz_do_pliku(A,B,C);

	return 0;
}
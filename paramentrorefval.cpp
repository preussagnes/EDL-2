#include <iostream>
using namespace std;


class Pessoa
	{
	public:
	
	int idade;
	string nome;
	
	
	void Inicialisador(string n, int nu)
		{
		nome = n;
		idade = nu;	
		}
	
	
	
	};

	
void AlteraC(Pessoa A)
	{
	A.idade = 360;
	A.nome = "JOJO";
	}
	
void AlteraC(Pessoa* A)
	{
	A->idade = 360;
	A->nome = "JOJO";
	}

	
int main()
	{
	Pessoa P; 
	
	P.Inicialisador("Jhonatan", 100);  
	cout << P.idade<<" "<< P.nome<<"\n";
	
	AlteraC(P);
	cout << P.idade<<" "<< P.nome<<"\n";
	
	AlteraC(&P);
	cout << P.idade<<" "<< P.nome<<"\n";
	
	return(0);
	}
	
	


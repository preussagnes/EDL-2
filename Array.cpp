#include <iostream>
using namespace std;


int main()
	{
	int N;
	
	cin >> N;
	int Array[N];
	
	
	//Impossivel fazer Array.Length, Logo a variavel N deve ser guardad a fim q se percorar o array.
	cout << "O array tem tamnho" << N <<"\n";
	
	//Ou se dividir o tamanho todo do array pelo tamanho do seu tipo.
	cout << "O array tem tamnho" << sizeof(Array)/sizeof(int) <<"\n";
	
	
	return(0);
	}
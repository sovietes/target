#include <iostream>

int main()
{
	int Indice{ 13 };
	int Soma{ 0 };
	int K{ 0 };

	while (K < Indice)
	{
		K++;
		Soma += K;
	}

	std::cout << Soma << std::endl;


	system("PAUSE");
	return 0;
}
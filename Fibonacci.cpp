#include <iostream>
#include <locale.h>


bool IsFibonacci(int);

int main()
{
	setlocale(LC_ALL, "portuguese");

	int NumeroFibonacci;
	std::cout << "====== VERIFICADOR FIBONACCI ======\n";
	std::cout << "Insira o número que deseja verificar: ";
	std::cin >> NumeroFibonacci;

	if (IsFibonacci(NumeroFibonacci))
	{
		printf("O número %i pertence à sequência de Fibonacci", NumeroFibonacci);
	}
	else
	{
		printf("O número %i não pertence à sequência de Fibonacci", NumeroFibonacci);
	}

	system("PAUSE");
	return 0;
}

bool IsFibonacci(int a)
{
	int Resultado{ 0 };
	int Base{ 1 };
	int Suporte{ 0 };
	while (Resultado < a)
	{
		Resultado = Base + Suporte;
		Base = Suporte;
		Suporte = Resultado;
	}



	return Resultado == a ? true : false;
}
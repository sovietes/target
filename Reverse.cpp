#include <iostream>

int main()
{
	std::string Texto{ "I need Coffee!" };
	
	for (int i = Texto.length(); i > 0; i--)
	{
		std::cout << Texto[i-1];
	}

	system("PAUSE");
	return 0;
}
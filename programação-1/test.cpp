#include <iostream>

int main
()
{
	std::cout << "Quantos sugois para Fabill?\n> ";

	std::string how_many_hellos_answer = "";

	std::cin >> how_many_hellos_answer;

	int how_many_hellos = std::stoi(how_many_hellos_answer);

	for
	( int i=0; i < how_many_hellos; i++ )
	{
		std::cout << "Sugoi fabill-kun\n";
	}

	return 0;
}

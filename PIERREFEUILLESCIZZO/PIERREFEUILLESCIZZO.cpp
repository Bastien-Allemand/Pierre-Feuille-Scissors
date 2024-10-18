#include <iostream>
int main()
{
	const char* winC = "Ciseaux bat Feuille";
	const char* winF = "Feuille bat Pierre";
	const char* winP = "Pierre bat Ciseaux";
	const char* annonce[] = { winC,winF,winP };
	srand(time(0));

	do	
	{
		std::cout << "3: pierre 2: feuille 1: scissor " << std::endl;
		int i;
		std::cin >> i;
		if (i == -1)
			break;

		int num = ((rand() % 4)-1);

		std::cout << annonce[i - 1];
		std::cout << "bravo";

	} while (true);

	
	return 0;
}
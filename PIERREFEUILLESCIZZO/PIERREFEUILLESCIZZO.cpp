#include <iostream>
int main()
{
	const char* winC = "Ciseaux bat Feuille";
	const char* winF = "Feuille bat Pierre";
	const char* winP = "Pierre bat Ciseaux";
	const char* annonce[] = { winC,winF,winP };
	srand(time(0));
	int i = 200;
	int num = ((rand() % 3) + 1);
	while (i != num){
		std::cout << num;
		std::cout << "3: pierre 2: feuille 1: scissor " << std::endl;
		std::cin >> i;
		int num = ((rand() % 3) + 1);
	}std::cout << annonce[i - 1];
	std::cout << "bravo";
	return 0;
}
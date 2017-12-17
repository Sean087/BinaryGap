#include "Solution.h"
#include <iostream>

/* -- Test Solution for Solution.cpp -- */
int main()
{
	int answer, num;

	num = 0;		// Max Binary gap == 0;
	answer = solution(num);
	std::cout << "Max Binary Gap for " << num << ": " << answer << std::endl;

	num = 15;		// Max Binary gap == 0;
	answer = solution(num);
	std::cout << "Max Binary Gap for " << num << ": " << answer << std::endl;

	num = 1041;		// Max Binary gap == 5;
	answer = solution(num);
	std::cout << "Max Binary Gap for " << num << ": " << answer << std::endl;

	num = 529;		// Max Binary gap == 4;
	answer = solution(num);
	std::cout << "Max Binary Gap for " << num << ": " << answer << std::endl;

	system("pause");
	return 0;
}
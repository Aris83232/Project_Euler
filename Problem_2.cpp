//C++

#include <iostream>

int main()
{
	int num1 = 1, num2 = 1, sum=0, total=0;

	while (sum <= 4000000)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
		{
			total += sum;
		}
		num1 = num2;
		num2 = sum;
	}
	std::cout << total;
}

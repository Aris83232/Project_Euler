//C++

#include<iostream>

int main()
{
	int i = 0, total = 0;
	while (i < 1000)  //Condition is, numbers less than 1000
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
			++i;
		}
		else
		{
			++i;
		}
		
	}
	std::cout << total;

	return 0;
}

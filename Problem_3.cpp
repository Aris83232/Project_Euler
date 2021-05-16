#include <iostream>

long long is_prime(long long n)   //Number is too big so it wonn't work with int or long
{
	if (n % 2 == 0)  //it will retutn 0 if it is not prime, will return 1 if it is prime
	{
		return 0;     //if even, not prime
	}
	for (long long i = 3; i <= ((n/2)+1); i+=2) //skipping the even
	{
		if (n % i == 0)
		{
			return 0;  // not prime
		}
	}
	return 1;
}

long long find_Largest_Prime(long long n)
{
	long long factor = 0;
	for (long long i = 3; i <= n; i+= 2)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
			{
				factor = i;
				std::cout << factor << std::endl;
			}
		}
	}
	return factor;
}

int main()
{
	long long input = 600851475143;
	std::cout << find_Largest_Prime(input);

	return 0;
}

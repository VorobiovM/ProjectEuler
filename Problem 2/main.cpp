#include <iostream>

int main()
{
	unsigned int prev = 1, next = 2, sum = 0;
	while (!(next >= 4000000))
	{
		unsigned int temp = next;
		if (next % 2 == 0)
			sum += next;
		next += prev;
		prev = temp;
	}
	std::cout << sum << std::endl;
	return 0;
}
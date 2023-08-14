#include <iostream>
#include<vector>
#include<algorithm>


void remove(std::vector<int>& numbers)
{
	sort(numbers.begin(), numbers.end());

	auto it = std::unique(numbers.begin(), numbers.end());
	numbers.erase(it, numbers.end());
}

void print(std::vector<int> numbers)
{
	for (const auto& elements : numbers)
		std::cout << elements << " ";
	std::cout << std::endl;
}


int main()
{
	std::vector<int> numbers = { 1, 1, 2, 5, 6, 1, 2, 4 };

	std::cout << "[IN]: ";
	print(numbers);
	remove(numbers);
	std::cout << "[OUT]: ";
	print(numbers);
}




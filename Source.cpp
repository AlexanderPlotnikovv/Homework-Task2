#include<iostream>

int main()
{
	struct FinancialInformation {
		int num;
		std::string name;
		int sum;
	}; FinancialInformation Person;
	std::cout << "Enter your wallet number: ";
	std::cin >> Person.num;
	std::cout << std::endl;
	std::cout << "Enter your name: ";
	std::cin >> Person.name;
	std::cout << std::endl;
	std::cout << "Enter your amount: ";
	std::cin >> Person.sum;
	std::cout << std::endl;
	std::cout << "Enter your new amount: ";
	std::cin >> Person.sum;
	std::cout << std::endl;
	std::cout << "Your amount: " << Person.name << ", " << Person.num << ", " << Person.sum;
}
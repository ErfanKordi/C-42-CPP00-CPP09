#include "Contact.Class.hpp"
#include "Phonebook.Class.hpp"

int main()
{
	Phonebook book;
	std:: string input;
	bool exit = false;
	book.welcome();
	while (!exit)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if(input.compare("ADD") == 0)
			book.addContact();
		if(input.compare("SEARCH") == 0)
		{
			book.printBook();
			book.search();
		}
		if(input.compare("EXIT") == 0)
			exit = true;
	}
	return 0;
}

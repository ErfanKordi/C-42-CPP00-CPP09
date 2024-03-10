#ifndef Contact_Class_hpp
#define Contact_Class_hpp
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _phoneNumber;
	std::string _nickname;
	std::string _darkestSecret;

	int _index;

	std::string _getInput(std::string str) const;

public:
	Contact();
	~Contact();
	void fillOutForm(void);
	void changeIndex(int i);
	void view(int index, bool fullView) const;
};

#endif

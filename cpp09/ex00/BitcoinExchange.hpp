#include <iostream>
#include <vector>

struct StringIntPair
{
	std::string str;
	int num;
};

class BitcoinExchange
{
private:
	std::vector<std::pair<std::string, float>> _data;
	std::vector<std::pair<std::string, float>> _input;

public:
	BitcoinExchange(std::string inputFileName, std::string dataFileName);
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();
	void parsData(std::string dataFileName);
	void parsInputAndFindMatch(std::string inputFileName);
	void findMatch(const std::string &inputDate, float inputValue);
};

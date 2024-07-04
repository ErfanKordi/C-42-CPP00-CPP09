#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include <string>
#include <cstdlib>
#include <utility>

//-----------------------Utilities-----------------------//

float stringToFloat(const std::string &str)
{
	char *end;
	try
	{
		float value = std::strtof(str.c_str(), &end);
		return value;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		std::exit(1);
	}
}

std::string trim(const std::string &str)
{
	size_t first = str.find_first_not_of(' ');
	if (first == std::string::npos)
		return "";
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, last - first + 1);
}

bool isAllDigit(const std::string &str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool validation(const std::string &date, float rate)
{
	std::string year;
	std::string month;
	std::string day;
	try
	{
		year = date.substr(0, 4);
		month = date.substr(5, 2);
		day = date.substr(8, 2);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: Invalid line: " << date << "|" << rate << std::endl;
		return false;
	}
	if (date.size() != 10 || !isAllDigit(year) || !isAllDigit(month) || !isAllDigit(day))
	{
		std::cout << "Invalid date format: " << date << std::endl;
		return false;
	}
	if (rate < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	if (rate > 1000)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	return true;
}

//--------------------------------------------------------//

BitcoinExchange::BitcoinExchange(std::string inputFileName, std::string dataFileName)
{
	parsData(dataFileName);
	parsInputAndFindMatch(inputFileName);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &to_copy)
{
	*this = to_copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &to_copy)
{
	_data = to_copy._data;
	_input = to_copy._input;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

// Comparison function for pairs
bool comparePairs(const std::pair<std::string, float> &lhs, const std::pair<std::string, float> &rhs)
{
	return lhs.first < rhs.first;
}

void BitcoinExchange::findMatch(const std::string &inputDate, float inputValue)
{
	// Perform binary search to find the closest lower date
	std::vector<std::pair<std::string, float> >::iterator it = std::lower_bound(_data.begin(), _data.end(), std::make_pair(inputDate, 0.0f), comparePairs);

	if (it == _data.end() || it->first != inputDate)
	{
		if (it != _data.begin())
			--it;
		else
		{
			std::cerr << "Error: no lower date available for: " << inputDate << std::endl;
			return;
		}
	}

	const std::string &matchedDate = it->first;
	float exchangeRate = it->second;
	float result = inputValue * exchangeRate;

	std::cout << "Date: " << inputDate << ", count: " << inputValue
			  << " -> Matched Date: " << matchedDate << ", Rate: " << exchangeRate
			  << " = " << result << std::endl;
}

void BitcoinExchange::parsInputAndFindMatch(std::string inputFileName)
{
	std::ifstream file(inputFileName.c_str());

	if (!file.is_open())
	{
		std::cerr << "Failed to open the file." << std::endl;
		return;
	}

	std::string line;
	// Skip the header line
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::istringstream lineStream(line);
		std::string date;
		std::string valueStr;

		if (std::getline(lineStream, date, '|') && std::getline(lineStream, valueStr, '|'))
		{
			date = trim(date);
			valueStr = trim(valueStr);
			float value = stringToFloat(valueStr);
			if (validation(date, value))
				findMatch(date, value);
		}
		else
			std::cerr << "Error: invalid line: " << line << std::endl;
	}
	file.close();
}

void BitcoinExchange::parsData(std::string dataFileName)
{
	std::ifstream file(dataFileName.c_str());
	if (!file.is_open())
	{
		std::cerr << "Failed to open the file." << std::endl;
		return;
	}

	std::string line;
	// Skip the header line
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::istringstream lineStream(line);
		std::string date;
		std::string valueStr;

		if (std::getline(lineStream, date, ',') && std::getline(lineStream, valueStr, ','))
		{
			date = trim(date);
			valueStr = trim(valueStr);
			float value = stringToFloat(valueStr);
			_data.push_back(std::make_pair(date, value));
		}
		else
		{
			std::cerr << "Error: invalid line: " << line << std::endl;
			std::exit(1);
		}
	}
	std::sort(_data.begin(), _data.end(), comparePairs);
	file.close();
}

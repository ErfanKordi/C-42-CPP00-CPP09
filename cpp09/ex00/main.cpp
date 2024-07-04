#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc < 4)
		BitcoinExchange Exchange(argv[1], "data.csv");
	return 0;
}

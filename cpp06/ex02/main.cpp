#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
	int rand = std::rand() % 3;
	switch (rand)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return nullptr;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer to an instance of A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer to an instance of B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer to an instance of C" << std::endl;
	else
		std::cout << "Pointer to an unknown type" << std::endl;
}

void identify(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "Reference to an instance of A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "Reference to an instance of B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "Reference to an instance of C" << std::endl;
	else
		std::cout << "Reference to an unknown type" << std::endl;
}

int main()
{
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();

	identify(a);
	identify(b);
	identify(c);

	identify(*a);
	identify(*b);
	identify(*c);

	delete a;
	delete b;
	delete c;

	return 0;
}

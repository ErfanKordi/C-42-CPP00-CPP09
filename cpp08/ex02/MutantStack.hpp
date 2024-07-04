#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;

    MutantStack(void) : std::stack<T, Container>() {}
    MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
    MutantStack &operator=(const MutantStack &other);
    ~MutantStack(void) {}

    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
};

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &other)
{
    if (this != &other)
        std::stack<T, Container>::operator=(other);
    return *this;
}

#endif

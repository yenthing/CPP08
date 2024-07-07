#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "---- Testing with MutantStack from Subject ----" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Stack top: " << mstack.top() << std::endl; //book method

    mstack.pop(); //take out the top element

    std::cout << "Stack size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    std::cout << "Check stack size again: " << mstack.size() << std::endl; //book method

    std::cout << "Is the Stack empty: " << mstack.empty() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "\n---- Testing with std::list ----" << std::endl;
    std::list<int> listy;
    listy.push_back(5);
    listy.push_back(17);
    std::cout << "List top: " << listy.back() << std::endl;

    listy.pop_back();

    std::cout << "List size: " << listy.size() << std::endl;

    listy.push_back(3);
    listy.push_back(5);
    listy.push_back(737);
    listy.push_back(0);

    std::cout << "Check list size again: " << listy.size() << std::endl;

    std::cout << "Is the List empty: " << listy.empty() << std::endl;

    std::list<int>::iterator it3 = listy.begin();
    std::list<int>::iterator ite3 = listy.end();

    ++it3;
    --it3;
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }

    std::cout << "\n---- Testing with std::stack without de/increment it----" << std::endl;

    MutantStack<int> mstack2;
    mstack2.push(5);
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    mstack2.push(0);

    MutantStack<int>::iterator it2 = mstack2.begin();
    MutantStack<int>::iterator ite2 = mstack2.end();

    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        it2++;
    }

    std::stack<int> s(mstack);

    return 0;
}

#include "Span.hpp"

int main()
{
    std::cout << "-----Test from Subject-----" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try
    {
      std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
      std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }

    std::cout << "\n-----Test 2-----" << std::endl;
    Span sp2 = Span(10000);
    for (int i = 0; i < 10000; i++)
    {
        sp2.addNumber(i);
    }
    try
    {
      std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
      std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }

    std::cout << "\n-----Test 3-----" << std::endl;
    std::vector<int> numbers;
    for (int i = 0; i < 10000; i++)
    {
      numbers.push_back(i);
    }
    Span sp3 = Span(10000);
    sp3.addNumbers(numbers.begin(), numbers.end());
    try
    {
      std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
      std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }

    return 0;
}

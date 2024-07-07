#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
      v.push_back(i);
    }

    std::cout << "---- Testing with easyfind ----" << std::endl;
    try
    {
      std::vector<int>::iterator it = easyfind(v, 5);
      std::cout << "Value found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }

    std::cout << "\n---- Testing with easyfind out of range----" << std::endl;
    try
    {
      std::vector<int>::iterator it = easyfind(v, 10);
      std::cout << "Value found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }

    return 0;
}

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public:
      Span(unsigned int N);
      Span(const Span &other);
      Span &operator=(const Span &other);
      ~Span();

      void addNumber(const int n);
      void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
      int shortestSpan() const;
      int longestSpan() const;

    private:
        std::vector<int> _numbers;
        std::vector<int>::iterator _begin;
        std::vector<int>::iterator _end;
        unsigned int _maxSize;
};

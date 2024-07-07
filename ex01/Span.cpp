#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other){ *this = other; }

Span &Span::operator=(const Span &other)
{
    _numbers = other._numbers;
    _maxSize = other._maxSize;
    return *this;
}

Span::~Span() {}

void Span::addNumber(const int n)
{
    if (_numbers.size() >= _maxSize)
    {
        throw std::runtime_error("Container is full");
    }
    _numbers.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while(begin != end)
    {
        if (_numbers.size() >= _maxSize)
        {
            throw std::runtime_error("Container is full");
        }
        _numbers.push_back(*begin);
        begin++;
    }
    // if (_numbers.size() + std::distance(begin, end) > _maxSize)
    // {
    //     throw std::runtime_error("Container is full");
    // }
    // _numbers.insert(_numbers.end(), begin, end);
}

int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
    {
        throw std::runtime_error("Not enough numbers");
    }
    std::vector<int> sorted = _numbers;
    // std::vector<int>::iterator it = std::unique(sorted.begin(), sorted.end());
    // unsigned int min = it[1] - it[0];
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); i++)
    {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < min)
        {
            min = diff;
        }
    }
    return min;
}

int Span::longestSpan() const
{
    if (_numbers.size() < 2)
    {
        throw std::runtime_error("Not enough numbers");
    }
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - 1] - sorted[0];
}

// Span::Span() {}

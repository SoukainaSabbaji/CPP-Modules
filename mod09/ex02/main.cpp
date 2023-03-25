#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << RED << "Error: no numbers provided" << RESET << std::endl;
        return 1;
    }
    struct timeval start, end;
    std::vector<int> numbers;
    for (int i = 1; i < argc; i++)
    {
        int n = atoi(argv[i]);
        if (n < 0)
        {
            std::cout << RED << "Error: negative values not supported." << RESET << std::endl;
            return 1;
        }
        numbers.push_back(n);
    }
    std::cout << "Before: ";
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << BLUE << numbers[i] << " " << RESET;
    }
    std::cout << std::endl;
    gettimeofday(&start, NULL);
    std::vector<int> sorted_numbers_v(numbers.begin(), numbers.end());
    std::sort(sorted_numbers_v.begin(), sorted_numbers_v.end());
    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long micros = end.tv_usec - (start.tv_usec);
    double elapsed = seconds + micros * 1e-6;
    std::cout << "After: ";
    int previous = sorted_numbers_v[0];
    std::cout << BLUE << previous << " " << RESET;
    for (size_t i = 1; i < sorted_numbers_v.size(); i++)
    {
        if (sorted_numbers_v[i] != previous)
        {
            std::cout << BLUE << sorted_numbers_v[i] << " " << RESET;
            previous = sorted_numbers_v[i];
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Time to process a range of " << numbers.size() << " elements with std::vector sort: " << elapsed * 1e6 << " us" << std::endl;
    gettimeofday(&start, NULL);
    std::list<int> sorted_numbers_l(numbers.begin(), numbers.end());
    sorted_numbers_l.sort();
    gettimeofday(&end, NULL);
    seconds = end.tv_sec - start.tv_sec;
    micros = end.tv_usec - (start.tv_usec);
    elapsed = seconds + micros * 1e-6;
    std::cout << "Time to process a range of " << numbers.size() << " elements with std::list sort: " << elapsed * 1e6 << " us" << std::endl;
    return 0;
}

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << RED << "Error: no numbers provided" << RESET << std::endl;
        return 1;
    }
    std::vector<int> numbers;
    for (int i = 1; i < argc; i++)
    {
        int n = atoi(argv[i]);
        if (n <= 0)
        {
            std::cout << RED << "Error: negative values not supported." << RESET << std::endl;
            return 1;
        }
        numbers.push_back(n);
    }
    std::cout << "Before: ";
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    std::clock_t start_time = std::clock();
    std::vector<int> sorted_numbers_v(numbers.begin(), numbers.end());
    std::sort(sorted_numbers_v.begin(), sorted_numbers_v.end());
    std::clock_t end_time = std::clock();
    double time_v = (end_time - start_time) / (double)CLOCKS_PER_SEC;
    std::cout << "After: ";
    for (size_t i = 0; i < sorted_numbers_v.size(); i++)
    {
        std::cout << sorted_numbers_v[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << numbers.size() << " elements with std::vector sort: " << time_v << " sec" << std::endl;
    start_time = std::clock();
    std::list<int> sorted_numbers_l(numbers.begin(), numbers.end());
    sorted_numbers_l.sort();
    end_time = std::clock();
    double time_l = (end_time - start_time) / (double)CLOCKS_PER_SEC;
    std::cout << "After: ";
    for (std::list<int>::iterator it = sorted_numbers_l.begin(); it != sorted_numbers_l.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << numbers.size() << " elements with std::list sort: " << time_l << " sec" << std::endl;
    return 0;
}

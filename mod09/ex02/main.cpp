#include "PmergeMe.hpp"


void    merge_sort(std::vector<int>::iterator left_begin, std::vector<int>::iterator left_end, std::vector<int>::iterator right_begin, std::vector<int>::iterator right_end, std::vector<int>::iterator out_begin)
{
    while (left_begin != left_end && right_begin != right_end)
    {
        if (*left_begin < *right_begin)
        {
            *out_begin = *left_begin;
            left_begin++;
        }
        else
        {
            *out_begin = *right_begin;
            right_begin++;
        }
        out_begin++;
    }
    while (left_begin != left_end)
    {
        *out_begin = *left_begin;
        left_begin++;
        out_begin++;
    }
    while (right_begin != right_end)
    {
        *out_begin = *right_begin;
        right_begin++;
        out_begin++;
    }
}

void    merge_insertion_sort_v(std::vector<int> &v)
{
    if (v.size() <= 1)
        return;
    std::vector<int> left(v.begin(), v.begin() + v.size() / 2);
    std::vector<int> right(v.begin() + v.size() / 2, v.end());
    merge_insertion_sort_v(left);
    merge_insertion_sort_v(right);
    merge_sort(left.begin(), left.end(), right.begin(), right.end(), v.begin());
}

void merge_insertion_sort_l(std::list<int> &l)
{
    if (l.size() <= 10) {
        l.sort();
        return;
    }
    std::list<int> left, right;
    std::list<int>::iterator it = l.begin();
    int mid = l.size() / 2;
    for (int i = 0; i < mid; i++, it++)
        left.push_back(*it);
    for (int i = mid; i < (int)l.size(); i++, it++)
        right.push_back(*it);
    merge_insertion_sort_l(left);
    merge_insertion_sort_l(right);
    l.clear();
    std::list<int>::iterator lit = left.begin(), rit = right.begin();
    while (lit != left.end() && rit != right.end()) {
        if (*lit < *rit) {
            l.push_back(*lit);
            lit++;
        } else {
            l.push_back(*rit);
            rit++;
        }
    }
    while (lit != left.end()) {
        l.push_back(*lit);
        lit++;
    }
    while (rit != right.end()) {
        l.push_back(*rit);
        rit++;
    }
}


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
    merge_insertion_sort_v(sorted_numbers_v);
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
    merge_insertion_sort_l(sorted_numbers_l);
    gettimeofday(&end, NULL);
    seconds = end.tv_sec - start.tv_sec;
    micros = end.tv_usec - (start.tv_usec);
    elapsed = seconds + micros * 1e-6;
    std::cout << "Time to process a range of " << numbers.size() << " elements with std::list sort: " << elapsed * 1e6 << " us" << std::endl;
    return 0;
}

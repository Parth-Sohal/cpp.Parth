#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    std::vector<int> arr;
    int n;
    std::cout << "enter the number of elements in a vector => ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        std::cout << "Enter the " << i + 1 << "th element ";
        std::cin >> element;
        arr.push_back(element);
    }
    for (auto num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << endl;
    int start = 0;
    int end = arr.size()-1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (auto num : arr)
    {
        std::cout << num << " ";
    }
}
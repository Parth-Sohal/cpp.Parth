#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 6, 7};
    vector<int> c;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            if (c.empty() || c.back() != a[i])
            {
                c.push_back(a[i]);
                i++;
            }
        }
        else if (a[i] > b[j])
        {
            if (c.empty() || c.back() != b[i])
            {
                c.push_back(b[j]);
                j++;
            }
        }
        else
        {
            if (c.empty() || c.back() != a[i])
            {
                c.push_back(a[i]);
                i++;
            }
        }
    }
    while (i < a.size())
    {
        c.push_back(a[i++]);
    }
    while (j < b.size())
    {
        c.push_back(b[j++]);
    }
    for (auto i : c)
    {
        cout << i << " ";
    }
}

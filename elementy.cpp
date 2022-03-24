#include <iostream>
#include <map>
int main()
{
    int nums[] = { 1, 5, 5, 5, 4, 3 };
    std::pair<int, int> max = { 0 , 0 };
    std::map<int, int> result;
    for (int i : nums)
    {
        result[i]++;
    }
    for (std::pair<int, int> i : result)
    {
        if(i.second > max.second) 
        {
            max = i;
        }
    }
    std::cout << max.first;
}
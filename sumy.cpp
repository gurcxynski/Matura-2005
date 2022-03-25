#include<iostream>
int main()
{
    int nums[] = { 1, 2, 6, 5, 7, 7 };
    int max = nums[0], current = 0;
    for (int i : nums)
    {
        if(i > max) max = i;
        if(current + i > 0)
        {
            current += i;
            if(current > max)
            {
                max = current;
            }
        }
        else current = 0;
    }
    std::cout << max;
}
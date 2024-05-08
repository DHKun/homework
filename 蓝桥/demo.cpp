#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 1; i <= 2020; i++)
    {
        if (2020 % i == 0 && 3030 % i == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
#include <iostream>

int main()
{
    int sum = 0;
    int v1 = 0;
    for(v1 = 0; std::cin >> v1;)
        sum += v1;
    std::cout << "sum of these numbers is " << sum << std::endl;

    return 0;
}


#include <iostream>

int main()
{
    int sum = 0;
    int v1 = 50;
    int v2 = 0;
    std::cout << "请输入两个数v1 v2（v1必须小于等于v2）！" << std::endl;
    std::cin >> v1 >> v2;
    if(v1 > v2)
        return -1;
    while(v1 <= v2){
        sum += v1;
        v1++;
    }
    std::cout << "v1~v2 整数相加 = " << sum << std::endl;

    return 0;
}


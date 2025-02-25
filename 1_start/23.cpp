#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if(std::cin >> total){
        Sales_item temp;
        while(std::cin >> temp){
            if(total.isbn() == temp.isbn()){
                total += temp;
            }else{
                std::cout << total << std::endl;
                total = temp;
            }
        }
        std::cout << total << std::endl;
    }else{
        //没有输入
        std::cout << "No data ! please check infile" << std::endl;
    }

    return 0;
}


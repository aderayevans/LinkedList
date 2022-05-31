#include <iostream>
#include <vector>

#include <string>
#include "linkedlist.hpp"

int main()
{
    LinkedList<std::string> sharedList;

    sharedList.push_back("keep_me");
    sharedList.push_back("delete_me");
    sharedList.push_back("keep_me");

    // for (auto &val:sharedList)
    //     std::cout << val << std::endl;
    for (LinkedList<std::string>::Iterator iterator = sharedList.begin();
            iterator != sharedList.end(); iterator++)
    {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;

    std::string temp = "delete_me";        
    auto it = sharedList.find(sharedList.begin(), sharedList.end(), temp);
    // if  (it != sharedList.end())
    //     std::cout << *it << std::endl;
    // else
    //     std::cout << "No" << std::endl;
    if (it != sharedList.end())
    {
        sharedList.erase(it);
        // sharedList.erase(sharedList.begin());
    }
    for (LinkedList<std::string>::Iterator iterator = sharedList.begin();
            iterator != sharedList.end(); iterator++)
    {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;

    return 0;
}
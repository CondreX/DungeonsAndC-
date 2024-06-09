//
//  Item.h
//  Item
//
//  Created by Pau Adrian Catalin on 07/12/2020.
//



#include <iostream>
#include <string>
class Item
{
    std::string ItemName;
public:
    Item(std::string itemName);
    virtual~Item();
    std::string getItemName();
};

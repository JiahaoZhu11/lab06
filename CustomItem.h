// Created By: Jiahao Zhu
// Created Date: 2020/5/21

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <map>

#include "IceCreamItem.h"

class CustomItem : public IceCreamItem {
public:
    CustomItem(std::string size);
    virtual ~CustomItem();
    void addTopping(std::string topping);
    virtual std::string composeItem();
    virtual double getPrice();
private:
    std::map<std::string, int> toppingMap;
};

#endif

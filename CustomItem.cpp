// Created By: Jiahao Zhu
// Created Date: 2020/5/21

#include <iostream>
#include <iomanip>
#include <sstream>

#include "CustomItem.h"

using namespace std;

CustomItem::CustomItem(string size) : IceCreamItem(size) {
    if (size == "small") price = 3;
    else if (size == "medium") price = 5;
    else if (size == "large") price = 6.5;
}

CustomItem::~CustomItem() {}

void CustomItem::addTopping(string topping) {
    map<string, int>::iterator iter = toppingMap.find(topping);
    if(iter == toppingMap.end()) toppingMap[topping] = 1;
    else toppingMap[topping]++;
    price += 0.4;
}

string CustomItem::composeItem() {
    string out = "";
    out += "Custom Size: " + size + "\nToppings:\n";
    for (map<string, int>::iterator iter = toppingMap.begin(); iter != toppingMap.end(); iter++) {
        out += iter->first + ": " + to_string(iter->second) + " oz\n";
    }
    stringstream stream;
    stream << fixed << setprecision(2) << getPrice();
    out += "Price: $" + stream.str() + "\n";
    return out;
}

double CustomItem::getPrice() {
    return price;
}

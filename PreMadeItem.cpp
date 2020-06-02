// Created By: Jiahao Zhu
// Created Date: 2020/5/21

#include <iostream>
#include <iomanip>
#include <sstream>

#include "PreMadeItem.h"

using namespace std;

PreMadeItem::PreMadeItem(string name, string size) : IceCreamItem(size) {
    if (size == "small") price = 4;
    else if (size == "medium") price = 6;
    else if (size == "large") price = 7.5;
    this->name = name;
}

PreMadeItem::~PreMadeItem() {}

string PreMadeItem::composeItem() {
    string out = "";
    out += "Pre-made Size: " + size + "\nPre-made Item: " + name + "\n";
    stringstream stream;
    stream << fixed << setprecision(2) << getPrice();
    out += "Price: $" + stream.str() + "\n";
    return out;
}

double PreMadeItem::getPrice() {
    return price;
}

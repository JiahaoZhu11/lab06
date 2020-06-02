// Created By: Jiahao Zhu
// Created Date: 2020/5/21

#include <iostream>

#include "IceCreamItem.h"

using namespace std;

IceCreamItem::IceCreamItem(string size) {
    if (size != "small" && size != "medium" && size != "large") {
        cerr << "Size is invalid!" << endl;
    }
    else this->size = size;
}

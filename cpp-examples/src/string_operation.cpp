//
// Created by jichao on 3/7/20.
//

#include "string_operation.h"
#include <iostream>

using namespace std;
void StringOperation::stringEmptyCheck() {

    string str;
    if (str.empty()) {
        std::cout << "empty!" << std::endl;
    }
}
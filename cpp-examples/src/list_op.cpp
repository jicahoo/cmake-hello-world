//
// Created by jichao on 3/9/20.
//

#include "list_op.h"
#include <vector>
#include <list>
#include <iostream>

using namespace std;

School::School(const int s): students(s) {}

int School::getStudents() {
    return students;
}

City::City(const School &s, const int p): school(s), people(p) {

}
int City::getPeople() {
    return people;
}
School City::getSchool() {
    return school;
}

void demo() {
    School s(10);
    City c(s, 99);

    std::vector<City> vList;
    vList.push_back(c);
    std::list<City> l;
    l.assign(vList.begin(), vList.end());
    std::list<City>::iterator it;
    for (it = l.begin(); it != l.end(); ++it){
        std::cout << it->getPeople() << std::endl;
        std::cout << it->getSchool().getStudents() << std::endl;
    }
}


//
// Created by jichao on 3/9/20.
//

#ifndef CMAKE_HELLO_WORLD_LIST_OP_H
#define CMAKE_HELLO_WORLD_LIST_OP_H


class School {
public:
    School(const int stduentsPara);
    int getStudents();
private:
    int students;
};

class City {
public:
    City(const School &schoolPara, const int peoplePara);
    int getPeople();
    School getSchool();
private:
    School school;
    int people;
};

void demo();

#endif //CMAKE_HELLO_WORLD_LIST_OP_H

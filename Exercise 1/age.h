#ifndef AGE_H
#define AGE_H

struct Person {
    char first_name[10];
    int age;
};

void setMyAge(struct Person *person, const int age);

#endif
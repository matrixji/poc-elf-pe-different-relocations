#pragma once

class A
{
public:
    int a;

static A& Instance() {
    static A a;
    return a;
}

};

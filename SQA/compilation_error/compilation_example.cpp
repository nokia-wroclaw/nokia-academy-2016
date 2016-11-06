//Skompilować za pomocą clang/gcc z użyciem dodatkowych flag pokazujących "prawdopodobne" błędy w kodzie.
//
#include <iostream>
#include <memory>
#include <fstream>
#include <stdlib.h>

class BaseClass
{
public:
    void fastFunction()
    {
        for (size_t i = 0; i < 20; ++i)
        {
            std::cout << i << std::endl;
        }
    }

    virtual ~BaseClass(){}

    size_t timeConsumingJob()
    {
        size_t result;

        if (result > 0)
        {
            result = 0;
        }

        for (size_t i = 0; i < 3000; ++i)
        {
            result += i;
        }

        if (true)
        {
            ++result;
        }

        return result;
    }
};


class SpecialClass : public BaseClass
{
public:
    SpecialClass()
    {
        char * privMember = new char[10];
        void * uninti = new int[1000];
    }

    virtual ~SpecialClass()
    {
        // delete privMember;
    }

private:
    char * privMember;
};






int executeMainLoop()
{
    BaseClass * base = new SpecialClass;
    base->fastFunction();
    return (base->timeConsumingJob() > 0)? 0 : -1;
}


int main(int argc, char *argv[])
{
    return executeMainLoop();
    int i = 0;
    return i + 2;
}

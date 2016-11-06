// gdb ./app
// tui enable
// help
// wystartować aplikację
// ustawić pułakpę w linii 17
// załączyć watchpoint'a na a*b+c/d
// załączyć zrzucanie core-dump'a  oraz przeanalizować go, ulimit -c unlimited
// podłączyć się do działającego procesu - gdb attach "pid"

#include <cstddef>
#include <iostream>

int main(int argc, char * argv[])
{
    int a = 0, b = 0, c = 0;
    int d = 1;
    int * pointer = nullptr;

    a = 1;

    for(size_t i = 1; i < 10; ++i)
    {
        d = i;
    }

    b = 34;
    c = d * 2;
    a = b = 0;

    std::cout << "Pointer value" << *pointer << std::endl;

    return (a*b*c*d)? 1: 0;
}

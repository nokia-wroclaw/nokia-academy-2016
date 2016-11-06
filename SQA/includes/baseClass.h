#pragma once

#include "doImportantStuff.h"
#include "doEvenMoreImportantStuff.h"
#include <iostream>
#include <memory>


class BaseClass
{
public:
    void SomeFunc();

private:
    DoImportantStuff * doIt;
    DoEvenMoreImportantStuff rightNow;
};



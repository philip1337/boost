// Copyright Antony Polukhin, 2016-2017.
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <cstring>
#include <windows.h>
#include "dbgeng.h"

int foo() {
    static thread_local int i = 0;
    
    return i;
}

int main() {
    ::CoInitializeEx(0, COINIT_MULTITHREADED);
    
    return foo();
}

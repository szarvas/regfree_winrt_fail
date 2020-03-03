#include <iostream>

#include "winrt/RuntimeComponent1.h"

using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment(apartment_type::single_threaded);

    RuntimeComponent1::Class1 c;

    std::cout << "Hello World!\n";
}

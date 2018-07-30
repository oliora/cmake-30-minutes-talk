#include <iostream>
#include <boost/utility/string_view.hpp>


namespace {
    void say_hello(boost::string_view name)
    {
        std::cout << "Hello, " << name << "!\n";
    }
}

int main()
{
    say_hello("Dutch C++ Group");
}

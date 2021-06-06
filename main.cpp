#include <boost/type_index.hpp>
#include <iostream>
#include <string>

    struct some_message {

    };

    struct a_message {
        std::string member;
    };


int main() {
    some_message a; 
    a_message b;
    std::cout << "a is "
              << boost::typeindex::type_id_with_cvr<decltype(a)>().pretty_name()
              << std::endl;

    return 0;
}


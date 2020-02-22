#include <iostream>
#include <ctime>
#include <boost/optional.hpp>

using std::cout;
using boost::optional;

optional<int> get_even_number() {
    int i = std::rand();
    std::cout << i << std::endl;
    return i % 2 == 0 ? i : optional<int>();
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    cout << "Hello, World! A even number: " << std::endl;
    optional<int> j = get_even_number();
    if (j) {
        cout << "j: " << *j << std::endl;
    } else {
        cout << "Empty optional value." << std::endl;
    }
    return 0;
}

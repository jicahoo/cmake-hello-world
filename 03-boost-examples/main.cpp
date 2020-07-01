#include <iostream>
#include <ctime>
#include <string>
#include <boost/optional.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>
#include <boost/date_time/posix_time/posix_time_io.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using std::cout;
using boost::optional;

optional<int> get_even_number() {
    int i = std::rand();
    std::cout << i << std::endl;
    return i % 2 == 0 ? i : optional<int>();
}

void changeBool(bool &b){
    b = true;
}

class Apple
{
public:
    Apple(int pricePara):price(pricePara){

    }
    void grow()
    {
        std::cout << "I am growing!\n";
    }
    void sell() {
        std::cout << "Price is " << this->price << std::endl;
    }
private:
    int price;
};

void handleApple(Apple & apple) {
    apple.sell();
}

void handleApplePtr(Apple* & apple) {
    apple->sell();
}

void example_optional() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    cout << "Hello, World! A even number: " << std::endl;
    optional<int> j = get_even_number();
    if (j) {
        cout << "j: " << *j << std::endl;
    } else {
        cout << "Empty optional value." << std::endl;
    }
    bool a = false;
    changeBool(a);
    cout << a << std::endl;
}

void example_optional_ptime_foo(optional<boost::posix_time::ptime> &ptimeOptional) {
    if (ptimeOptional) {
        cout << "Get time: " << *ptimeOptional << std::endl;
    } else {
        cout << "Empty time use current " << std::endl;
        std::string date_str = boost::posix_time::to_simple_string(boost::posix_time::second_clock::universal_time());
        cout << "Current: " << date_str << std::endl;
    }
}
void example_optional_ptime() {
    boost::posix_time::ptime opt_time = boost::posix_time::second_clock::universal_time();
    optional<boost::posix_time::ptime> opt_date_time = optional<boost::posix_time::ptime>(opt_time);
    example_optional_ptime_foo(opt_date_time);
    sleep(5);
    optional<boost::posix_time::ptime> empty_time = optional<boost::posix_time::ptime>();
    example_optional_ptime_foo(empty_time);
}


void example_class() {
    Apple apple(10);
    apple.grow();
    Apple* applePtr = &apple;
    applePtr->grow();
    applePtr->sell();
    handleApple(apple);
    handleApplePtr(applePtr);
}

int main() {
    example_optional_ptime();

    return 0;
}

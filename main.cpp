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
    example_class();

    return 0;
}

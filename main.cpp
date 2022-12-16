#include <iostream>

typedef unsigned long long ull;

ull getUserInput(const std::string& outputMessage);
ull fib(const unsigned int& number);

ull F[25900];

int main() {
    for (ull & i : F) {
        i = -1;
    }
    ull input = getUserInput("Please enter a positive number to calculate the Fibonnaci sequence to: \n");
    std::cout << "The " << input << "th Fibonnaci sequence number is: " << fib(input);
}

ull getUserInput(const std::string& outputMessage) {
    ull input;
    std::cout << outputMessage;
    std::cin >> input;
    return input;
}

ull fib(const unsigned int& number) {
    if (number < 2)
        return number;
    if (F[number] != -1) {
        return F[number];
    }
    F[number] = fib(number - 1) + fib(number - 2);
    return F[number];
}
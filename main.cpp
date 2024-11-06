#include <iostream>

int main()
{
    std::cout << "Please input the number you are thinking of:";
    std::string input = "";
    std::cin >> input;

    std::cout << "You entered: " << input << std::endl;

    return 0;
}

#include <iostream>

bool isNumber(const std::string& input)
{
    try {
        std::stoi(input);
        return true;
    } catch (std::invalid_argument&) {
        std::cout << "That is not a number" << std::endl;
        return false;
    } catch (std::out_of_range&) {
        std::cout << "Invalid input" << std::endl;
        return false;
    }
    return false;
}

int main()
{
    // Welcome message
    std::cout << "Welcome to mindReader 1.0" << std::endl;
    std::cout << "This program can read your thoughts and figure out the number you're thinking of..." << std::endl;

    // Introduction affirmation
    std::string input = "";
    std::cout << "Do you understand? (y/n)";
    std::cin >> input;
    while(input != "y")
    {
        std::cout << "Try again. Do you understand? (y/n)";
        std::cin >> input;
    }

    // Get the number from the user
    std::cout << "Great! Let's get started." << std::endl;
    std::cout << "Please input the number you are thinking of:";
    std::cin >> input;

    if(isNumber(input))
        std::cout << "You entered: " << input << std::endl;

    return 0;
}

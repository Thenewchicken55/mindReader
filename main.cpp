#include <iostream>
#include <array>
#include <string_view>

std::string_view randomMessage(){
    std::array<std::string_view, 47> retryMessages = {
        "I'm sorry, I didn't get that",
        "Try again.",
        "I think you're supposed to say 'y'",
        "Why even bother running this program anyways?",
        "Why not?",
        "What's the worst that could happen?",
        "What's your problem?",
        "Try saying 'y' this time",
        "Ehh, Try again.",
        "Seriously? It's not that hard.",
        "Come on, you can do it!",
        "Are you even trying?",
        "Let's give it another shot.",
        "Maybe the keyboard is broken?",
        "One more time, with feeling!",
        "Is this your first time using a computer?",
        "Don't give up now!",
        "You almost had it!",
        "Just a little more effort!",
        "I believe in you!",
        "...",
        "OK, buddy",
        "You're really testing my patience here",
        "I'm starting to think you're doing this on purpose",
        "I'm not mad, just disappointed",
        "OK, I'm getting bored now",
        "You're really pushing my buttons",
        "This isn't funny anymore",
        "Ah, the suspense is killing me.",
        "I believe in you. Let's break this vicious cycle, yeah?",
        "This isn't Groundhog Day, I promise!",
        "Ooo, playing hard to get, are we?",
        "We're going for a record here, huh?",
        "Alright, I'll bite: Is it me or is it you?",
        "Plot twist—you're in a time loop!",
        "This isn't Jeopardy!—you don't need to answer in the form of a question.",
        "Maybe the answer's hidden in plain sight? Just a hunch.",
        "Almost there! Just one tiny tweak…or a completely different answer.",
        "Third time's the charm...or was it fourth? Who's counting?",
        "Let's play a game called 'Hit the Right Key'! You're so close.",
        "Don't worry, I can do this all day. How about you?",
        "At this point, I'm rooting for you like it's a sports game.",
        "Channeling my inner psychic... and I sense another try coming up!",
        "I'll keep the popcorn ready—this is getting good!",
        "Giving it another whirl? I'm loving the suspense."
    };
    return retryMessages[rand() % retryMessages.size()];
}

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
    while(tolower(input[0]) != 'y') {
        std::cout << "\033[3;90m" << randomMessage() << "\033[0m" << std::endl;
        std::cout << "Do you understand this time? (y/n)";
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

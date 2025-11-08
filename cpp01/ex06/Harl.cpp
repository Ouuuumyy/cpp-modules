#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[Debug] \n" << "I love having extra bacon" <<
    " for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
    << "I really do!\n\n";
}

void Harl::error()
{
    std::cout << "[Error]\n" << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::info()
{
    std::cout << "[Info]\n" << "I cannot believe adding extra bacon costs more money.\n"
    << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning()
{
    std::cout << "[Warning]\n" <<
    " I think I deserve to have some extra bacon for free.\n" <<
    " I’ve been coming for years, whereas you started working here just last month.\n\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string levels[4] = {"Debug", "Info", "Warning", "Error"};
    for(int i = 0; i < 4; i++)
    {
        if(level == levels[i])
        {
            (this->*functions[i])();
            break;
        }
    }
}
#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[Debug] I love having extra bacon" <<
    "for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::error()
{
    std::cout << "[Error] This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::info()
{
    std::cout << "[Info] I cannot believe adding extra bacon costs more money. You didn’t put"
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "[Warning] I think I deserve to have some extra bacon for free. I’ve been coming"
    "for years, whereas you started working here just last month.\n";
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
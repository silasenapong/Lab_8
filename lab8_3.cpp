#include <iostream>

int main()
{

    std::string character;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 25)
    {

        int high;
        std::cout << "Enter your height: ";
        std::cin >> high;

        if (high < 100)
        {
            character = "Chopper";
        }
        else if (high < 180)
        {
            character = "Usopp";
        }
        else
        {

            int bounty;
            std::cout << "Enter your bounty: ";
            std::cin >> bounty;

            if (bounty > 1100000000)
            {
                character = "Zoro";
            }
            else
            {
                character = "Sanji";
            }
        }
    }
    else
    {
        if (age <= 60)
        {

            int bounty;
            std::cout << "Enter your bounty: ";
            std::cin >> bounty;

            if (bounty > 500000000)
            {
                character = "Jinbe";
            }
            else
            {
                character = "Franky";
            }
        }
        else
        {
            character = "Brook";
        }
    }

    std::cout << "Your character = " << character;

    return 0;
}
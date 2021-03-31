#include <iostream>
#include <iomanip>
#include "RENT.h"

int main()
{
	std::cout << R"(
                      /^--^\      /^--^\      /^--^\
                      \____/      \____/      \____/
                     /       \  /       \    /      \
                    |         ||         |  |        |
                     \__  __ /  \__  __ /    \__  __/
| ^ | ^ | ^ | ^ | ^ | ^ | ^ | ^ | ^ | ^ | ^ | ^ \ \ ^ | ^ | ^ | ^ / / ^ |
| | | | | | | | | | | | |\ \| | |/ /| | | | | | \ \ | | | | | | | | | | |
| | | | | | | | | | | | / / | | |\ \| | | | | |/ /| | | | | | | | | | | |
| | | | | | | | | | | | \/| | | | \/| | | | | |\/ | | | | | | | | | | | |
#########################################################################
| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |
| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |)" << "\n";
    
    std::cout << std::setw(45);
    std::cout << "Rent Calculator" << "\n";
    std::cout << std::setfill('-') << std::setw(73);
    std::cout << "-" << "\n";

    int choice;
    Rent aprilRent(67.52, 1400.00, 55.52, 63.00, 23.39, 11.24);

    do {
        std::cout << "\nRent is complicated. What do you want to know? \n\n"
            << "1. Can you list what everything costs individually? \n"
            << "2. I just want to see what rent costs altogether. \n"
            << "3. Can you just show me the halves? \n"
            << "4. I'm done~! \n\n";

        std::cout << "Enter your choice here (1-4): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\nSure thing! \n\n"
                << "Base rent: $" << aprilRent.getRent() << "\n"
                << "Energy: $" << aprilRent.getTID() << "\n"
                << "Gas: $" << aprilRent.getPGE() << "\n"
                << "Utilities: $" << aprilRent.getUtilities() << "\n"
                << "Internet: $" << aprilRent.getATT() << "\n"
                << "Home Insurance: $" << aprilRent.getSfarm() << "\n\n";
            break;

        case 2:
            std::cout << "\nYeah! \n\n"
                << "Total Rent: $" << aprilRent.CalculateRent() << "\n";
            break;

        case 3:
            std::cout << "\nYeah, here they are! \n\n"
                << "Lyndsey's Rent: $" << std::setprecision(2) << std::fixed << aprilRent.CalculateRent() / 2 + 25 << "\n"
                << "Athena's Rent: $" << std::setprecision(2) << std::fixed << aprilRent.CalculateRent() / 2 << "\n\n";
            break;

        default:
            std::cout << "\nHope this helped! \n\n"
                << std::setfill('-') << std::setw(73)
                << "-" << "\n\n";
        }
    } while (choice != 4);

	return 0;
}
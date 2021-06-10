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
    
    /* ASCII art from https://asciiart.website/ */

    std::cout << std::setw(45);
    std::cout << "Rent Calculator" << "\n";
    std::cout << std::setfill('-') << std::setw(73);
    std::cout << "-" << "\n";

    int choice;
    double m_rent, m_tid, pge, util, att, sfarm;

    std::cout << "\n\nInput individual costs: \n\n";

    std::cout << "Base Rent: \n";
    std::cin >> m_rent;

    std::cout << "\nEnergy: \n";
    std::cin >> m_tid;

    std::cout << "\nGas: \n";
    std::cin >> pge;

    std::cout << "\nUtilities: \n";
    std::cin >> util;

    std::cout << "\nInternet: \n";
    std::cin >> att;

    std::cout << "\nRenter's Insurance: \n";
    std::cin >> sfarm;

    Rent thisRent(m_tid, m_rent, util, att, pge, sfarm);

    do {
        std::cout << "\n\nWhat do you want to know? \n\n"
            << "1. List what everything costs individually. \n"
            << "2. Display total cost. \n"
            << "3. Divide by number of roommates. \n"
            << "Enter any other value to quit. \n\n";

        std::cout << "Enter your choice here (1-4): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\nIndividual costs: \n\n"
                << "Base rent: $" << thisRent.getRent() << "\n"
                << "Energy: $" << thisRent.getTID() << "\n"
                << "Gas: $" << thisRent.getPGE() << "\n"
                << "Utilities: $" << thisRent.getUtilities() << "\n"
                << "Internet: $" << thisRent.getATT() << "\n"
                << "Home Insurance: $" << thisRent.getSfarm() << "\n\n";
            break;

        case 2:
            std::cout << "\nComplete costs: \n\n"
                << "Total Rent: $" << thisRent.CalculateRent() << "\n";
            break;

        case 3:
            int noRoommates;

            std::cout << "\nChoose the number of roommates: \n\n"
                << "How many roommates do you have? \n"
                << ">> ";
            std::cin >> noRoommates;
            std::cout << "Each roommate pays: $" << thisRent.CalculateRent() / noRoommates;
            break;

        default:
            std::cout << "\nHope this helped! \n\n"
                << std::setfill('-') << std::setw(73)
                << "-" << "\n\n";
        }
    } while (choice >=1 && choice <= 3);

	return 0;
}
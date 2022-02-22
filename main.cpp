#include <iostream>
#include <string>

int main()
{
    std::string user1, user2, a1 = " ", a2 = " ", a3 = " ", b1 = " ", b2 = " ", b3 = " ", c1 = " ", c2 = " ", c3 = " ";

    std::cout << "TicTacToe!" << std::endl;

    while (true)
    {
        std::cout << "   1 2 3" << std::endl;
        std::cout << "  +-+-+-+" << std::endl;
        std::cout << "a |" << a1 << "|" << a2 << "|" << a3 << "|" << std::endl;
        std::cout << "  +-+-+-+" << std::endl;
        std::cout << "b |" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
        std::cout << "  +-+-+-+" << std::endl;
        std::cout << "c |" << c1 << "|" << c2 << "|" << c3 << "|" << std::endl;
        std::cout << "  +-+-+-+" << std::endl;

        while (true)
        {
            std::cout << "USER 1: "; std::cin >> user1; std::cout << std::endl;

            if (user1 == "a1") 
            {
                if (a1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a1 = "X"; break; }
            }
            else if (user1 == "a2")
            {
                if (a2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a2 = "X"; break; }
            }
            else if (user1 == "a3")
            {
                if (a3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a3 = "X"; break; }
            }
            else if (user1 == "b1")
            {
                if (b1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b1 = "X"; break; }
            }
            else if (user1 == "b2")
            {
                if (b2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b2 = "X"; break; }
            }
            else if (user1 == "b3")
            {
                if (b3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b3 = "X"; break; }
            }
            else if (user1 == "c1")
            { 
                if (c1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c1 = "X"; break; }
            }
            else if (user1 == "c2")
            {
                if (c2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c2 = "X"; break; }
            }
            else if (user1 == "c3")
            {
                if (c3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c3 = "X"; break; } 
            }
            else
            {
                std::cout << "Please use a valid coordinate!" << std::endl;
            }
        }

        if (a1 == "X" && a2 == "X" && a3 == "X" ||
            a1 == "X" && b1 == "X" && c1 == "X" ||
            a1 == "X" && b2 == "X" && c3 == "X" ||
            a3 == "X" && b2 == "X" && c1 == "X" ||
            b1 == "X" && b2 == "X" && b3 == "X" ||
            c1 == "X" && c2 == "X" && c3 == "X" ||
            a2 == "X" && b2 == "X" && c2 == "X" ||
            a3 == "X" && b3 == "X" && c3 == "X")
        {
            std::cout << "User 1 wins!" << std::endl;

            std::cout << "" << std::endl;

            std::cout << "   1 2 3" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "a |" << a1 << "|" << a2 << "|" << a3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "b |" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "c |" << c1 << "|" << c2 << "|" << c3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
           
            break;
        }

        if (a1 != " " && a2 != " " && a3 != " " &&
            a2 != " " && b2 != " " && c2 != " " &&
            a3 != " " && b3 != " " && c3 != " ")
        {
            std::cout << "A draw! No one wins!" << std::endl;

            std::cout << "" << std::endl;

            std::cout << "   1 2 3" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "a |" << a1 << "|" << a2 << "|" << a3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "b |" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "c |" << c1 << "|" << c2 << "|" << c3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;

            break;
        }

        while (true)
        {
            std::cout << "USER 2: "; std::cin >> user2; std::cout << std::endl;

            if (user2 == "a1") 
            {
                if (a1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a1 = "O"; break; }
            }
            else if (user2 == "a2")
            {
                if (a2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a2 = "O"; break; }
            }
            else if (user2 == "a3")
            {
                if (a3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a3 = "O"; break; }
            }
            else if (user2 == "b1")
            {
                if (b1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b1 = "O"; break; }
            }
            else if (user2 == "b2")
            {
                if (b2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b2 = "O"; break; }
            }
            else if (user2 == "b3")
            {
                if (b3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b3 = "O"; break; }
            }
            else if (user2 == "c1")
            { 
                if (c1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c1 = "O"; break; }
            }
            else if (user2 == "c2")
            {
                if (c2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c2 = "O"; break; }
            }
            else if (user2 == "c3")
            {
                if (c3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c3 = "O"; break; } 
            }
            else
            {
                std::cout << "Please use a valid coordinate!" << std::endl;
            }
        }

        if (a1 == "O" && a2 == "O" && a3 == "O" ||
            a1 == "O" && b1 == "O" && c1 == "O" ||
            a1 == "O" && b2 == "O" && c3 == "O" ||
            a3 == "O" && b2 == "O" && c1 == "O" ||
            b1 == "O" && b2 == "O" && b3 == "O" ||
            c1 == "O" && c2 == "O" && c3 == "O" ||
            a2 == "O" && b2 == "O" && c2 == "O" ||
            a3 == "O" && b3 == "O" && c3 == "O")
        {
            std::cout << "User 2 wins!" << std::endl;

            std::cout << "" << std::endl;

            std::cout << "   1 2 3" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "a |" << a1 << "|" << a2 << "|" << a3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "b |" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;
            std::cout << "c |" << c1 << "|" << c2 << "|" << c3 << "|" << std::endl;
            std::cout << "  +-+-+-+" << std::endl;

            break;
        }
    }

    return 0;
}

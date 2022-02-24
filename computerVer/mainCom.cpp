#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <algorithm>

std::string computer(std::vector<std::string> userToes, std::vector<std::string> comToes)
{
    std::random_device rd;
    std::string computerOut;

    while (1) 
    {
        std::string rowStr;

        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distr(1,3);

        char row = 97 + distr(gen) % 3;
        rowStr += row;

        int column = distr(gen);

        computerOut = rowStr + std::to_string(column);

        if (!(std::find(userToes.begin(), userToes.end(), computerOut) != userToes.end()) && !(std::find(comToes.begin(), comToes.end(), computerOut) != comToes.end()))
        {
            break;
        }
    }

    return computerOut;
}

int main()
{
    std::string user, com, a1 = " ", a2 = " ", a3 = " ", b1 = " ", b2 = " ", b3 = " ", c1 = " ", c2 = " ", c3 = " ";

    std::vector<std::string> userToes, comToes;

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
            std::cout << "USER: "; std::cin >> user; std::cout << std::endl;

            if (user == "a1") 
            {
                if (a1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a1 = "X"; break; }
            }
            else if (user == "a2")
            {
                if (a2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a2 = "X"; break; }
            }
            else if (user == "a3")
            {
                if (a3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { a3 = "X"; break; }
            }
            else if (user == "b1")
            {
                if (b1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b1 = "X"; break; }
            }
            else if (user == "b2")
            {
                if (b2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b2 = "X"; break; }
            }
            else if (user == "b3")
            {
                if (b3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { b3 = "X"; break; }
            }
            else if (user == "c1")
            { 
                if (c1 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c1 = "X"; break; }
            }
            else if (user == "c2")
            {
                if (c2 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c2 = "X"; break; }
            }
            else if (user == "c3")
            {
                if (c3 != " ") { std::cout << "That square is filled already; please input another coordinate!" << std::endl; }
                else { c3 = "X"; break; } 
            }
            else
            {
                std::cout << "Please use a valid coordinates!" << std::endl;
            }
        }

        userToes.push_back(user);

        if (a1 == "X" && a2 == "X" && a3 == "X" ||
            a1 == "X" && b1 == "X" && c1 == "X" ||
            a1 == "X" && b2 == "X" && c3 == "X" ||
            a3 == "X" && b2 == "X" && c1 == "X" ||
            b1 == "X" && b2 == "X" && b3 == "X" ||
            c1 == "X" && c2 == "X" && c3 == "X" ||
            a2 == "X" && b2 == "X" && c2 == "X" ||
            a3 == "X" && b3 == "X" && c3 == "X")
        {
            std::cout << "User wins!" << std::endl;

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

        com = computer(userToes, comToes);

        std::cout << com << std::endl;

        comToes.push_back(com); 

        if (com == "a1") 
        {
            a1 = "O";
        }
        else if (com == "a2")
        {
            a2 = "O";
        }
        else if (com == "a3")
        {
            a3 = "O";
        }
        else if (com == "b1")
        {
            b1 = "O";     
        }
        else if (com == "b2")
        {
            b2 = "O";
        }
        else if (com == "b3")
        {
            b3 = "O";
        }
        else if (com == "c1")
        {
            c1 = "O";
        }
        else if (com == "c2")
        {
            c2 = "O";
        }
        else
        {
            c3 = "O";
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
            std::cout << "Computer wins!" << std::endl;

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

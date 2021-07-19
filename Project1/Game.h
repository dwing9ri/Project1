#pragma once
#include<iostream>
#include<string>


namespace chess
{
    void MainMenu(std::istream& is, std::ostream& os);
    void PrintInitialBoard(std::ostream& os);
    void LoadBoard(std::istream& is, std::ostream& os);
    void PrintGameInfomation(std::istream& is, std::ostream& os);

}


#pragma once

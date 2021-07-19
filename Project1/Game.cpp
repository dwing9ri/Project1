#include "Game.h"

int Board[8][8] = { 0, };

void chess::MainMenu(std::istream& is, std::ostream& os)
{
    int input = 0;



    while (1)
    {
        os << "***************************\n";
        os << "* *************************\n";
        os << "*   ***********************\n";
        os << "*     *********************\n";
        os << "*       *******************\n";
        os << "*         *****************\n";
        os << "*           ***************\n";
        os << "*             *************\n";
        os << "*               ***********\n";
        os << "*                 *********\n";
        os << "*                   *******\n";
        os << "*                     *****\n";
        os << "*                       ***\n";
        os << "*                         *\n";
        os << "***************************\n";
        os << "* SWTube CHESS ENGINE     *\n";
        os << "* Jawon Jang                *\n";
        os << "* 2021 / 07 / 19          *\n";
        os << "***************************\n\n\n";

        os << "***************************\n";
        os << "* 1. PrintBoard           *\n";
        os << "* 2. LoadBoard            *\n";
        os << "* 3. PrintGameInformation *\n";
        os << "* 4. Exit                 *\n";
        os << "*-------------------------*\n";
        os << "  Command:";


        is >> input;

        //실패시
        if (is.fail() || (input < 1 || input > 4))
        {
            os << "*-------------------------*\n";
            os << "* INVALID INPUT!          *\n";
            os << "* PLEASE TRY AGAIN!       *\n";
            os << "*-------------------------*\n";
            os << "* 1. PrintBoard           *\n";
            os << "* 2. LoadBoard            *\n";
            os << "* 3. PrintGameInformation *\n";
            os << "* 4. Exit                 *\n";
            os << "*-------------------------*\n";
            os << "  Command:";

            is.clear();
            is.ignore(100, '\n');

            is >> input;
        }

        if (input == 1)
        {
            PrintInitialBoard(std::cout);
        }
        else if (input == 2)
        {
            LoadBoard(std::cin, std::cout);
        }
        else if (input == 3)
        {
            PrintGameInfomation(std::cin, std::cout);
        }
        else if (input == 4)
        {
            os << "*-------------------------*\n";
            os << "* THANK YOU FOR PLAYING!  *\n";
            os << "***************************\n";

            break;
        }
    }


}

void chess::PrintInitialBoard(std::ostream& os)
{
    os << "*-------------------------*\n";
    os << "*   abcdefgh              *\n";
    os << "*  +--------+             *\n";
    os << "* 0|RNBKQBNR|             *\n";
    os << "* 1|PPPPPPPP|             *\n";
    os << "* 2|        |             *\n";
    os << "* 3|        |             *\n";
    os << "* 4|        |             *\n";
    os << "* 5|        |             *\n";
    os << "* 6|pppppppp|             *\n";
    os << "* 7|rnbkqbnr|             *\n";
    os << "*  +--------+             *\n";
    os << "*-------------------------*\n";
    os << "* 1. PrintBoard           *\n";
    os << "* 2. LoadBoard            *\n";
    os << "* 3. PrintGameInformation *\n";
    os << "* 4. Exit                 *\n";
    os << "*-------------------------*\n";
}

void chess::LoadBoard(std::istream& is, std::ostream& os)
{
    int t = 0;

    is >> t; //사용자가 몇번을 입력할지 모르니까 입력받을 말 갯수 먼저 입력받음

    while (t--)
    {
        char object, posX;
        int y = 0;

        is >> object >> posX >> y;

        int x = 0;

        x = posX - 'a';

        switch (object)
        {
        case 'R':
            if (Board[y][x] == 0)
                Board[y][x] = 11;
            else
                t++;
            break;
        case 'N':
            if (Board[y][x] == 0)
                Board[y][x] = 12;
            else
                t++;
            break;
        case 'B':
            if (Board[y][x] == 0)
                Board[y][x] = 13;
            else
                t++;
            break;
        case 'K':
            if (Board[y][x] == 0)
                Board[y][x] = 14;
            else
                t++;
            break;
        case 'Q':
            if (Board[y][x] == 0)
                Board[y][x] = 15;
            else
                t++;
            break;
        case 'P':
            if (Board[y][x] == 0)
                Board[y][x] = 10;
            else
                t++;
            break;
        case 'r':
            if (Board[y][x] == 0)
                Board[y][x] = 21;
            else
                t++;
            break;
        case 'n':
            if (Board[y][x] == 0)
                Board[y][x] = 22;
            else
                t++;
            break;
        case 'b':
            if (Board[y][x] == 0)
                Board[y][x] = 23;
            else
                t++;
            break;
        case 'k':
            if (Board[y][x] == 0)
                Board[y][x] = 24;
            else
                t++;
            break;
        case 'q':
            if (Board[y][x] == 0)
                Board[y][x] = 25;
            else
                t++;
            break;
        case 'p':
            if (Board[y][x] == 0)
                Board[y][x] = 20;
            else
                t++;
            break;
        default:
            t++;
            break;
        }
    }

    os << "*-------------------------*\n";
    os << "*   abcdefgh              *\n";
    os << "*  +--------+             *\n";

    for (int i = 0; i < 8; i++)
    {
        os << "* " << i << "|";
        for (int j = 0; j < 8; j++)
        {
            switch (Board[i][j])
            {
            case 10:
                os << "P";
                break;
            case 11:
                os << "R";
                break;
            case 12:
                os << "N";
                break;
            case 13:
                os << "B";
                break;
            case 14:
                os << "K";
                break;
            case 15:
                os << "Q";
                break;
            case 20:
                os << "p";
                break;
            case 21:
                os << "r";
                break;
            case 22:
                os << "n";
                break;
            case 23:
                os << "b";
                break;
            case 24:
                os << "k";
                break;
            case 25:
                os << "q";
                break;
            case 0:
                os << " ";
                break;
            default:
                break;
            }

        }
        os << "|             *\n";;
    }

    os << "*  +--------+             *\n";
}

void chess::PrintGameInfomation(std::istream& is, std::ostream& os)
{
    int objectNum[12] = { 0, };

    int bScore = 0, wScore = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (Board[i][j])
            {
            case 10:
                objectNum[0]++;
                bScore += 100;
                break;
            case 11:
                objectNum[1]++;
                bScore += 500;
                break;
            case 12:
                objectNum[2]++;
                bScore += 320;
                break;
            case 13:
                objectNum[3]++;
                bScore += 330;
                break;
            case 14:
                objectNum[4]++;
                bScore += 20000;
                break;
            case 15:
                objectNum[5]++;
                bScore += 900;
                break;
            case 20:
                objectNum[6]++;
                wScore += 100;
                break;
            case 21:
                objectNum[7]++;
                wScore += 500;
                break;
            case 22:
                objectNum[8]++;
                wScore += 320;
                break;
            case 23:
                objectNum[9]++;
                wScore += 330;
                break;
            case 24:
                objectNum[10]++;
                wScore += 20000;
                break;
            case 25:
                objectNum[11]++;
                wScore += 900;
                break;
            default:
                break;
            }
        }
    }



    os << "*-------------------------*\n";
    os << "* Black pawns:   " << objectNum[0] << "         *\n";
    os << "* Black rooks:   " << objectNum[1] << "         *\n";
    os << "* Black knights: " << objectNum[2] << "         *\n";
    os << "* Black bishops: " << objectNum[3] << "         *\n";
    os << "* Black queen:   " << objectNum[5] << "         *\n";
    os << "* Black king:    " << objectNum[4] << "         *\n";
    os << "* White pawns:   " << objectNum[6] << "         *\n";
    os << "* White rooks:   " << objectNum[7] << "         *\n";
    os << "* White knights: " << objectNum[8] << "         *\n";
    os << "* White bishops: " << objectNum[9] << "         *\n";
    os << "* White queen:   " << objectNum[11] << "         *\n";
    os << "* White king:    " << objectNum[10] << "         *\n";

    if (objectNum[4] >= 1 && objectNum[10] >= 1)
    {
        os << "* Result: ON GOING GAME   *\n";
    }
    else if (objectNum[4] == 0)
    {
        os << "* Result: WHITE WIN       *\n";
    }
    else if (objectNum[10] == 0)
    {
        os << "* Result: BLACK WIN       *\n";
    }

    if (bScore > wScore)
    {
        os << "* Who is winning ? : BLACK   *\n";
    }
    else if (bScore < wScore)
    {
        os << "* Who is winning ? : WHITE   *\n";
    }
    else if (bScore == wScore)
    {
        os << "* Who is winning ? : NONE   *\n";
    }

}

#include <iostream>
#include <ctime>
#include <array>
#include <cstdlib> // for system()

using move_t = std::array<int, 2>;

void drawBoard(int board[3][3]);
void calculateWinCondition(int board[3][3]);
std::array<int, 2> sanitizePlay(std::string play);
move_t checkPlay(int board[3][3], std::string play);
void checkWin(int value);

int main(int argc, char const *argv[])
{
    int board[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}};

    drawBoard(board);
    std::cout << "where do you wanna play?";

    std::string play;
    int player = 1;
    bool changePlayer = true;

    while (true)
    {
        std::getline(std::cin >> std::ws, play);
        auto validPlay = checkPlay(board, play);

        if (validPlay[0] < 0 || validPlay[1] < 0)
        {
            continue;
        }

        player = changePlayer ? 1 : 2;
        changePlayer = !changePlayer;

        board[validPlay[0]][validPlay[1]] = player;
        drawBoard(board);
        calculateWinCondition(board);
    }
    return 0;
}

move_t checkPlay(int board[3][3], std::string play)
{
    auto validPlay = sanitizePlay(play);
    if (play.length() < 3)
    {
        std::cout << "Invalid format, try x,y";
        return {-1, -1};
    }
    if (validPlay[0] < 0 || validPlay[1] < 0)
    {
        std::cout << "Invalid position, try  x and y between 0 and 2\n";
        return validPlay;
    }

    if (board[validPlay[0]][validPlay[1]] != 3)
    {
        std::cout << "This was already played\n";
        return {-1, -1};
    }
    return validPlay;
}

std::array<int, 2> sanitizePlay(std::string play)
{
    int row = (int)play[0] - 48;
    int column = (int)play[2] - 48;
    std::cout << "current play is " << play << "\n";
    std::cout << "the row is " << row << "\n";
    std::cout << "the column is " << column << "\n";
    if (
        (row == 0 || row == 1 || row == 2) &&
        (column == 0 || column == 1 || column == 2))
    {
        return {row, column};
    }
    return {-1, -1};
}

void drawBoard(int board[3][3])
{
    if (board != nullptr)
    {
        for (int i = 0; i < sizeof(*board) / sizeof(int); i++)
        {
            for (int value : board[i])
            {
                switch (value)
                {
                case 3:
                    std::cout << "# ";
                    break;
                case 2:
                    std::cout << "o ";
                    break;
                case 1:
                    std::cout << "x ";
                    break;
                default:
                    break;
                }
            }
            std::cout << "\n";
        }
    }
}

void calculateWinCondition(int board[3][3])
{
    if (board != nullptr)
    {
        int columnSum[] = {0, 0, 0};
        int transversalSum = 0;
        for (int i = 0; i < sizeof(*board) / sizeof(int); i++)
        {
            int rowSum = 0;
            int columnIndex = 0;
            for (int value : board[i])
            {
                if (columnIndex == i) {
                    
                }
                switch (value)
                {
                case 1:
                    rowSum += 40;
                    columnSum[columnIndex] += 40;
                    break;
                case 2:
                    rowSum += 100;
                    columnSum[columnIndex] += 100;
                    break;
                default:
                    break;
                }
                columnIndex += 1;
            }
            checkWin(rowSum);
            for (int sum : columnSum) {
                checkWin(sum);
            }
        }
    }
}

void checkWin(int value)
{
    if (value == 300)
    {
        std::cout << "o player won!\n";
        std::exit(0);
    }
    if (value == 120)
    {
        std::cout << "x player won!\n";
        std::exit(0);
    }
}

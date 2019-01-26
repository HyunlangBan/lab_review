//============================================================================
// File name    : lab7.cpp
//============================================================================

#include <iostream>
using namespace std;

// The game world is a grid; these specify the dimensions of that grid.
const int ROWS = 10;
const int COLS = 10;
enum GameStatus
{
    ONGOING,
    WON,
    LOST
};

// Function declarations.
void playGame(int playerRow, int playerCol);
char getMove(char world[ROWS][COLS], int playerRow, int playerCol);
GameStatus updateWorld(char direction, char world[ROWS][COLS],
                       int &playerRow, int &playerCol);
void printWorld(char world[ROWS][COLS]);

/**
 * Main. Creates a world grid and lets the player move through it.
 *
 * @return The exit status; 0 means success.
 */
int main()
{
    // These keep track of where the player currently is, indicated by a 'P'.
    int playerRow = 8;
    int playerCol = 1;

    // Start the game.
    playGame(playerRow, playerCol);

    return 0;
}

/**
 * Creates a grid world and then interacts with the user as they choose moves
 * to navigate through the grid world to the goal.
 *
 * @param playerRow  The row index where the user current sits.
 * @param playerCol  The column index where the user current sits.
 */
void playGame(int playerRow, int playerCol)
{
    // Create the grid world. Here's what the characters mean:
    // X -- a border; cannot be moved into.
    // E -- an enemy; can be moved into, but causes the player to lose.
    // T -- treasure; can be moved into to gain extra points.
    // G -- the goal; the user must reach this spot to win.
    // (blank) -- an open spot that the player can move into.
    // P -- the player (not on the initial grid; see below).
    char world[ROWS][COLS] = {
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
        {'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', 'X'},
        {'X', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
        {'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
        {'X', ' ', ' ', 'T', ' ', ' ', ' ', ' ', ' ', 'X'},
        {'X', ' ', ' ', ' ', ' ', 'T', ' ', ' ', ' ', 'X'},
        {'X', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
        {'X', ' ', ' ', 'E', ' ', ' ', ' ', ' ', ' ', 'X'},
        {'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
        {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}};

    char nextMove;                   // Holds the user's next move.
    GameStatus gameStatus = ONGOING; // Indicates if the game is still continuing

    // Place the player.
    world[playerRow][playerCol] = 'P';

    // Keep playing until the game is over...
    while (gameStatus == ONGOING)
    {
        // Show the player the state of the world.
        printWorld(world);

        // Get the direction in which the player would like to move.
        nextMove = getMove(world, playerRow, playerCol);

        // Apply the move to the world and see if the game is still active.
        gameStatus = updateWorld(nextMove, world, playerRow, playerCol);
    }

    // Let the player know if they won or lost.
    cout << string(80, '*') << endl;
    if (gameStatus == WON)
    {
        cout << "                        Congratulations, you won!" << endl;
    }
    else
    {
        cout << "                           GAME OVER. YOU LOSE." << endl;
    }
    cout << string(80, '*') << endl;
}

/**
 * Prints the world out to the player, including the row/column indexes, e.g.:
 *
 *      0 1 2 3 4 5 6 7 8 9
 *   0  X X X X X X X X X X
 *   1  X               G X
 *   2  X T               X
 *   3  X                 X
 *   4  X                 X
 *   5  X         T       X
 *   6  X E               X
 *   7  X     E           X
 *   8  X P               X
 *   9  X X X X X X X X X X
 *
 * @param world     A world grid.
 */
void printWorld(char world[ROWS][COLS])
{
    // TODO #1: complete this function.
    cout << " ";
    for (int i = 0; i < COLS; i++)
    {
        cout << " " << i;
    }
    cout << endl;
    for (int k = 0; k < ROWS; k++)
    {
        cout << k << " ";
        for (int r = 0; r < COLS; r++)
        {
            cout << world[k][r] << " ";
        }
        cout << endl;
    }
}

/**
 * Shows the user the possible valid moves from his/her current position, and
 * reads things a move from the user ([u]p, [d]own, [l]eft, or [r]ight).
 *
 * @param world      The world grid.
 * @param playerRow  The row index where the user current sits.
 * @param playerCol  The column index where the user current sits.
 * @return The move input by the user (u, d, l, r).
 */
char getMove(char world[ROWS][COLS], int playerRow, int playerCol)
{
    char move;

    while (true)
    {
        // TODO #2: Add code to print all the currently valid moves
        // (u, d, l, r) based on where the player is and what's around them.
        cout << "Hero, where would you like to go? Valid directions: " << endl;
        // if playerRow-1 != 'X' then print player can move up
        // if playerRow+1 != 'X' then print player can move down
        // if playerCol-1 != 'X' then print player can move to left
        // if playerCol+1 != 'X' then print player can move to right
        if (world[playerRow - 1][playerCol] != 'X')
        {
            cout << "up" << endl;
        }
        if (world[playerRow + 1][playerCol] != 'X')
        {
            cout << "down" << endl;
        }
        if (world[playerRow][playerCol - 1] != 'X')
        {
            cout << "left" << endl;
        }
        if (world[playerRow][playerCol + 1] != 'X')
        {
            cout << "rignt" << endl;
        }

        // Read in move from user.
        cin >> move;

        // TODO #3: Add code to validate that the user chose a valid move. If
        // not, reprompt until a valid move is provided.

        if (move == 'u')
        {
            if (world[playerRow - 1][playerCol] == 'X')
            {
                cout << "That's not validate move" << endl;
            }
            else
            {
                break;
            }
        }
        if (move == 'd')
        {
            if (world[playerRow + 1][playerCol] == 'X')
            {
                cout << "That's not validate move" << endl;
            }
            else
            {
                break;
            }
        }
        if (move == 'l')
        {
            if (world[playerRow][playerCol - 1] == 'X')
            {
                cout << "That's not validate move" << endl;
            }
            else
            {
                break;
            }
        }
        if (move == 'r')
        {
            if (world[playerRow][playerCol + 1] == 'X')
            {
                cout << "That's not validate move" << endl;
            }
            else
            {
                break;
            }
        }
    }
    return move;
}

/**
 * Moves the player the direction indicated; updates the world grid and the
 * player's current row and column.
 *
 * @param direction  The direction to move the player: u, d, l, r.
 * @param world      The world grid -- should be updated.
 * @param playerRow  The player's current row location prior to move; should
 *                   be updated.
 * @param playerCol  The player's current column location prior to move; should
 *                   be updated.
 * @return The game status -- one of ONGOING (everything is fine), WON (the 
 *         player reached the goal), or LOST (the player hit an enemy).
 */
GameStatus updateWorld(char direction, char world[][COLS], int &playerRow, int &playerCol)
{
    GameStatus status = ONGOING;

    // TODO #4: implement this function.
    if (direction == 'u')
    {
        playerRow = playerRow - 1;
        if (world[playerRow][playerCol] == 'G')
        {
            status = WON;
            world[playerRow][playerCol] = 'P';
            world[playerRow + 1][playerCol] = ' ';
        }
        else if (world[playerRow][playerCol] == 'E')
        {
            status = LOST;
            world[playerRow][playerCol] = 'P';
            world[playerRow + 1][playerCol] = ' ';
        }
        else if (world[playerRow][playerCol] == ' ' || world[playerRow][playerCol] == 'T')
        {
            status = ONGOING;
            world[playerRow][playerCol] = 'P';
            world[playerRow + 1][playerCol] = ' ';
        }
    }

    if (direction == 'd')
    {
        playerRow = playerRow + 1;
        if (world[playerRow][playerCol] == 'G')
        {
            status = WON;
            world[playerRow][playerCol] = 'P';
            world[playerRow - 1][playerCol] = ' ';
        }
        else if (world[playerRow][playerCol] == 'E')
        {
            status = LOST;
            world[playerRow][playerCol] = 'P';
            world[playerRow - 1][playerCol] = ' ';
        }
        else if (world[playerRow][playerCol] == ' ' || world[playerRow][playerCol] == 'T')
        {
            status = ONGOING;
            world[playerRow][playerCol] = 'P';
            world[playerRow - 1][playerCol] = ' ';
        }
    }
    if (direction == 'l')
    {
        playerCol = playerCol - 1;
        if (world[playerRow][playerCol] == 'G')
        {
            status = WON;
            world[playerRow][playerCol] = 'P';
            world[playerRow][playerCol + 1] = ' ';
        }
        else if (world[playerRow][playerCol] == 'E')
        {
            status = LOST;
            world[playerRow][playerCol] = 'P';
            world[playerRow][playerCol + 1] = ' ';
        }
        else if (world[playerRow][playerCol] == ' ' || world[playerRow][playerCol] == 'T')
        {
            status = ONGOING;
            world[playerRow][playerCol] = 'P';
            world[playerRow][playerCol + 1] = ' ';
        }
    }
    if (direction == 'r')
    {
        playerCol = playerCol + 1;
        if (world[playerRow][playerCol] == 'G')
        {
            status = WON;
            world[playerRow][playerCol] = 'P';
            world[playerRow][playerCol - 1] = ' ';
        }
        else if (world[playerRow][playerCol] == 'E')
        {
            status = LOST;
            world[playerRow][playerCol] == 'P';
            world[playerRow][playerCol - 1] = ' ';
        }
        else if (world[playerRow][playerCol] == ' ' || world[playerRow][playerCol] == 'T')
        {
            status = ONGOING;
            world[playerRow][playerCol] = 'P';
            world[playerRow][playerCol - 1] = ' ';
        }
    }
    return status;
}
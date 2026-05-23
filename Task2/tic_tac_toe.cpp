#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

char currentPlayer = 'X';

// Display board
void displayBoard() {

    cout << endl;

    for (int i = 0; i < 3; i++) {

        cout << " ";

        for (int j = 0; j < 3; j++) {

            cout << board[i][j];

            if (j < 2)
                cout << " | ";
        }

        cout << endl;

        if (i < 2)
            cout << "---|---|---" << endl;
    }

    cout << endl;
}

// Make move
bool makeMove(int choice) {

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' &&
        board[row][col] != 'O') {

        board[row][col] = currentPlayer;
        return true;
    }

    return false;
}

// Check win
bool checkWin(char player) {

    // Rows
    for (int i = 0; i < 3; i++) {

        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player) {

            return true;
        }
    }

    // Columns
    for (int j = 0; j < 3; j++) {

        if (board[0][j] == player &&
            board[1][j] == player &&
            board[2][j] == player) {

            return true;
        }
    }

    // Diagonals
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player) {

        return true;
    }

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player) {

        return true;
    }

    return false;
}

// Check draw
bool checkDraw() {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (board[i][j] != 'X' &&
                board[i][j] != 'O') {

                return false;
            }
        }
    }

    return true;
}

// Switch player
void switchPlayer() {

    if (currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

// Reset board
void resetBoard() {

    char value = '1';

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            board[i][j] = value++;
        }
    }

    currentPlayer = 'X';
}

// Smart computer move
int computerMove() {

    // Try to win
    for (int i = 1; i <= 9; i++) {

        int row = (i - 1) / 3;
        int col = (i - 1) % 3;

        if (board[row][col] != 'X' &&
            board[row][col] != 'O') {

            char temp = board[row][col];
            board[row][col] = 'O';

            if (checkWin('O')) {
                board[row][col] = temp;
                return i;
            }

            board[row][col] = temp;
        }
    }

    // Block player from winning
    for (int i = 1; i <= 9; i++) {

        int row = (i - 1) / 3;
        int col = (i - 1) % 3;

        if (board[row][col] != 'X' &&
            board[row][col] != 'O') {

            char temp = board[row][col];
            board[row][col] = 'X';

            if (checkWin('X')) {
                board[row][col] = temp;
                return i;
            }

            board[row][col] = temp;
        }
    }

    // Take center if available
    if (board[1][1] == '5')
        return 5;

    // Random move
    int choice;

    do {
        choice = rand() % 9 + 1;
    }
    while (!makeMove(choice));

    return choice;
}

int main() {

    srand(time(0));

    char playAgain;

    do {

        resetBoard();

        while (true) {

            displayBoard();

            int choice;

            // Human move
            if (currentPlayer == 'X') {

                cout << "Enter your move (1-9): ";
                cin >> choice;

                if (choice < 1 || choice > 9) {

                    cout << "Invalid choice!" << endl;
                    continue;
                }

                if (!makeMove(choice)) {

                    cout << "Position already taken!" << endl;
                    continue;
                }
            }

            // Computer move
            else {

                choice = computerMove();

                makeMove(choice);

                cout << "Computer chose: "
                     << choice << endl;
            }

            // Check win
            if (checkWin(currentPlayer)) {

                displayBoard();

                if (currentPlayer == 'X')
                    cout << "You win!" << endl;
                else
                    cout << "Computer wins!" << endl;

                break;
            }

            // Check draw
            if (checkDraw()) {

                displayBoard();

                cout << "Game is a draw!" << endl;

                break;
            }

            switchPlayer();
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' ||
             playAgain == 'Y');

    cout << "Game Ended!" << endl;

    return 0;
}

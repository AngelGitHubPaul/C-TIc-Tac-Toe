#include <iostream>
using namespace std;


int main() {
	cout << "2 Player Tic Tac Toe Game in C++" << endl;

	cout << "Start Game? (Y - N): ";
	string choice;
	cin >> choice;
	while (choice != "Y" && choice != "y" && choice != "N" && choice != "n") {
		cout << "INVALID INPUT" << endl;
		cout << "Start Game? (Y - N): ";
		cin >> choice;
	}
	if (choice == "N" || choice == "n") {
		return 0;
	}
	choice = "";

	string restart;
	int xAxis = 0;
	int yAxis = 0;
	int turn = 0;
	string gameboard[3][3] = { {" ", " ", " "}, {" ", " ", " "}, {" ", " ", " "} };
	for (turn; turn <= 9; turn++) {
		// gameboard generator
		for (int x = 0; x <= 11; x++) {
			for (int y = 0; y <= 11; y++) {
				if (x == 0 && y % 2 == 0 && (y / 2) % 2 == 1) {
					cout << ((y / 2) + 1) / 2;
				}
				else if (x % 2 == 0 && (x / 2) % 2 == 1 && y == 0) {
					cout << ((x / 2) + 1) / 2;
				}
				else if (x != 0 && y != 0 && x % 2 == 0 && y % 2 == 0 && (x / 2) % 2 == 1 && (y / 2) % 2 == 1) {
					cout << gameboard[(((x / 2) + 1) / 2) - 1][(((y / 2) + 1) / 2) - 1];
				}
				else if (x != 0 && y != 0 && y % 2 == 0 && (y / 2) % 2 == 0) {
					cout << "|";
				}
				else if (x != 0 && y != 0 && x % 2 == 0 && (x / 2) % 2 == 0 && (y / 2) % 2 != 0) {
					cout << "-";
				}
				else if (x != 0 && y != 0 && x % 2 == 0 && (x / 2) % 2 == 0 && y % 2 != 0 && (y / 2) % 2 == 0) {
					cout << "-";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

		//if it reach turn 10 without winner it is draw
		if (turn == 9) {
			cout << "Draw!" << endl;
			cout << "Play Again? (Y - N): ";
			cin >> restart;

			while (restart != "Y" && restart != "y" && restart != "N" && restart != "n") {
				cout << "INVALID INPUT" << endl;
				cout << "Play Again? (Y - N): ";
				cin >> restart;
			}

			if (restart == "Y" || restart == "y") {
				turn = -1;
				for (int x = 0; x <= 2; x++) {
					for (int y = 0; y <= 2; y++) {
						gameboard[x][y] = " ";
					}
				}
			}
			else if (restart == "N" || restart == "n") {
				return 0;
			}
			restart = "";
		}
		// check if there is winner
		else if (gameboard[0][0] == "X" && gameboard[0][1] == "X" && gameboard[0][2] == "X" || gameboard[1][0] == "X" && gameboard[1][1] == "X" && gameboard[1][2] == "X" || gameboard[2][0] == "X" && gameboard[2][1] == "X" && gameboard[2][2] == "X" || gameboard[0][0] == "X" && gameboard[1][0] == "X" && gameboard[2][0] == "X" || gameboard[0][1] == "X" && gameboard[1][1] == "X" && gameboard[2][1] == "X" || gameboard[0][2] == "X" && gameboard[1][2] == "X" && gameboard[2][2] == "X" || gameboard[0][0] == "X" && gameboard[1][1] == "X" && gameboard[2][2] == "X" || gameboard[0][2] == "X" && gameboard[1][1] == "X" && gameboard[2][0] == "X") {
			cout << "Player 1 Wins!" << endl;
			cout << "Play Again? (Y - N): ";
			cin >> restart;
			while (restart != "Y" && restart != "y" && restart != "N" && restart != "n") {
				cout << "INVALID INPUT" << endl;
				cout << "Play Again? (Y - N): ";
				cin >> restart;
			}
			if (restart == "Y" || restart == "y") {
				turn = -1;
				for (int x = 0; x <= 2; x++) {
					for (int y = 0; y <= 2; y++) {
						gameboard[x][y] = " ";
					}
				}
			}
			else if (restart == "N" || restart == "n") {
				return 0;
			}
			restart = "";
		}
		else if (gameboard[0][0] == "O" && gameboard[0][1] == "O" && gameboard[0][2] == "O" || gameboard[1][0] == "O" && gameboard[1][1] == "O" && gameboard[1][2] == "O" || gameboard[2][0] == "O" && gameboard[2][1] == "O" && gameboard[2][2] == "O" || gameboard[0][0] == "O" && gameboard[1][0] == "O" && gameboard[2][0] == "O" || gameboard[0][1] == "O" && gameboard[1][1] == "O" && gameboard[2][1] == "O" || gameboard[0][2] == "O" && gameboard[1][2] == "O" && gameboard[2][2] == "O" || gameboard[0][0] == "O" && gameboard[1][1] == "O" && gameboard[2][2] == "O" || gameboard[0][2] == "O" && gameboard[1][1] == "O" && gameboard[2][0] == "O") {
			cout << "Player 2 Wins!" << endl;
			cout << "Play Again? (Y - N): ";
			cin >> restart;
			while (restart != "Y" && restart != "y" && restart != "N" && restart != "n") {
				cout << "INVALID INPUT" << endl;
				cout << "Play Again? (Y - N): ";
				cin >> restart;
			}
			if (restart == "Y" || restart == "y") {
				turn = -1;
				for (int x = 0; x <= 2; x++) {
					for (int y = 0; y <= 2; y++) {
						gameboard[x][y] = " ";
					}
				}
			}
			else if (restart == "N" || restart == "n") {
				return 0;
			}
			restart = "";
		}
		//to detrermine which players turn
		else if (turn % 2 == 0) {
			cout << "Player 1 Turn" << endl;

			cout << "Type X Axis: ";
			cin >> xAxis;
			while (xAxis != 1 && xAxis != 2 && xAxis != 3) {
				cout << "INVALID INPUT" << endl;
				cout << "Type X Axis: ";
				cin >> xAxis;
			}

			cout << "Type Y Axis: ";
			cin >> yAxis;
			while (yAxis != 1 && yAxis != 2 && yAxis != 3) {
				cout << "INVALID INPUT" << endl;
				cout << "Type Y Axis: ";
				cin >> yAxis;
			}
			xAxis--;
			yAxis--;

			while (gameboard[yAxis][xAxis] != " ") {
				cout << "INVALID INPUT IT IS ALREADY OCCUPIED" << endl;
				cout << "Type X Axis: ";
				cin >> xAxis;
				while (xAxis != 1 && xAxis != 2 && xAxis != 3) {
					cout << "INVALID INPUT" << endl;
					cout << "Type X Axis: ";
					cin >> xAxis;
				}

				cout << "Type Y Axis: ";
				cin >> yAxis;
				while (yAxis != 1 && yAxis != 2 && yAxis != 3) {
					cout << "INVALID INPUT" << endl;
					cout << "Type Y Axis: ";
					cin >> yAxis;
				}
				xAxis--;
				yAxis--;
			}
			gameboard[yAxis][xAxis] = "X";
		}
		else if (turn % 2 != 0) {
			cout << "Player 2 Turn" << endl;

			cout << "Type X Axis: ";
			cin >> xAxis;
			while (xAxis != 1 && xAxis != 2 && xAxis != 3) {
				cout << "INVALID INPUT" << endl;
				cout << "Type X Axis: ";
				cin >> xAxis;
			}

			cout << "Type Y Axis: ";
			cin >> yAxis;
			while (yAxis != 1 && yAxis != 2 && yAxis != 3) {
				cout << "INVALID INPUT" << endl;
				cout << "Type Y Axis: ";
				cin >> yAxis;
			}
			xAxis--;
			yAxis--;

			while (gameboard[yAxis][xAxis] != " ") {
				cout << "INVALID INPUT IT IS ALREADY OCCUPIED" << endl;
				cout << "Type X Axis: ";
				cin >> xAxis;
				while (xAxis != 1 && xAxis != 2 && xAxis != 3) {
					cout << "INVALID INPUT" << endl;
					cout << "Type X Axis: ";
					cin >> xAxis;
				}

				cout << "Type Y Axis: ";
				cin >> yAxis;
				while (yAxis != 1 && yAxis != 2 && yAxis != 3) {
					cout << "INVALID INPUT" << endl;
					cout << "Type Y Axis: ";
					cin >> yAxis;
				}
				xAxis--;
				yAxis--;
			}
			gameboard[yAxis][xAxis] = "O";
		}
		cout << endl;
		
	}
	return 0;
}
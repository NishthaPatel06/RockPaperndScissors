#include <iostream>
#include <stdlib.h>

//NISHTHA PATEL - 200474598
//ROCK,PAPER AND SCISSORS GAME

using namespace std;

int userChoice = 0;//user will choose one option
int computerChoice = 0;

// Constant variables
const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSORS = 'S';

char getComputerTurn() 
{
    //Any Random number:
    int a = rand() % 3 + 1;

    if(a==1) return 'R';
    if(a==2) return 'P';
    if(a==3) return 'S';
}

char getUserTurn() 
{
    char c;
    cout << "It's time for Rock, Paper and Scissors!" << endl;
    cout << "Choose one of the following choice"<< endl;
    cout << "-----------------------------------"  << endl;
    cout << "(R) - Rock " << endl << "(P) - Paper" << endl << "(S) - Scissors " << endl;
    cin >> c;
    
    while (c!='R' && c!='P' && c!='S' )
    {
        cout << "Please ! Choose one of the following choice only." << endl;
        cout << "(R) - Rock " << endl << "(P) - Paper" << endl << "(S) - Scissors " << endl;
        cin >> c;
    }

    return c;
}

void showSelectOption(char op)//op variable for options
 {
    if (op == 'R') cout << "Rock" << endl;
    if (op == 'p') cout << "Paper" << endl;
    if (op == 'S') cout << "Scissors" << endl;
}

void chWinner(char uTurn, char cTurn)
 {
    if (uTurn == ROCK && cTurn == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
        computerChoice++;
    }
    else if (uTurn == ROCK && cTurn == SCISSORS) {
        cout << "You Win! Rock smashes scissors."<< endl;
        userChoice++;
    }
    else if (uTurn == PAPER && cTurn == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        userChoice++;
    }
    else if (uTurn == PAPER && cTurn == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        computerChoice++;
    }
    else if (uTurn == SCISSORS && cTurn == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
        userChoice++;
    }
    else if (uTurn == SCISSORS && cTurn == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        computerChoice++;
    }
    else{
        cout << "Game is Tie! Play again!" << endl;
    }
}

int main() {
    //User's choice
    char useChoice; 
    //Computer's choice
    char comChoice;

do{
    useChoice = getUserTurn();
    cout << "Your selection: "<< endl;
    showSelectOption(useChoice);
    
    cout << "Computer's selection: "<< endl;
    comChoice = getComputerTurn();
    showSelectOption(comChoice);
    
    chWinner(useChoice, comChoice);
}

while (useChoice != 3 && comChoice != 3);

if(useChoice > comChoice) {
	cout << "Congrats ,You win!" << endl;
}
else{
	cout << "Computer win!" << endl;
}
    

    return 0;
}

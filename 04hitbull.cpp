#include <iostream>
using namespace std;

int main () {
    bool bull[4][4] = {
        {1,0,0,1},
        {0,0,0,0},
        {1,0,1,0},
        {0,0,0,1}
    };
    // gussing the bull
    int correct_guess=0;
    // countin the  number of turns the player played
    int number_of_turns=0;
    // printing the number of turns the player have to correct_guess the bull
    cout<<"You have 8 attempts in which you have to guess correct position 5 times"<<endl;
    int i;
    for (i=1; i<=8; i++){
        int row;
        int column;
        // asking the position of row and column from the user
        cout<<"Enter the position of row: ";
        cin>>row;
        cout<<"Enter the position of column: ";
        cin>>column;
        if (bull[row][column]){
            cout<<"Your guess is correct"<<endl;
            correct_guess++;
            number_of_turns++;
            bull[row][column]=0;
        }
        else{
            cout<<"Your guess is wrong"<<endl;
            number_of_turns++;
        }
        cout<<"You have "<<(8-i)<<" turns left out of 8"<<endl;
        cout<<"You guess "<<correct_guess<<" times correctly"<<endl;
        if (correct_guess==5){
            cout<<"Hurray !, You won the game"<<endl;
            break;
        }
        else if ( ( (correct_guess==5) && (i==8)) ){
             cout<<"Hurray !, You won the game"<<endl;
            break;
        }
        else
            continue;
    }
    if (correct_guess==5){
        cout<<"Hurray !, You won the game"<<endl;
    }
    else {
        cout<<"Better luck, try again next time."<<endl;
        cout<<"You loose the game  with "<<(8-correct_guess)<<" points out of 8.";
    }
	return 0;
}
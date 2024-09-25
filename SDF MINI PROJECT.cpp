// rock beats scissors
// paper beats rock
// scissors beats paper

// all other states result in a draw, and the game is 3 times, final scores are
//recorded and the winner is announced.

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void rps() //creating a function for our game
{
    #define ROCK 1
    #define PAPER 2
    #define SCISSORS 3

// Define preprocessor constants for ROCK, PAPER and SCISSORS which will
// represent with the integers 1-3.  We'll randomly select an integer from
// 1-3 to represent the "AI move".  Using these constants in our program also
// makes it easier to read than directly using 1,2,3.

    cout<<"\t WELCOME TO ROCK-PAPER-SCISSORS \t";
    cout<<endl;
    cout<<endl;

    srand((unsigned int) time(NULL));

// Seed the random number generator with the current time to ensure the
// possibility of different sequences of random numbers each time the program
// is executed.


    string name;
    int player_throw = 0;  //stores player's throw
    int i=0;
    int ai_throw = 0;  //stores AI's throw
    int player_score = 0;  //stores player's score
    int ai_score = 0;   //stores AI's score


    cout<<"ENTER PLAYER NAME : "<<endl;
    cin>>name;


        for(i=0;i<3;i++)

        // Prompt the user to enter their throw, store it into player_throw

        {
            cout << "Select your throw." << endl;
            cout << "1) Rock" << endl;
            cout << "2) Paper" << endl;
            cout << "3) Scissors" << endl;
            cout << "Selection: ";
            cin >> player_throw;

            cout<<endl;

    // Randomly select an integer from 1-3 to represent the AI throw.  The
    // rand() function returns a random integer between 0 and a very large
    // positive integer.  If we take any integer in this range and apply
    // "modulus 3", i.e. rand() % 3, we will get an integer in the range 0-2.
    // This is because % 3 returns the remainder of dividing by 3, and the
    // only possibilities for a remainder after division by 3 are 0,1,2. We
    // then add 1 to this with +1 to shift the range up from 0-2 to 1-3.

            ai_throw = (rand()%3) + 1;

            if(ai_throw==ROCK)
            {
                cout<<"AI THROWS ROCK"<<endl;
            }

            else if (ai_throw == PAPER)
            {
                cout<<"AI THROWS PAPER"<<endl;
            }

            else if (ai_throw == SCISSORS)
            {
                cout<<"AI THROWS SCISSORS"<<endl;
            }

            if(player_throw == ai_throw)
            {
                cout<<"IT IS A DRAW"<<endl;
            }
            else if(player_throw == ROCK && ai_throw == SCISSORS)
            {
                cout<<"ROCK BEATS SCISSORS, PLAYER WINS"<<endl;
                player_score++;
            }
            else if(player_throw == SCISSORS && ai_throw == ROCK)
            {
                cout<<"ROCK BEATS SCISSORS, AI WINS"<<endl;
                ai_score++;
            }
            else if(player_throw == PAPER && ai_throw == ROCK)
            {
                cout<<"PAPER BEATS ROCK, PLAYER WINS"<<endl;
                player_score++;
            }
            else if(player_throw == ROCK && ai_throw == PAPER)
            {
                cout<<"PAPER BEATS ROCK, AI WINS"<<endl;
                ai_score++;
            }
            else if(player_throw == SCISSORS && ai_throw == PAPER)
            {
                cout<<"SCISSORS BEATS PAPER, PLAYER WINS"<<endl;
                player_score++;
            }
            else if(player_throw == PAPER && ai_throw == SCISSORS)
            {
                cout<<"SCISSORS BEATS PAPER, AI WINS"<<endl;
                ai_score++;
            }

            cout<<endl;
}



    cout<< "\t FINAL SCORE \t"<<endl;
    cout<< "PLAYER SCORE : "<<player_score<<endl;
    cout<< "AI SCORE : "<<ai_score<<endl<<endl;

    if(player_score>ai_score)
    {
        cout<<"CONGRATULATIONS "<<name << "!! YOU  WON THE 3 GAME SERIES "<<player_score<<" - "<<ai_score<<endl;
    }
    else if(player_score<ai_score)
    {
        cout<<"HARD LUCK! AI WON THE 3 GAME SERIES "<<ai_score<<" - "<<player_score<<endl;
    }
    else if(player_score==ai_score)
    {
        cout<<"SERIES DRAWN "<<player_score<<" - "<<ai_score;
    }

}
int main()
{
    rps();

    return 0;
}

// Written by Drake Fisher
// 9/20/2016

#include <iostream>
#include <cstdlib>    
#include <ctime> 
using namespace std;

class gameTools {
   public:                                
      void playerPoint(int playerScore);       
      void opponentPoint(int opponentScore);
      int liveplayerScore = 0;
      int liveopponentScore = 0;

};

void gameTools::playerPoint(int playerScore) {
   liveplayerScore = playerScore + 1;
   return;
}

void gameTools::opponentPoint(int opponentScore) {
   liveopponentScore = opponentScore + 1;
   return;
}

int main() {


   int numRounds = 0;
   int goalNum = 0;
   int playerChoice = 0;
   int botChoice = 0;
   
   srand(0);
   
   gameTools newgame1;
   
   // Asks the user how many rounds they want to play
   while(goalNum == 0){
      cout << "Would you like to play best of 3, 5 or 7?" << endl;
      cin >> numRounds;
      if(numRounds == 3){
         goalNum = 2;
      }
      else if(numRounds == 5){
         goalNum = 3;
      }
      else if(numRounds == 7){
       goalNum = 4;
      }
    else{
         cout << "Sorry, please try again with a valid answer." << endl;
      }
   }
   
   cout << "For this game type 1 to play rock, 2 to play scissors, or 3 to play paper" << endl;

   // Game loop
   while(newgame1.liveplayerScore < goalNum && newgame1.liveopponentScore < goalNum){
      botChoice = ((rand() % 3)+ 1);
      
      cout << "Rock(1), Paper(2), or Scissors(3)?" << endl;
      cin >> playerChoice;
      
      if(playerChoice == 1){
         if(botChoice == 1){
            cout<<"Both chose rock.It's a draw, no points given." << endl;
         }
         else if(botChoice == 2){
            cout<<"Opponent chose paper, which beats rock. 1 point to opponent." << endl;
            newgame1.opponentPoint(newgame1.liveopponentScore);
         }
         else if(botChoice == 3){
            cout<<"Opponent chose scissors, which loses to rock. 1 point to player." << endl;
            newgame1.playerPoint(newgame1.liveplayerScore);
         }
      }
      if(playerChoice == 2){
         if(botChoice = 1){
            cout<<"Opponent chose rock, which loses to paper. 1 point to player." << endl;
            newgame1.playerPoint(newgame1.liveplayerScore);
         }
         else if(botChoice = 2){
            cout<<"Both chose paper.It's a draw, no points given." << endl;
         }
         else if(botChoice = 3){
            cout<<"Opponent chose scissors, which beats paper. 1 point to opponent." << endl;
            newgame1.opponentPoint(newgame1.liveopponentScore);
         }
      }
      if(playerChoice == 3){
         if(botChoice = 1){
            cout<<"Opponent chose rock, which beats scissors. 1 point to opponent." << endl;
            newgame1.opponentPoint(newgame1.liveopponentScore);
         }
         else if(botChoice = 2){
            cout<<"Opponent chose paper, which loses to scissors. 1 point to player." << endl;
            newgame1.playerPoint(newgame1.liveplayerScore);
         }
         else if(botChoice = 3){
            cout<<"Both chose scissors.It's a draw, no points given." << endl;
         }
      }
      cout << "Current score:";
      cout << "Player: " << newgame1.liveplayerScore <<", Opponent: " << newgame1.liveopponentScore << endl;
      cout << "Playing best of " << numRounds << endl;
      
   }
   
   if(newgame1.liveplayerScore == goalNum){
      cout << "Player wins! " << newgame1.liveplayerScore << " : " << newgame1.liveopponentScore << endl;
   }
   
   else if(newgame1.liveopponentScore == goalNum){
      cout << "Opponent wins! " << newgame1.liveopponentScore << " : " << newgame1.liveplayerScore << endl;
   }
      
   
}
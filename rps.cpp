#include <iostream>
#include <stdlib.h>

int main() {
  using namespace std;
  srand (time(NULL));

  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";

  while (true) {
    cout << "1) ✊\n";
    cout << "2) ✋\n";
    cout << "3) ✌️\n";
  
    cout << "shoot! ";
    int computer = rand() %3 + 1;
    int user = 0;
    cin >> user;

    if (user == 1){
        cout << "You chose rock!\n";
    }
    else if (user == 2){
        cout << "You chose paper!\n";
    }
    else{
        cout << "You chose scissors!\n";
    }

    if (computer == 1){
        cout << "Computer chose rock!\n";
    }
    else if (computer == 2){
        cout << "Computer chose paper!\n";
    }
    else{
        cout << "Computer chose scissors!";
    }

    if (computer == user){
        cout << "You chose the same thing! Try again\n";
        continue;
    }
    else if (user == 1){
        if (computer == 2){
        cout << "Paper covers rock. You lose\n";
        }
        else{
        cout << "Rock breaks scissors. You win\n";
        }
    }
    else if (user == 2){
        if (computer == 1){
        cout << "Paper covers rock. You win!\n";
        }
        else{
        cout << "Scissors cut paper. You lose!\n";
        }
    }
    else{
        if (computer == 1){
        cout << "Rock breaks scissors. You lose\n";
        }
        else{
        cout << "Scissors cut paper. You win!\n";
        }
    }
  }
  return 0;
}
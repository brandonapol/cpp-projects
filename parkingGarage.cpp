#include <iostream>
#include <stdlib.h>
#include <map>

class ParkingGarage {
    private:
        int spaces = 10;
        int choice = 0;
    public:
        int getSpaces() {
            return spaces;
        }; 
        void removeSpace() {
            spaces = spaces - 1;
        }
        void addSpace() {
            spaces = spaces += 1;
        }
        int getChoice() {
            return choice;
        }
        void setChoice(int new_choice) {
            choice = new_choice;
        }
        void showSpaces(){
            std::cout << "There are " << getSpaces() << " remaining.\n";
        }
        void decisionTree(){
            while (true){
                int new_user_choice;
                std::cout << "What would you like to do? \n1) Take Ticket\n2) Checkout\n3) Show Availability\n4) Quit \nYour choice (1-4): ";
                std::cin >> new_user_choice;
                setChoice(new_user_choice);
                if (choice == 1) {
                    takeTicket();
                    showSpaces();
                }
                else if (choice == 2) {
                    checkout();
                }
                else if (choice == 3) {
                    showSpaces();
                }
                else {
                    break;
                };
            }
        };
        void takeTicket() {
            if (getSpaces() <= 0) {
                std::cout << "There is no room in the garage.\n";
            }
            else {
                std::cout << "You have taken a ticket.\n";
                removeSpace();
            };
        };
        void checkout(){
            if (getSpaces() >= 10){
                std::cout << "There are no cars in the garage.\n";
            }
            else {
                std::cout << "Have a great day!\n";
                addSpace();
            }
        }
};

int main(){
    ParkingGarage payMe;
    payMe.decisionTree();
    return 0;
}
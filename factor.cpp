// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec 2021
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display the factor of that number.
#include <iostream>
#include <iomanip>


int askAgain() {
    std::string askToPlay;
    std::cout << "Would you like to play again(y/n):  ";
    std::cin >> askToPlay;
    if (askToPlay == "y" || askToPlay == "Y") {
        // state varaibles
        int counter;
        int factor;
        int userNum;
        std::string userNumString;

        // get the user number as a string
        std::cout << "Enter a postive number: ";
        std::cin >> userNumString;

        try {
            // convert the user's guess to an int
            userNum = std::stoi(userNumString);

            // check if the guess is correct
            if (userNum > 0) {
                // calculate the sum of all numbers from 0 to user number
        
                std::cout << "Factors of " << userNum << " are: ";  
                for(counter = 1; counter <= userNum; ++counter) {
                    if(userNum % counter == 0)
                        std::cout << counter << " ";
                }
                std::cout << "" << std::endl;
                std::cout << "" << std::endl;
                askAgain();
            
                return 0;
            
            } else {
                std::cout << "You entered a negative number, please try again.";
                std::cout << "" << std::endl;
            }
        // Tells the user that they didn't input an integer
        } catch (std::invalid_argument) {
            // The user did not enter an integer.
            std::cout << userNumString << " is "
                                            "not an integer.\n";
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
        }
    askAgain();
    } else if (askToPlay == "n" || askToPlay == "N") {
        std::cout << "Thank you for using my app! \n";
    } else {
      std::cout << "Please enter either y/n \n";
      askAgain();
    }
}


int main() {
  // initialize the powerOfTwo
  int counter;
  int factor;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a postive number: ";
  std::cin >> userNumString;

  try {
        // convert the user's guess to an int
        userNum = std::stoi(userNumString);

        // check if the guess is correct
        if (userNum > 0) {
            // calculate the sum of all numbers from 0 to user number
        
            std::cout << "Factors of " << userNum << " are: ";  
            for(counter = 1; counter <= userNum; ++counter) {
                if(userNum % counter == 0)
                    std::cout << counter << " ";
            }
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            askAgain();
            
            return 0;
            
        } else {
            std::cout << "You entered a negative number, please try again.";
            std::cout << "" << std::endl;
    }
        // Tells the user that they didn't input an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userNumString << " is "
                                              "not an integer.\n";
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
    }
askAgain();
}
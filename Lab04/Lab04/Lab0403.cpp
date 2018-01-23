//
//  Lab0403.cpp
//  Lab04
//
//  Created by Milind Pathiyal on 10/3/17.
//  Copyright © 2017 Milind Pathiyal. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    unsigned int x;
    unsigned int y;
    int userAnswer = 0;
    int attempt = 0;
    int correct = 0;
    int gameOver = 0;
        while(userAnswer >= 0)
        {
            x = rand() % 9;
            y = rand() % 9;

            cout << "How much is " << x << " times " << y << "?" << endl;
            cin >> userAnswer;
            gameOver = userAnswer;
            if(userAnswer == x*y){
                cout << "Correct!" << endl;
                if(attempt == 0){
                    correct++;
                }
            }
            else
            {
                
                
                while((userAnswer != x*y && userAnswer >= 0) || gameOver == -1){
                    if(gameOver == -1){
                       cout << "You answered " << correct << " questions correctly!" << endl;
                        gameOver = 2;
                        userAnswer = -1;
                    }
                    else{
                    cout << "How much is " << x << " times " << y << "?" << endl;
                    cin >> userAnswer;
                    attempt ++;
                    }
                    
                }
              
            }

        }
    
        attempt = 0;
}
 

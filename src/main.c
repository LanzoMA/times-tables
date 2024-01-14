#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "game.h"

int main(int argc, char** argv) {
    const int maxNumber = *(argv+1) == NULL ? 12 : atoi(*(argv+1));

    printf("Max Number: %d\n", maxNumber);

    bool running = true;
    unsigned int score = 0;

    while (running) {
        const unsigned int correctAnswer = initQuestion(maxNumber);
        const unsigned int answerFromUser = inputAnswer();

        if (answerFromUser == correctAnswer) { 
            score++;
            continue; 
        }

        running = false;
    } 

    printf("You scored %d.\n", score);
}


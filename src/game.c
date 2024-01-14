#include "game.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const unsigned int initQuestion(const int maxNumber) {
    srand(time(0));

    const unsigned int firstNumber = (rand() % maxNumber) + 1;
    const unsigned int secondNumber = (rand() % maxNumber) + 1;

    printf("%d * %d = ", firstNumber, secondNumber);

    const unsigned int correctAnswer = firstNumber * secondNumber;

    return correctAnswer;
}

const unsigned int inputAnswer() {
    unsigned int getAnswer;
    scanf("%d", &getAnswer);
    
    if (getAnswer < 0) {
        printf("Enter an answer above 0.");
        getAnswer = inputAnswer();
    }

    return getAnswer;
}

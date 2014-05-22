/* 
 * File:   main.c
 * Author: roy.smart
 *
 * Created on May 22, 2014, 11:33 AM
 */

#include <stdio.h>
#include <stdlib.h>

void printBoolean(int);
void problem_1(int, int);
void problem_2(int, int);
void problem_3(int, int);
void problem_4(int);
void problem_5(int, int);

/*
 * main tests the functions that are described in the Lab 3 problem statement
 */
int main(int argc, char** argv) {
    int condition_A, condition_B;

    int i, j, k; //Looping variables
    for (i = 1; i < 7; i++) {
        if (i == 4) { //Do problem 4
            for (j = 0; j < 11; j++) {
                problem_4(j);
            }
        } else {
            for (j = 0; j < 2; j++) {
                for (k = 0; k < 2; k++) {
                    condition_A = j;
                    printf("A:");
                    printBoolean(condition_A);
                    condition_B = k;
                    printf("B:");
                    printBoolean(condition_B);
                    switch (i) {
                        case 1:
                            problem_1(condition_A, condition_B);
                            break;
                        case 2:
                            problem_2(condition_A, condition_B);
                            break;
                        case 3:
                            problem_3(condition_A, condition_B);
                            break;
                        case 5:
                            problem_5(condition_A, condition_B);
                            break;
                        default:
                            puts("problem invalid");
                            break;
                    }
                }
            }            
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

/*prints the requested boolean values*/
void printBoolean(int condition) {
    if (condition) {
        printf(" true \n");
    } else {
        printf(" false \n");
    }
}

/*
 * Problem 1:
 * Take two ints and print the logical conditions based off of the problem
 * statement
 */
void problem_1(int condition_A, int condition_B) {
    if (condition_A && !condition_B) {
        printf("X \n");
    } else {
        printf("Y \n");
    }
}

/*Problem 2: write a function that does actions based off of problem statement*/
void problem_2(int condition_A, int condition_B) {
    if (!condition_A && !condition_B) {
        printf("Y \n");
    } else {
        printf("X \n");
    }
}

/*problem 3: Use De Morgans laws to write a function equivalent to problem_2*/
void problem_3(int condition_A, int condition_B) {
    if (!(condition_A || condition_B)) {
        printf("Y \n");
    } else {
        printf("X \n");
    }
}

/*Problem 4: write a switch statement that prints the goldilocks value of the function*/
void problem_4(int input_condition) {
    switch (input_condition) {
        case 0:
        case 1:
        case 2:
        case 3:
            printf("Too Low\n");
            break;
        case 4:
        case 5:
            printf("Just right!\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Too high\n");
            break;
        default:
            printf("Sorry 0 through 9 is all I can do\n");
            break;
    }
}

/*Problem 5: Correctly executes the problem statement truth table*/
void problem_5(int condition_A, int condition_B){
    if(condition_A == condition_B){
        printf("X \n");
    }
    else{
        printf("Y \n");
    }
}

/*Extra Credit: change the function so it prints */
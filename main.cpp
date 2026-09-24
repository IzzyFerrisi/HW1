/*
 * Full Name:     Isabella Ferrisi
 * Student ID:    002077163
 * Course:        EECE 2140 - Computing Fundamentals for Engineers
 * Section:       05
 * Semester:      Fall 2026
 * Assignment:    Homework 1 - Quiz Grade Analyzer
 * Compilation:   g++ -std=c++11 main.cpp -o main
 * Description:   Reads an unknown number of quiz scores from standard
 *                input and reports the count, sum, minimum, maximum,
 *                average, and letter grade for the quiz.
 */
    // TODO 1: Declare and initialize the variables you will need to keep
    //         a running count, sum, minimum, and maximum of the scores
    //         entered so far. Give each one a starting value that will
    //         not produce an incorrect result before any score has been
    //         read.

    // TODO 2: Print this prompt exactly once, before reading any input:
    //         "Enter quiz scores (Ctrl+D / Ctrl+Z to end):"

    // TODO 3: Read scores one at a time, for as many scores as the user
    //         enters, updating your count/sum/min/max variables for each
    //         score read. You do not know in advance how many scores
    //         will be entered, so the number of times you read a score
    //         must not be fixed or asked from the user.

    // TODO 4: If no scores were entered, print exactly:
    //         "No scores were entered."
    //         and end the program without doing anything else below.

    // TODO 5: Compute the class average as a value that can represent a
    //         fraction (not truncated to a whole number).

    // TODO 6: Declare named const variables for the five grade cutoffs
    //         described in the assignment (90, 80, 70, 60), then use
    //         them (not the raw numbers) to determine the correct letter
    //         grade for the average.

    // TODO 7: Print the final summary in the exact format described in
    //         the assignment:
    //         --- Quiz Summary ---
    //         Scores entered: <count>
    //         Sum: <sum>
    //         Minimum: <minimum>
    //         Maximum: <maximum>
    //         Average: <average>
    //         Letter grade: <letter>

#include <iostream>

int main()
{

    // TODO 1: Declaring and initializing needed varibales
    // all starting at 0 except for minimum so that when new scores are enter, if it is less than 100 or the previous score, it will adjust the new  minimum
    // variables set as doubles so that it can display decimals

double scores = 0;
double sum = 0.0;
int count = 0;
double minimum = 100.0;
double maximum = 0.0;
double average = 0.0;

    // TODO 2: Printing exact statement

std::cout << "Enter quiz scores (Ctrl+D / Ctrl+Z to end): ";

    // TODO 3: Reading scores one at a time using a while loop
    // while there are inputs, they will be put into the scores variable
    // each time there is a new number input, count variable will be incremented
    // the sum variable will be added to with each new score input
    // if statement for max and min - if the new score input is less than minimum (starting at 100), minimum will be assigned that score
    // if new score is greater than maximum (starting at 0), maximum will be assigned that score

while (std::cin >> scores){
    count++;
    sum += scores;
    if (scores < minimum) {minimum = scores;}
    if (scores > maximum) {maximum = scores;}
}

    // TODO 4: Print statement for is no scores were enetered

if (count == 0) {
    std::cout << "No scores were entered..." << std::endl;
    return 0;
}

    // TODO 5: Calculating the class avergae by dividing the sum by the count

average = sum/count;

    // TODO 6: Declaring const named variables for grade cutoffs and assigning Letter grades as char
    // If else statements to give the class average its letter grade correctly

const int Agrade = 90;
const int Bgrade = 80;
const int Cgrade = 70;
const int Dgrade = 60;
char LetterGrade = 'F';

if (average >= Agrade) {
    LetterGrade = 'A';
    std::cout << "Letter grade: A" << std::endl;
}
else if (average >= Bgrade) {
    LetterGrade = 'B';
    std::cout << "Letter grade: B" << std::endl;
}
else if (average >= Cgrade) {
    LetterGrade = 'C';
    std::cout << "Letter grade: C" << std::endl;
}
else if (average >= Dgrade) {
    LetterGrade = 'D';
    std::cout << "Letter grade: D" << std::endl;
}
else {
    LetterGrade = 'F';
    std::cout << "Letter grade: F" << std::endl;
}

    // TODO 7: Printing statement for final summary

std::cout << "--- Quiz Summary ---" << std::endl;
std::cout << "Scores Entered:" << count << std::endl;
std::cout << "Sum: " << sum << std::endl;
std::cout << "Minimum: " << minimum << std::endl;
std::cout << "Maximum: " << maximum << std::endl;
std::cout << "Average: " << average << std::endl;
std::cout << "Letter grade: " << LetterGrade << std::endl;

return 0;
}

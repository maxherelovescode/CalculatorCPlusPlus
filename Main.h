#ifndef MAIN_H
#define MAIN_H

extern const std::string WELCOME_MESSAGE = "Max's Calculator";
extern const std::string INPUT_MESSAGE = "Enter 2 Numbers (Space in between): ";
extern const std::string INPUT_ERROR = "Invalid input. Please enter a number: ";
extern const std::string OPERATOR_MESSAGE = "Enter Operation (+ - * /): ";
extern const std::string OPERATOR_ERROR = "Invalid operator. Please enter a valid operator (+ - * /): ";
extern const std::string THANK_YOU_MESSAGE = "Thank you for using this calculator";


void getInput(float& num1, float& num2, char& op);
void calculateResult(float num1, float num2, char op);

#endif // !MAIN_H

#include <iostream>
using namespace std;

int squareNumbers(int x){ // Declares function "squareNumbers" that takes in parameter of x.
    int y;
    y=x*x; //creates int variable equating to x squared
    return y; //returns the value of y when the function is called
}

int main(){ 
    int output, input = 9; 
    output = squareNumbers(input); 
    cout << output <<std::endl;
    //the function is called, resulting in the int variable "output" equating input squared
}
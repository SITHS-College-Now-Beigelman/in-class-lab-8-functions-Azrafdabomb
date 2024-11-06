// Azraf Hossain
// 11/4/24
// Lab 8
#include <iostream>  // Include for input and output operations
#include <cmath>      // Include for mathematical functions
#include <cctype>     // Include for character handling functions
#include <iomanip>    // Include for manipulators used to format output
using namespace std; // Makes all the names in the std namespace available

int doubleMultiply(int a, int b) // defines a funtion and its parameters
{
    int product;
    product = a * b * 2; // defines and sets product to be based off of the parameters given // TWICE the product of the values
    return product;
}
int getSum(double sum1, double sum2, double sum3) // defines my sum function
{
    double result; // make a variable to hold sum
    result = sum1 + sum2 + sum3; // add the three numbers
    return result; // return sum

}
int main() 
{
    double number; // define variable

    cout << "Enter a number:"; // prompt user and hold the number they input
    cin >> number;

    cout << sqrt(number) << endl; // use preset functions to calculate these values
    cout << pow(number, 4) << endl;
    cout << floor(number) << endl;

    int num1, num2; // defining variables
    cout << "Enter two integers: "; // promts user to input values
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl; // calls the function and returns twice the product of the values

    system("PAUSE"); // pauses the code until user presses a key

    int summ1; // defining variables
    int summ2;
    int summ3;
    cout << "Enter three numbers: " << endl; // prompt and receieve user input for the three numbers
    cin >> summ1 >> summ2 >> summ3;
    cout << "The sum is : " << getSum(summ1, summ2, summ3) << endl; // use the getSum function using the user inputs as parameters

    return 0;
}
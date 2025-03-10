#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "# SecondLegPracticeCpp"<<endl<<endl;
    cout << "# Lets practice what we have been studying."<<endl<<endl;

    cout << "1. Chico is 1.50 meters tall and grows 2 centimeters per year, while Ze is 1.10 meters tall and grows 3 centimeters per year. Create an algorithm that calculates and prints how many years it will take for Zé to be taller than Chico." <<endl<<endl;
    
    float heightChico =1.5;
    float heightZe = 1.1;
    const float growthChico = 0.02;
    const float growthZe = 0.03;
    int counterYears = 1;
    while (heightZe < heightChico)
    {
        heightChico = heightChico + growthChico;
        heightZe = heightZe + growthZe;
        counterYears++;
    }
    cout << "After " << counterYears << " years, Ze has become taller than Chico. Ze is " << heightChico << "m tall and Chico is " << heightZe << "m tall.";

    cout <<endl<<endl;

    cout << "2. Create an algorithm that reads an undetermined set of values and reports, at the end, the highest and lowest values read. The algorithm should end if the user enters a negative value or the value 0." <<endl<<endl;

    int bigger = 0;
    int lower = 2147483647;
    int numberInformed = 1;
    while (numberInformed > 0)
    {
        cout << "Inform an value:";
        cin >> numberInformed;

        if (numberInformed > 0)
        {
            if (numberInformed < lower)
            {
                lower = numberInformed;
            }

            if (numberInformed > bigger)
            {
                bigger = numberInformed;
            }
        }
    }

    if (bigger == 0)
    {
        cout<<"No number entered";
    }
    else
    {
        cout<<"Among all the numbers entered, the largest was " << bigger << " and the smallest was " << lower;
    }

    cout <<endl<<endl;

    cout << "3. Create an algorithm that requests a value from the user and generates the multiplication table for that value. For example, if the user enters the value 2, the multiplication table for the number 2 should be generated, ranging from 0 to 10." <<endl<<endl;

    int number;
    cout << "Inform the number:";
    cin >> number;
    cout << "The multiplication table for the value " << number << " is:" << endl;
    for (int factor = 0; factor <= 10; factor++)
    {
        cout << factor << " X " << number << " = " << (factor * number) << endl;
    }

    cout <<endl<<endl;

    cout << "4. Create a program that requests an undetermined number of whole numbers from the user. The program should calculate and write the arithmetic mean of only even numbers. Data entry should end when the number 0 (ZERO) is entered." <<endl<<endl;

    int add = 0;
    int count = 0;
    number = 0;
    do
    {
        cout << "Inform the number:";
        cin >> number;
        if (number != 0)
        {
            add += number;
            count++;
        }
    } while (number != 0);

    cout << count << " numbers were entered and the result of the sum is " << add << "."<<endl;
    cout << "Therefore, the average is " << ((float) add / (float) count) << endl;
    
    cout <<endl<<endl;

    cout << "5. Write a program that prompts the user for a positive real number. Check if the number is really positive, and if not, prompt the user to enter it again (this process can be repeated countless times and is called consistency, as it ensures that the number will be valid after data entry). Outputs: - Prompt to user ='Enter a positive real number'; - Valid number case = 'The number entered is valid'; - Invalid number case = 'Invalid number, try again'" <<endl<<endl;

    float floatNumber;
    cout << "Enter a positive real number";
    do{
        cin >> floatNumber;
        if (floatNumber < 0)
            cout << "Invalid number, try again";        
    } while (floatNumber < 0);
    cout << "The number entered is valid" << endl;

    cout <<endl<<endl;

    cout << "6. Write a program for a simple calculator that asks the user for two operands as input, selects one of the options from the list (1- sum, 2- product, 3- division, 4- power) and displays the result. The algorithm should run repeatedly until both operands are equal to zero." <<endl<<endl;

    float firstNumber, secondNumber, result;
    int operation;
    cout << "To exit, inform 0 in both operands"<<endl;
    do {
        cout << "Inform the first operand";
        cin >> firstNumber;
        cout << "Inform the second operand";
        cin >> secondNumber;
        cout << "Choose the operation: 1. addition; 2. multiplication; 3. division or 4. exponentiation";
        do{
            cin >> operation;
            switch (operation){
                case 1:
                    result = firstNumber + secondNumber;
                break;
                case 2:
                    result = firstNumber * secondNumber;
                break;
                case 3:
                    result = firstNumber / secondNumber;
                break;
                case 4:
                    result = pow(firstNumber, secondNumber); //from math.h library [#include <math.h>]
                break;
                default:
                    cout << "Invalid operation.";

            }
        } while (operation < 1 || operation > 4);

        cout << "The result of the operation is: " << result << endl;

    } while (firstNumber != 0 || secondNumber != 0);

    cout <<endl<<endl;

    cout << "7. Write an algorithm that asks for an integer value and reports, at the end, the factorial of this value. Note: for example, the factorial of 5 is 120, since 5 x 4 x 3 x 2 x 1 = 120."<<endl<<endl;

    number = 0;
    cout << "Inform the number:";
    cin >> number;
    int factorial = 1;
    while (number > 0){
        cout << "Multiplying by..." << number << endl;
        factorial *= number;
        number--;
    }

    cout << "The factorial number is " << factorial;

    cout <<endl<<endl;

    cout << "8. Write an algorithm that generates the Fibonacci series, up to the term n entered by the user. For example, if the user enters the value 6, 8 should be displayed on the screen. Note: Fibonacci series: 1, 1, 2, 3, 5, 8, 13, 21, ..."<<endl<<endl;

    int n, aux=3, temp, last=1, lastButOne=1;

    cout << "How much terms to show?";
    cin >> n;

    cout << lastButOne << endl << last << endl;

    while(aux<=n){
        cout << (last+lastButOne) << endl;

        temp = lastButOne;
        lastButOne = last;
        last = last + temp;

        aux++;
    }   

    cout <<endl<<endl;

    cout << "9. Write a program that asks for the ages of 10 people and displays the number of people who are 18 or older." <<endl<<endl;

    int olderThan18 = 0;
    int age;
    for (int i = 1; i <= 10; i++){
        cout << i << " - Inform the age";
        cin >> age;
        if (age >= 18)
            olderThan18++;
    }
    
    cout << "From 10 ages entered, " << olderThan18 << " are over 18 years old"<<endl;

    cout <<endl<<endl;

    cout << "10. Write a program that checks whether a number entered by the user is a prime number, that is, a number that is only divisible by 1 and itself. Outputs: - Request to the user = 'Enter an integer:' If it is prime = 'The number is prime'; - If it is not prime = 'The number is not prime'." <<endl<<endl;

    number = 0;
    cout << "Inform an integer number:";
    cin >> number;

    bool prime = true;

    for (int i = 2; i <= (number/2); i++){
        if (number % i == 0)
            prime = false;
        break;
    }

    if (prime)
        cout << "The number " << number << " is prime." << endl;
    else
        cout << "The number " << number << " is not prime." << endl;

    return 0;
}
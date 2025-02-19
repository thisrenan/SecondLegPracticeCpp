#include <iostream>

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

    cout << "5. Write a program that prompts the user for a positive real number. Check if the number is really positive, and if not, prompt the user to enter it again (this process can be repeated countless times and is called consistency, as it ensures that the number will be valid after data entry). Outputs: • Prompt to user ='Enter a positive real number'; • Valid number case = 'The number entered is valid'; • Invalid number case = 'Invalid number, try again'" <<endl<<endl;

    float floatNumber;
    cout << "Enter a positive real number";
    do{
        cin >> floatNumber;
        if (floatNumber < 0)
            cout << "Invalid number, try again";        
    } while (floatNumber < 0);
    cout << "The number entered is valid" << endl;



    
    return 0;
}
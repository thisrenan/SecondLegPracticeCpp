#include <iostream>

using namespace std;

int main()
{
    cout << "# SecondLegPracticeCpp"<<endl<<endl;
    cout << "# Lets practice what we have been studying."<<endl<<endl;
    
    cout << "1. Chico is 1.50 meters tall and grows 2 centimeters per year, while Zé is 1.10 meters tall and grows 3 centimeters per year. Create an algorithm that calculates and prints how many years it will take for Zé to be taller than Chico." <<endl<<endl;
    
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
    cout << "After " << counterYears << " years, Zé has become taller than Chico. Zé is " << heightChico << "m tall and Chico is " << heightZe << "m tall.";

    cout <<endl<<endl;

    
    return 0;
}
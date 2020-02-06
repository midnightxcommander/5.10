// 5.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const float ProductionRate = 100.00F;
const float PreProductionRate = 60.00F;
const float ProducersRate = 40.00F;


int main()
{
    double ProductionHours,


        ProducersHours,
        ProductionCost,
        PreProductionHours,
        PreProductionCost,
        ProducersCost,
        ProducerHours,
        TotalCost;
    
        cout << "Enter Producers Hours: ";
        cin >> ProductionHours;
        cout << "\nEnter Pre-Production Hours: ";
        cin >> PreProductionHours;
        cout << "\nEnter Producers Hours: ";
        cin >> ProducerHours;
       
        ProductionCost = ProductionHours * ProductionRate;
        PreProductionCost = PreProductionHours * PreProductionRate;
        ProducersCost = ProducerHours * ProducersRate;
       
        TotalCost = ProductionCost + PreProductionCost + ProducersCost;

       cout << "\n\n Car Dealership Bill";
       cout << "\n\nProduction Cost: ";
       cout << ProductionCost;

       cout << "\n\n Pre-Production Cost:";
       cout << PreProductionCost;

       cout << "\n\nProducers Cost:";
       cout << ProducersCost;
            
       cout << "\n\nWeekly Total Cost:";
       cout << TotalCost << endl;

       return 0;

    
    
    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

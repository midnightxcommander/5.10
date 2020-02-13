// 5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setprecision;
using std::ios;


int main()
{



    // Part 1
    cout << "Income" << setw(8) << " Versus" <<setw(8) << setw(8) << "GPA" << '\n';;
    cout << "Name" << setw(10) << "Income" << setw(10) << setw(8) << "3.4" << '\n';;
    cout << "Jamie" << setw(11) << "12300.00" << setw(6) << "3.4" << '\n';
    cout << "Linda" << setw(8) << "14500" << setw(10) << "3.92" << '\n';
    cout << "Bob" << setw(9) << "9400" << setw(11) << "3.12" << '\n';
    cout << "Marie" << setw(11) << "15129.00" << setw(6) << "4.0" << '\n';


    //Part 2
    cout << "\nIncome" << setw(8) << "Versus" << setw(8) << "Age" << setw(8) << "\n";
    cout << "Name" << setw(10) << "Income" << setw(8) << "Age" << setw(10) << "\n";
    
    cout << "Jamie" << setw(8) <<"12300" << setw(8) << "19" << setw(7) <<"\n";
    
    cout << "Linda" <<setw(8) <<"14500" << setw(8) << "22" << setw(7) <<"\n";
    
    cout << "Bob" <<setw(9) <<"9400" <<setw(9) << "21" <<setw(7) << "\n";
    
    cout << "Frank" <<setw(11) <<"19129.00" <<setw(5) << "21" << setw(5) << "\n";
    
    cout << "** End of Report 2 **\n\n";




    return 0;


}


// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// LAB3_5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;
using std::endl;

char Name[] = "Name ";
char Income[] = "Income";
char GPA[] = "GPA";
char Age[] = "Age";
float Jamie_Income = 12300.00;
float Linda_Income = 14500.00;
float Bob_Income = 9400.00;
float Marie_Income = 15129.00;
float Frank_Income = 19129.00;
float Jamie_GPA = 3.40;
float Linda_GPA = 3.92;
float Bob_GPA = 3.12;
float Marie_GPA = 4.00;
int Jamie_Age = 19;
int Linda_Age = 22;
int Bob_Age = 21;
int Frank_Age = 51;






int main()
{
//part 1
    
   
    cout << "\n  Income versus GPA \n";   
    cout << Name;    
    cout << setw(20) << Income;
    cout << setw(20) << GPA << endl;
    cout << "Jamie" << setw(20) << Jamie_Income<<setw(20) <<Jamie_GPA<<endl;
    cout << "Linda" << setw(20) << Linda_Income << setw(20) << Linda_GPA << endl;
    cout << "Bob  " << setw(20) << Bob_Income << setw(20) << Bob_GPA << endl;
    cout << "Marie" << setw(20) << Marie_Income << setw(20) << Marie_GPA << endl;
    cout << "** End of Report 1 ** \n\n";

    //Part 2

    cout << "\n  Income versus Age \n";
    cout << Name;
    cout.width(20);
    cout << Income;
    cout.width(20);
    cout << Age << endl;
    cout << "Jamie";
    cout.width(20);
    cout << Jamie_Income;
    cout.width(20);
    cout << Jamie_Age << endl;

    cout << "Linda";
    cout.width(20);
    cout << Linda_Income;
    cout.width(20);
    cout << Linda_Age << endl;
    cout << "Bob  ";
    cout.width(20);
    cout << Bob_Income;
    cout.width(20);
    cout << Bob_Age << endl;
    cout << "Frank";
    cout.width(20);
    cout << Frank_Income;
    cout.width(20);
    cout << Frank_Age << endl;
    cout << "** End of Report 2 ** \n\n";

    return 0;


}



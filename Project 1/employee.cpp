#include "employee.h"
#include <iostream>
using namespace std;


void Employee:: input(){
      cout << "Enter number of employees: ";
      cin >> numEmployees;
     for (int k = 1; k<=numEmployees; k++){
        cout << "Enter the five sales of employee " << " # " << k << " : " << endl;
		cin >> sales[k][0] >> sales[k][1] >> sales[k][2] >> sales[k][3] >> sales[k][4];
    }
}

int Employee:: calculateTotalSales(){
    for(int s = 1; s <= numEmployees; s++) { 
        compsales[s] = sales[s][0] + sales[s][1] + sales[s][2] + sales[s][3] + sales[s][4];
        if(compsales[1] < compsales[s]) {
            ++counter;
        }
    }
    return counter;
}


int main()
{
    Employee obj;
    cout << "Employee # 1 is Jack! " << endl;
    
    obj.input();

    cout << "Number of employees whose sales are greater than Jack : " << obj.calculateTotalSales() << endl;

    return 0;
}
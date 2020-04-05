// HEADER FILE 
#include <iostream>
using namespace std;


class Employee{
    public:
    void input(); // function that reads 5 integers and saves them to sales.
    int calculateTotalSales(); // function that returns the sum of the employee's sales.
    
    private:
    int numEmployees; // saves input of number of employees
    int sales[100][5]; // saves sales of 500 employees
    int compsales[100]; // saves sum of slaes of 100 employees
    int counter =0; // counters that is intially set to 0
};
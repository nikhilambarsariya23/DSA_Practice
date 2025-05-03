#include <iostream>
using namespace std;

// Function to print a pyramid pattern
void print1(int n)
{
    for (int i = 0; i < n; i++) // Loop for each row
    {
        // Print spaces before the stars
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Print spaces after the stars (optional for symmetry)
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        // Move to the next line
        cout << endl;
    }
}

int main()
{
    int n; // Number of rows for the pattern
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows
    print1(n); // Call the function to print the pattern
    return 0;
}
#include <iostream>
using namespace std;

// Function to print a pattern of alternating 1s and 0s
void print1(int n)
{
    for (int i = 0; i < n; i++) // Loop for each row
    {
        int startswith; // Variable to determine whether to start with 1 or 0

        // Determine the starting value (1 for even rows, 0 for odd rows)
        if (i % 2 == 0)
        {
            startswith = 1;
        }
        else
        {
            startswith = 0;
        }

        // Print the pattern for the current row
        for (int j = 0; j <= i; j++)
        {
            cout << startswith; // Print the current value
            startswith = (startswith + 1) % 2; // Toggle between 1 and 0
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
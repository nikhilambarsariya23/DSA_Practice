#include <iostream>
using namespace std;
#include <cmath>
int count(int n)
{
    return int(log10(n))+1;
}
int reverse_num(int n)
{
int res = 0;
while(n>0)
{
    int temp = n%10;
    res = res*10 +temp;
    n/=10;
}
return res;
}
int main()
{
    int n; // Number of rows for the pattern
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows
    cout<<reverse_num(n); // Call the function to print the pattern
    return 0;
}
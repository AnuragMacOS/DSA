// just put counter in the middle of the code and it will return the count of digit throught the iteration
#include <iostream>
using namespace std;

int countDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of digits: " << countDigits(num) << endl;
    return 0;
}
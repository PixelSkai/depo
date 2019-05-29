#include <iostream>
using namespace std;

// function declarations
void customHanoi(long int, char = 'A', char = 'B', char = 'C');
void standardHanoi(long int, char = 'A', char = 'B', char = 'C');

int main()
{
    // initialize the variable
    long int n;
    // getting the number of rings
    cin >> n;
    // move odd & even rings to the first shaft, recursively
    // after that move all rings from first shaft to the destination shaft
    customHanoi(n);
    // our program finished successfully
    return 0;
}

// A: the shaft that holds odd rings
// B: the shaft that holds even rigns
// C: the final destination shaft
void customHanoi(long int n, char A, char B, char C)
{
    // initialize the variable
    static long int level = 1;

    // we can't handle zero/negative disk
    if (n < 1)
        return;

    // the base condition of recursion
    if (level == n)
    {
        // now, we moved all rings to the first shaft
        // so, we have to move them to the destination shaft
        standardHanoi(n);
        // finish the execution of recursion
        return;
    }

    // reordering the disks
    // based on even or odd number of disks & current level
    if (n % 2 == 1)
    {
        if (level % 2 == 1)
            standardHanoi(level, A, C, B);
        else
            standardHanoi(level, B, C, A);
    }
    else
    {
        if (level % 2 == 1)
            standardHanoi(level, B, C, A);
        else
            standardHanoi(level, A, C, B);
    }

    // go to the next level, it helps us control the flow
    level++;
    // the recursive calls
    customHanoi(n);
}

// a recursive function to find the solution for standard hanoi
void standardHanoi(long int n, char from, char helper, char to)
{
    // the base condition
    if (n == 1)
    {
        cout << from << " " << to << endl;
        return;
    }
    // the recursive calls
    standardHanoi(n - 1, from, to, helper);
    cout << from << " " << to << endl;
    standardHanoi(n - 1, helper, from, to);
}

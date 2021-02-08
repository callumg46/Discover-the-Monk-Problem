// Discover the Monk Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*ou are given an array A of size N, and Q queries to deal with. For each query, you are given an integer X, and you're supposed to find out if X is present in the array A or not.

Input:
The first line contains two integers, N and Q, denoting the size of array A and number of queries. The second line contains N space separated integers, denoting the array of elements Ai. The next Q lines contain a single integer X per line.

Output:
For each query, print YES if the X is in the array, otherwise print NO.

INPUT:
5 10      N = 5    Q = 10
50 40 30 20 10    = A
10     Find if these numbers are in array
20
30
40
50
60
70
80
90
100

*/

#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    const int q = 10;
    bool monk = false;
    int Arr[n] = { 50, 40, 30, 20, 10 };
    int query[q] = { 10, 20, 30, 40, 50, 50, 70, 80, 90, 100 };

    for (int i = 0; i < q; i++) {

        monk = false;

        for (int x = 0; x < n; x++) {


            if (query[i] == Arr[x]) {

                monk = true;
                break;
            }

            else {
                monk = false;
            }

           
        }

        if (monk == false) {

            cout << "NO \n";
        }
        else if (monk == true) {

            cout << "YES \n";
        }

        

    }
}



// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    int noa, *arr;

    cout << "Enter number of arrays: ";
    cin >> noa;
    
    arr = new int[noa];

    for (int i = 0; i < noa; i++) {
        cin >> arr[i];
    }

    bool check = true;

    while (check==true) {
        int a = 0;
        for (int i = 0; i < noa; i++) {
            if (arr[i] < arr[i + 1]) {
                int swap = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = swap;
                a++;
            }
        }
        if (a == 0) check = false;
    }

    for (int i = 0; i < noa; i++) {
        cout << arr[i];
    }
 
    delete[] arr;

    return 0;

}



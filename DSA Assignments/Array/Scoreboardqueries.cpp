#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void uni(int a[], int b[], vector<int> &c, int length1, int length2)
{
    int i = 0, j = 0, t = 0;
    while (i < length1 && j < length2)
    {
        if (a[i] < b[j])
        {
            c[t++] = a[i++];
        }
        else if (a[i] > b[j])
        {
            c[t++] = b[j++];
        }
        else if (a[i] == b[j])
        {
            c[t++] = a[i++];
            j++;
        }
    }
}
void difference(int a[], int b[], vector<int> &c, int length1, int length2)
{
    int i = 0, j = 0, t = 0;
    while (i < length1 && j < length2)
    {
        if (a[i] < b[j])
        {
            c[t++] = a[i++];
        }
        else if (a[i] > b[j])
        {
            c[t++] = b[j++];
        }
        else if (a[i] == b[j])
        {
            i++;
            j++;
        }
    }
}
void intersection(int a[], int b[], vector<int> &c, int length1, int length2)
{
    {
        int i = 0, j = 0, t = 0;
        while (i < length1 && j < length2)
        {
            if (a[i] < b[j])
            {
                i++;
            }
            else if (a[i] > b[j])
            {
                j++;
            }
            else if (a[i] == b[j])
            {
                c.push_back(b[j]);
                i++;
                j++;
            }
        }
    }
}
int main()
{
    int size1;
    cout << "Enter the size of first array!" << endl;
    cin >> size1;
    int arr[size1];
    cout << "Enter the elements of first array!" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size1);
    int size2;
    cout << "Enter the size of second array!" << endl;
    cin >> size2;
    int brr[size2];
    cout << "Enter the elements of second array!" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> brr[i];
    }
    sort(brr, brr + size2);
    cout << "Enter the Serial number of the operation you want to perform" << endl
         << "1. Union " << endl
         << "2. Difference " << endl
         << "3. Intersection " << endl;
    ;
    int choice;
    cin >> choice;
    vector<int> crr;
    switch (choice)
    {
    case 1:
        uni(&arr[0], &brr[0], crr, size1, size2);
       break;
        
    case 2:
        difference(&arr[0], &brr[0], crr, size1, size2);
    
        break;
    case 3:
        intersection(&arr[0], &brr[0], crr, size1, size2);
    
        break;
    default:
        cout << "ERROR!" << endl;
        break;
    }
    for (int i = 0; i < crr.size(); i++)
        {
            cout << crr[i] << endl;
        }
    return 0;
}

#include <iostream>
using namespace std;
int downcheck(int arr[][], int x, int y, int n, int m)
{
    if(arr[x][y]='s'&&arr[x+1][y]='a'&&arr[x+2][y]='a'&&arr[x+3][y]='a')
    return 1; // Condition satisfied
    else return 0;
}
int rightcheck(int arr[][], int x, int y, int n, int m)
{
    if(arr[x][y]='s'&&arr[x][y+1]='a'&&arr[x][y+2]='a'&&arr[x][y+3]='a')
    return 1; // Condition satisfied
    else return 0;
}
int downdiagonalcheck(int arr[][], int x, int y, int n, int m)
{
    if(arr[x][y]='s'&&arr[x+1][y]='a'&&arr[x+2][y]='a'&&arr[x+3][y]='a')
    return 1; // Condition satisfied
    else return 0;
}
int updiagonalcheck(int arr[][], int x, int y, int n, int m)
{
    if(arr[x][y]='s'&&arr[x+1][y]='a'&&arr[x+2][y]='a'&&arr[x+3][y]='a')
    return 1; // Condition satisfied
    else return 0;
}
int main() {

return 0;
}
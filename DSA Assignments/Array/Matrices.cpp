#include <iostream>
using namespace std;
class DiagonalMatrix
{
    int size;
    int *a;

public:
    DiagonalMatrix()
    {
        size = 2;
        a = new int[2];
    }
    DiagonalMatrix(int x)
    {
        size = x;
        a = new int[x];
    }
    void set(int n, int i, int j)
    {
        if (i == j)
        {
            a[i] == n;
        }
    }
    int get(int i, int j)
    {
        if (i == j)
            return a[i];
        else
            return 0;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    ~DiagonalMatrix()
    {
        delete[] a;
    }
};
class LowerTriangularMatrix
{
    int size;
    int *a;

public:
    LowerTriangularMatrix()
    {
        size = 2;
        a = new int[3];
    }
    LowerTriangularMatrix(int x)
    {
        size = x;
        a = new int[(x * (x + 1)) / 2];
    }
    void create()
    {
        int y;
        for (int i = 1; i <= size; i++)
        {
            for (int j= 1; j <= size; j++)
            {
              cin >> y;
              if(i<=j)
              a[(i * (i - 1)/ 2) + j - 1]==y;
            }
        }
        
    }
    void set(int n, int i, int j)
    {
        if (i >= j)
        {
            a[((i * (i - 1)) / 2) + j - 1] == n;
        }
    }
    int get(int i, int j)
    {
        int t;
        t = ((i * (i - 1)) / 2) + j - 1;
        if (i >= j)
            return a[t];
        else
            return 0;
    }
    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
               if(i>=j)
               cout << a[((i * (i - 1)) / 2) + j - 1] << " ";
               else 
               cout << "0 ";
            }
            cout << endl;
        }
    }
    ~LowerTriangularMatrix()
    {
        delete[] a;
    }
};
class UpperTriangularMatrix
{
    int size;
    int *a;

public:
    UpperTriangularMatrix()
    {
        size = 2;
        a = new int[3];
    }
    UpperTriangularMatrix(int x)
    {
        size = x;
        a = new int[(x * (x + 1)) / 2];
    }
    void set(int n, int i, int j)
    {
        if (i <= j)
        {
            a[((j * (j - 1)) / 2) + i - 1] == n;
        }
    }
    int get(int i, int j)
    {
        int t;
        t = ((j * (j - 1)) / 2) + i - 1;
        if (i <= j)
            return a[t];
        else
            return 0;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    ~UpperTriangularMatrix()
    {
        delete[] a;
    }
};
int main()
{
    LowerTriangularMatrix rm(4);
    rm.set(1, 1, 1);
    rm.set(2, 2, 1);
    rm.set(2, 2, 2);
    rm.set(3, 3, 1);
    rm.set(3, 3, 2);
    rm.set(3, 3, 3);
    rm.set(4, 4, 1);
    rm.set(4, 4, 2);
    rm.set(4, 4, 3);
    rm.set(4, 4, 4);

    rm.display();
    cout << endl;

    return 0;
}
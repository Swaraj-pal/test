#include <iostream>
#include <algorithm>
using namespace std;
class Element
{
public:
    int i;
    int j;
    int x;
};
class Sparse
{
    int m;
    int n;
    int num;
    Element *ele;

public:
    Sparse(int x, int y, int z)
    {
        m = x;
        n = y;
        num=z;
        ele = new Element[num];
    }
    ~Sparse()
    {
        delete[] ele;
    }
    Sparse operator+(Sparse &s);
    friend istream &operator>>(istream &is, Sparse &s);
    friend ostream &operator<<(ostream &os, Sparse &s);
};

Sparse Sparse ::operator+(Sparse &s)
{
    int i = 0, j = 0, k = 0;
    if (m != s.m || n != s.n)
        return Sparse(0, 0, 0);
    Sparse *sum = new Sparse(m, n, num + s.num);
    while (i < num && j < s.num)
    {
        if (ele[i].i < s.ele[j].i)
            sum->ele[k++] = ele[i++];
        else if (ele[i].i > s.ele[j].i)
            sum->ele[k++] = s.ele[j++];
        else
        {
            if (ele[i].j < s.ele[j].j)
                sum->ele[k++] = ele[i++];
            else if (ele[i].j > s.ele[j].j)
                sum->ele[k++] = s.ele[j++];
            else
            {
                sum->ele[k] = ele[i];
                sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
            }
        }
    }
    for (; i < num; i++)
        sum->ele[k++] = ele[i++];
    for (; j < s.num; j++)
        sum->ele[k++] = s.ele[j++];
    return *sum;
}

istream &operator>>(istream &is, Sparse &s)
{
    cout << "Enter the non zero elements" << endl;
    for (int i = 0; i < s.num; i++)
    {
        cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
    }
    return is;
}

ostream &operator<<(ostream &os, Sparse &s)
{
    int k = 0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (s.ele[k].i == i && s.ele[k].j == j)
                cout << s.ele[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return os;
}

int main()
{
    Sparse A(4, 4, 4);
    Sparse B(4, 4, 5);
    cin >> A;
    cin >> B;
    Sparse S = A + B;
    cout << S;
    return 0;
}
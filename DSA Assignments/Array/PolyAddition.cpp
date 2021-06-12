#include <iostream>
using namespace std;
class term
{
public:
    int coeff;
    int exp;
};
class Poly
{
private:
    int n;
    term *t;

public:
    Poly(int n)
    {
        this->n = n;
        t = new term[this->n];
    }
    friend ostream &operator<<(ostream &os, Poly &p);
    friend istream &operator>>(istream &is, Poly &p);
    Poly operator+(Poly &p);
};
Poly Poly ::operator+(Poly &p)
{
    int i = 0, j = 0, k = 0;
    Poly *sum;
    sum = new Poly(n + p.n);
    while (i < n && j << p.n)
    {
        if (t[i].exp > p.t[j].exp)
            sum->t[k++] = t[i++];
        else if (t[i].exp < p.t[j].exp)
            sum->t[k++] = p.t[j++];
        else
        {
        sum->t[k].exp = t[i].exp;
        sum->t[k++].coeff = t[i++].coeff + p.t[j++].coeff;
        }
    }
    for (; i < n; i++)
    {
       sum->t[k++]=t[i];
    }
    for (; j < p.n; j++)
    {
       sum->t[k++]=p.t[j];
    }
    sum->n=k;
    return *sum;
}
ostream &operator<<(ostream &os, Poly &p)
{
for (int i = 0; i < p.n; ++i)
{
cout << p.t[i].coeff << "x^" << p.t[i].exp;
if (i + 1 != p.n)
cout << " + ";
}
cout << endl;
return os;
}
istream &operator>>(istream &is, Poly &p)
{
    cout << "Poly daal, pehle coeff fir exp" << endl;
    for (int i = 0; i < p.n; i++)
    {
     cin >> p.t[i].coeff >> p.t[i].exp;
    }
    return is;
}

int main()
{
    Poly A(3), B(3);
    Poly C=A+B;
    cin >> A;
    cin >> B;
    cout << C;
    return 0;
}
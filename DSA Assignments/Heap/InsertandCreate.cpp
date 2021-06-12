#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int> &v, int key)
{
    int i = v.size();
    v.emplace_back(key);
    while (i > 0 && key > v[i % 2 == 0 ? (i / 2) - 1 : (i / 2)])
    {
        v[i] = v[i % 2 == 0 ? (i / 2) - 1 : (i / 2)];
        i = i % 2 == 0 ? (i / 2) - 1 : (i / 2);
    }
    v[i] = key;
}

void create(vector<int> &v, int a[], int n)
{
    for (int i = 0; i < n; i++)
        insert(v, a[i]);
}

template <class T>
void Print(T& vec, int n, char c){
    cout << c << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
int main()
{
   cout << "Create Heap" << endl;
    int b[] = {10, 20, 30, 25, 5, 40, 35};
    Print(b, sizeof(b)/sizeof(b[0]), 'b');
 
    vector<int> v;
    create(v, b, sizeof(b)/sizeof(b[0]));
    Print(v, v.size(), 'v');
 
    return 0;
}
#include <iostream>
using namespace std;
class Array
{
    public:
    int size,length=0;
    Array(int x)
    {
        size=x;
    };
    int *p = new int[size];
    void set()
    {
        cout << "Enter the length" << endl;
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            cin >> p[i];
        }
        
    }
    void get()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Element number " << i+1 <<" is: " << p[i] << endl;
        }
        
    }
    void add(int x)
    {
        if(length<size)
        {
            p[length]=x;
            length++;
        }
        else
        {
         cout << "ERROR!" << endl;
        }
    }
    void insert(int index, int x)
    {
     if(length<size&&index<length)
        {
          for (int i = index+1; i <= length; i++)
          {
              p[i]=p[i-1];
          }
          p[index]=x;
          length++;
        }
        else
        {
         cout << "ERROR!" << endl;
        }
    }
    void delete1(int index)
    { 
        if(index<length)
        {
        for (int i = index; i < length-1; i++)
        {
          p[i]=p[i+1];
        }
        length--;
        }
    }
    void linearsearch(int key)
    {
        for (int i = 0; i < length-1; i++)
        {
          if(key==p[i])
          {
              cout << "SUCCESS!" << endl;
          }  
          else 
          cout << "Nah!" << endl;
        }
    }
    void binarysearch(int low, int high, int key)
    {
        int mid=(low+high)/2;
        while(low<=high)
        {
        if(key>p[mid])
        {
            low=mid+1;
            mid=(high+low)/2;
        }
        else if(key<p[mid])
        {
            high=mid-1;
            mid=(high+low)/2;
        }
        else if(key==p[mid])
        {
            cout << "Search successful at " << mid+1 << " " << endl;
        }
        }
    }
};
int main() 
{
    Array choc(10);
    cout << "Enter 10 nums" << endl;
    choc.set();
    choc.get();
    choc.binarysearch(0,9,8);
return 0;
}
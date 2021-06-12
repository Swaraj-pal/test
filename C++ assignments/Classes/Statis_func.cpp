#include <iostream>
using namespace std;
class Message
{
    string str[30];
    static int count;
    public:
    Message()
    {
        count++;
    }
    void Setvalue(string x)
    {
        str[30]=x;
    }
    void getvalue(string x)
    {
        cout << str << endl;
    }
    static int Totalcount()
    {
        return count;
    }

};
int Message::count=0;
int main() {
Message M1;
Message M2;
Message M3;
M1.Setvalue("Bhakk");
M2.Setvalue("Niklo");
M3.Setvalue("Hudd");
cout << Message::Totalcount() << endl;

return 0;
}
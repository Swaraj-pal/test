#include <iostream>
using namespace std;
class Test_karte_hai
{
    public:
    void pehla_method()
    {
        cout << "Maa, meri OG gang gang" << endl;
    }
    void doosra_method();
    void gaana_bol(string s)
    {
        cout << "Ab bajaate hai " << s << endl;
    }

};
void Test_karte_hai :: doosra_method()
{
    cout << "tip tip" << endl;
}
int main() {
    string x;
    cout << "Gaana please" << endl;
    cin >> x;
Test_karte_hai a;
a.doosra_method();
a.pehla_method();
a.gaana_bol(x);
return 0;
}

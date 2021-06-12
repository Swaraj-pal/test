#include <iostream>
using namespace std;
class Number
{
	private:
		int num;
	public:
		//constructor
		Number(){ num=0; };
		
		//member function to get input
		void inputNumber (void)
		{
			cout<<"Enter an integer number: ";
			cin>>num;
		}
		//member function to display number 
		void displayNumber()
		{
			cout<<"Num: "<<num<<endl;
		}
};
int main() 
{
Number N;
Number *M;
N.inputNumber();
N.displayNumber();
M = new Number;
M->inputNumber();
M->displayNumber();
return 0;
}
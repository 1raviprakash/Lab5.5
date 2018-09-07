/*
writing
*
**
* *
*  *
*****
*/
// library
#include<iostream>
using namespace std;
//main function
int main(){
//giving variable n
int n;
cout << "give no. of rows";
cin>> n;
 // loop
for (int i= 0 ; i < n ; i++)
{
	// using if condition
	if (i == 0||i == 1||i== n-1)
	{
		// writing loop in a loop
		for (int j = 0 ; j < (i+1) ; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// using else condition
	else
	{
		cout<<"*";
		// loop
		for(int j = 0 ; j<( i-1) ; j++)
		{
		cout << " ";
		}
		cout << "*";
		cout<<endl;
	}
}
return 0;
}

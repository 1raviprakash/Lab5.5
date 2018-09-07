/*
Hollow Square Star Pattern
*****
*   *
*   *
*   *
*****
*/
// library
#include<iostream>
using namespace std;
//main function
int main()
{
 //giving variable n
 int n;
 cout << "give no. of rows";
 cin>> n ;
 // loop
	for (int i= 0 ; i < n ; i++)
	// writing loop in a loop
	{
		for (int j =0; j<n; j++)
		{
			// using if condition
			if (i==0||i==n-1||j==0||j== n-1)
			{
				cout << "*";
			}
			// using else condition
			else
			cout <<" ";
		}
		cout <<endl;
	
	}
return 0;
}

/*
writing
*
**
***
****
*****
*/
// library
#include<iostream>
using namespace std;
//main function
int main()
{
//giving variable
int n;
cout << "give no. of rows";
cin>> n;
// loop
	for(int i=0; i<n; i++)
		{
		// writing loop in a loop
		for (int j=0; j<=i; j++)
		{
		cout<<"*";
		}
	cout<<endl;
	}
return 0;
}

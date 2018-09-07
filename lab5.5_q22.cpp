/*writing
    *
   ***
  *****
 *******
*********
 *******
  *****
  ***
    *
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
cin>> n;
   int i, j, k;
    // loop
   for(i=1;i<=5;i++)
   {    
	// writing loop in a loop
	for(j=i;j<5;j++)
	{
		cout<<" ";
	}
	// writing loop in a loop
	for(k=1;k<(i*2);k++)
	{
		cout<<"*";
	}
   cout<<"\n";
   }
    // loop
   for(i=4;i>=1;i--)
   {
	// writing loop in a loop
	for(j=5;j>i;j--)
	{
		cout<<" ";
	}
	// writing loop in a loop
	for(k=1;k<(i*2);k++)
	{
		cout<<"*";
	}
    cout<<"\n";
    }
return 0;
}

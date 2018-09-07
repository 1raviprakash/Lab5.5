/*
writing
        * 
       ***
      *****
     *******
    *********

*/
// library
#include<iostream>
using namespace std;
//main function
int main(){
//giving variable n
int n , m;
cout << "give no. of rows" << "star";
cin>> n ;
 // loop
for (int i= 0 ; i < n ; i++)
{
	// writing loop in a loop
	for (int j= 0; j < n-i-1;j++)
	{
		cout << " ";
	} 
	m = (2*i)+1 ;
        //using while
	while (m != 0,m--)
	{
	cout <<"*";
	}
	cout << endl;
	}
return 0;
}

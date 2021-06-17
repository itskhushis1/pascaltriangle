//inverted pascal's triangle
#include <iostream>
using namespace std;

int  main()
{
   int n, k = 0;
   cout<<"Enter number of rows: ";
   cin>> n;
   cout<<"\n";
   for (int i = 1; i <= n; ++i)
   {
      for (int j = 1; j <= n - i; ++j)
      {
			cout<<" * ";
      }
	  cout<<"\n";
	  k=0;
      for (int k = 1; k <= i ; k++)
	  {
			cout<<" ";
	  }

   }
   return 0;
}

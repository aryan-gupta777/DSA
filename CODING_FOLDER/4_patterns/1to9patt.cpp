#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int count = 1;
   int i = 1;
   while (n >= i)
   {

      int j = 1;
      while (n >= j)
      {
         cout << count;
         j++;
         count = count + 1;
      }

      cout << endl;
      i++;
   }

   return 0;
}
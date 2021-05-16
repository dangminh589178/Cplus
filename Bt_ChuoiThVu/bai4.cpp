#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main ( int argc, char * argv[] ) 
{
    long long userInput;
    int fthreeDigit;

   cout << "Nhap so: " << endl;
   cin >> userInput;
   vector <int> res;  
   while (userInput !=0)
   {
     fthreeDigit = userInput %1000;
     res.push_back(fthreeDigit);
     userInput = userInput / 1000 ;
   }

   std::reverse(res.begin(), res.end());
   for (size_t i = 0; i < res.size()-1; ++i)
   {
     if (res[i] ==0)
     {
        cout << "000"<<",";
     }
     else
     {
       cout << res[i] << ",";
     }
   }

   if (res[res.size()-1] == 0)
   {
       cout << "000";
   }
   else{
       cout << res[res.size()-1];
   }
   cout <<endl;
   cin.get();
   return 0;
}

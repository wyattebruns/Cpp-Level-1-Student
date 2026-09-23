#include <iostream>
using namespace std;

int main() 
{
    int number_of_scores;
    float score;
    int highest;
   
    cout << "How many scores do you want to use!\n";
    cin >> number_of_scores;

    float scores[number_of_scores];

    cout << "Put in the scores you want to use\n";

    for(float &val: scores){
     cin >> val;
}    

   for(float &val: scores){
    cout << val<< " ";
   }
   
   cout <<endl;
   
   highest = scores[0];
   
    for(float val : scores){
  if(val > highest){
           highest = val;
        }

    }
 
 cout <<  "Your highest score is " << highest;
 


    return 0;
}

https://onecompiler.com/cpp/4526ymwbv

#include <iostream>
using namespace std;

int main() 
{
    int number_of_grades;
    float score;
    float avrage;
    float highest;
    float lowest;

   
    cout << "How many grades do you want to calculate!\n";
    cin >> number_of_grades;

    float scores[number_of_grades];

    cout << "Put in the grades you want to use\n";

    for(int i = 0; i < number_of_grades; i++){
        cin >> score;
        scores[i] = score;
    }

   for(int i = sizeof(scores)/sizeof(scores[0]) - 1; i >= 0 ; i--){
cout << scores[i];
   }



float total = 0;

for(int i = 0; i < number_of_grades; i++){
    total += scores[i];
}


highest = scores[0];
lowest = scores[0];
   


for(int i = 0; i < number_of_grades; i++){
  
  if(highest <= scores[i]) {
    highest = scores[i];
  }
}


for(int i = 0; i < number_of_grades; i++){
  
  if(lowest >= scores[i]) {
    lowest = scores[i];
  }
}



cout << endl;

avrage = total/ number_of_grades;

cout << "Your avrage is " << avrage << endl;

cout << highest<< endl;

cout << lowest<< endl;
    
    
    
    
    return 0;
}

https://onecompiler.com/cpp/44zzsqrws

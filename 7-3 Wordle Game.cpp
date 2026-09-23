#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    string guess;
     
     
    vector<string> wordle_answer = { 
    "apple", "beach", "bread", "chair", "cloud",
    "dance", "dream", "eagle", "earth", "flame",
    "floor", "fruit", "ghost", "grape", "grass",
    "green", "heart", "house", "juice", "knife",
    "lemon", "light", "mouse", "music", "night",
    "ocean", "paint", "paper", "peach", "piano",
    "plant", "plate", "point", "queen", "quick",
    "radio", "river", "robot", "round", "royal",
    "scale", "sheep", "shirt", "shoes", "short",
    "smile", "snake", "space", "spoon", "sport",
    "stone", "storm", "table", "tiger", "toast",
    "train", "tree", "truck", "water", "whale",
    "wheel", "world", "write", "young", "zebra",
    "arrow", "badge", "berry", "black", "bloom",
    "brain", "brick", "brush", "candy", "crown",
    "daisy", "drink", "drive", "field", "flash",
    "flower", "force", "glass", "globe", "happy",
    "horse", "hotel", "image", "island", "jelly",
    "laugh", "magic", "metal", "money", "movie",
    "phone", "pizza", "proud", "queen", "ranch"
    };
    
    srand(time(0));
   int random_num = rand() % wordle_answer.size();  // random number between 0 and 2

  
 

   cout << "Guess a random 5 letter word!\n";
  cout << wordle_answer.at(random_num);
  
   cin >> guess;

   return 0;
}




https://onecompiler.com/cpp/454378k7w

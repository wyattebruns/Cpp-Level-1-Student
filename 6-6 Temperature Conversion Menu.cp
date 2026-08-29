#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string to_lower(string s) {
    for(char &c : s) c = tolower(c);
    return s;
}

float celsius_fahrenheit (float temp){ return temp * 1.8 + 32;}
float celsius_kelvin (float temp){ return temp + 273.15;}
float kelvin_fahrenheit (float temp){ return (temp - 273.15) * 9/5 + 32;}
float kelvin_celsius (float temp){ return temp - 273.15;}
float fahrenheit_kelvin (float temp){ return (temp - 32) * 5/9 + 273.15;}
float fahrenheit_celsius (float temp){ return (temp -32) / 1.8;}

int main() 
{
    
    string starting_scale;
    string ending_scale;
    float  starting_temp;
    float ending_temp;


cout << "What scale do you want to start with (Celsius, Fahrenheit, and Kelvin)" << endl;
cin >> starting_scale;
cout << "What temperature do you want to start at" << endl;
cin >> starting_temp;
cout << "What scale do you want to convert to" << endl;
cin >> ending_scale;
    
    starting_scale = to_lower(starting_scale);
    ending_scale = to_lower(ending_scale);
    
    if(starting_scale== "celsius" && ending_scale == "fahrenheit" || starting_scale== "c" && ending_scale == "f"){
        ending_temp= celsius_fahrenheit (starting_temp);
    }
    else if (starting_scale== "celsius" && ending_scale == "kelvin" || starting_scale== "c" && ending_scale == "k"){
        ending_temp= celsius_kelvin (starting_temp);
    }
    else if (starting_scale== "kelvin" && ending_scale == "fahrenheit" || starting_scale== "k" && ending_scale == "f"){
        ending_temp= kelvin_fahrenheit (starting_temp);
    }
    else if (starting_scale== "kelvin" && ending_scale == "celsius" || starting_scale== "k" && ending_scale == "c"){
        ending_temp= kelvin_celsius (starting_temp);
    }
     else if (starting_scale== "fahrenheit" && ending_scale == "celsius" || starting_scale== "f" && ending_scale == "c"){
        ending_temp= fahrenheit_celsius (starting_temp);
    }
    else if (starting_scale== "fahrenheit" && ending_scale == "kelvin" || starting_scale== "f" && ending_scale == "k"){
        ending_temp= fahrenheit_kelvin (starting_temp);
    }







    cout << ending_temp;
    return 0;
}






https://onecompiler.com/cpp/44zmjpk5d

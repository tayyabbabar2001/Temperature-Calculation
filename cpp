#include <iostream>
# include <cmath>

using namespace std;

int main(){
	float temp,celcius;
	cout<<"Enter temperature:";
	cin >> temp;
	celcius = (temp - 32)*(5/9);
	if (temp < 15)
    	cout<<"Too Cold";
    
    else if (temp >=15 && temp<=25)
    	cout<<"Pleasant";
    
    else if (temp >=26 && temp<=35)
    	cout<<"Hot";
    	
    else if (temp > 15)
    	cout<<"Too Hot";
    }

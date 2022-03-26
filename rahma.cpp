#include <iostream>
using namespace std;
int main() {
int max,x,y;
int number_of_people;
cout<<"enter the max\n";
cin>>max;
cout<<"number of people\n";
cin>>number_of_people;
if(number_of_people<=max)
{
    cout<<"is legal to hold the meeting. ";
    x = max-number_of_people;
    cout<<" additional people may legally attend : "<<x<<endl;

}
else
{
    cout<<"the meeting cannot be held as planned due to fire regulations. \n";
    y= number_of_people-max;
    cout<<"people must be excluded in order to meet the fire regulations : "<<y<<endl;
}

return 0;
}

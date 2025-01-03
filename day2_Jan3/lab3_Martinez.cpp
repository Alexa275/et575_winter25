/*
Alexa Martinez
Jan3, numerical variables
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\v------- Example 1: integer variables ------ "<<endl;
    //declare identifier, variable's name
    int height;
    int width;
    int area;
    cout<<"Initial value area = "<<area<<endl;
    // assign values to each variable
    height = 2;
    width = 2.5; //int, short, and long ONLY reads the whole number
    area = height*width;
    cout<<"calculated area = "<<area<<endl; // area = 3*2 = 6
    
    cout<<"\v------- Example 2: short varibales ------ "<<endl;
    // delcare variables with initial values
    short perimeter(0); // short perimeter = 0;
    // calculate the perimeter of the rectangle
    perimeter = height*2 + width*2; // perimeter = 3*2 + 2*2 = 6+4 = 10
    cout<<"The calculated perimeter is "<<perimeter<<endl;
    
    cout<<"\v------- Example 3: float varibales ------ "<<endl;
    // float and double reads the decimal/fraction portion of a number
    // free fall formula = 0.5*gravity*time*time
    // declare identifier dont use different types ex-float and int at the same time 
    float gravity = 9.8, time = 2.1, h(0);
    //calculate the height 
    h = 0.5*gravity*time*time;
    // console result
    cout<<"The height of a falling object is "<<h<<" meters "<<endl;
    
    cout<<"\v------- Example 4: constant varibales ------ "<<endl;
    // Calculate the price of the cake using inches squared. Each inches squared cost $0.35
    // declare the indentifier
    const double BASEPRICE = 0.35;
    const double PI = 3.14159;
    double areacake = 0, totalprice = 0, radius = 0;
    // collect the radius from the user (keyword)
    cout<<"Enter the radius of the cake: ";
    cin>>radius;
    // calculate the area of the cake = PI*radius*radius
    areacake = PI*radius*radius;
    // calculate the total price of a cake
    totalprice = areacake * BASEPRICE;
    // prompt the result
    cout<<"A cake of "<<radius<<" inches costs $"<<totalprice<<endl;
    
    cout<<"\v------- EXERCISE ------ "<<endl;
    int r = 0;
    float a = 0, volume = 0;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    a = PI*r*r;
    volume = (4/3)*PI*r*r*r;
    cout<<"The area of the circle is "<<a<<"\v The volume of a sphere is "<<volume<<endl;
    
    

    return 0;
}
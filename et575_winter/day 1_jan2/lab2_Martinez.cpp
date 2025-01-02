/*
Alexa Martinez
Lab 2, input and output streaming, string and character variables
Jan 2, 2025
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\v------- Example 1: cout and endl ------- "<<endl;
    cout<<"\v This is my first program!"<<endl;
    cout<<"\n Lab 2 \t\t variables"<<endl;

    cout<<"\v------- Example 2: string variables ------- "<<endl;
    // declare identifier (variable' name)
    string username;
    cout<<"Initial username: "<<username<<endl;
    // update identifier value
    username = "Peter Pan";
    cout<<"Updated username = "<<username<<endl;
    // update identifier from use (keyword)
    cout<<"Enter a username: ";
    cin>>username;
    cout<<"Entered username: "<<username<<endl;

    cout<<"\v------- Example 3: character variables ------- "<<endl;
    // declare identifier with an initial value;
    char symbol = '$';
    cout<<"Initial symbol + "<<symbol<<endl;
    // update identifier's value from user (keyword)
    cout<<"Which is your favorite symbol? ";
    cin>>symbol;
    cout<<symbol<<" is your favorite symbol :)"<<endl;

    cout<<"\v------- Exercise ------- "<<endl;
    // declare identifier (variable' name)
    string country
    cout<<"Enter a country"<<endl;
    cin>>country;
    cout<<"\t Entered username"
    return 0;
}


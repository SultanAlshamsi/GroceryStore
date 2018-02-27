// Author: Sultan Alshamsi
#include<iostream>
#include<string>
using namespace std;

int main()
{
string list[5]; //array of 5 strings
int numItems = 0;
char input;
string input2;
do
 {

 cout<<"==GROCERY LIST MANAGER=="<<endl;
 cout<<"Enter your choice: "<<endl;
 cout<<" (A)dd an item"<<endl;
 cout<<" (Q)uit"<<endl;
 cout<<"Your choice (A/Q): "<<endl;
 cin>>input;
 if(input == 'A' || input == 'a')
  {
 cout<<"What is the item?\n";
 cin>>input2;
 if(numItems<5)
 {
 list[numItems]=input2;
 numItems++;
 }
 else
 {
 cout<<"You'll need a bigger list!\n";
 }
 }
}  while(input!='q' && input!='Q');

    cout<<"==ITEMS TO BUY==";

   for(int numItems=0; numItems<5; numItems++)
{

    cout<<endl<<numItems+1 << " ";

    if(list[numItems]!="")
{

cout<<list[numItems];
}
}cout<<endl;


return 0;
 }

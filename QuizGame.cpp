/*
Ayush Kadigari
Quiz Game
*/

#include <iostream>

using namespace std;

//interger variable for point
int point = 0;

int main() {
  cout<<"Quiz Game\n\n\n";

  //Question 1
  char Question1;
  //qustion
  cout<<"Question 1: Who Created the app discord? \nA) Jeff Bezzos\nB) Jason Criton\nC) Micheal Scott\nD) Jason Starling\n";
  cin>>Question1;
  //the if statement for the corect answer
  if(Question1 == 'B'){
    cout<<"correct!\n\n";
    // if its correct its plus 1 point
    point = point+1;

  }
  else{
    // other wise it is wrong
    cout<<"\nWrong\n\n";
  }


  //this basically the samething but with a switch statement
  char Question2;
  //Question 2
  cout<<"Which actor is spider man?:\nA) Tom Holland\nB) Tom Halland\nC) Dwight Shrute\nD) Spiderman is a robot\n";
  cin>>Question2;
  Question2 = toupper(Question2);
  switch(Question2){
    case 'C':
    case 'B':
    case 'D':
      cout<<"\nwrong\n\n";
      break;
    case 'A':
      cout<<"\nCorrect\n\n";
      point = point+1;
      break;
    default:
    // the default if it was not a option
      cout<<"\nThat isn't an option\n\n";
  }


  //Question 3
  char Question3;
  cout<<"What question is this:\n1\n2\n3\n4\n";
  cin>>Question3;
  Question3 = toupper(Question3);
  if(Question3=='3'){
    // this mean it is correct
    cout<<"\nCorrect!\n\n";
    point = point+1;
  }
  // this means its wrong
  else{
    cout<<"\nWrong\n\n";
  }

  //Question 4
  char Question4;
  cout<<"Who is a prog teacher?:\nA)Ms.Nostrand\nB)Ms.Roberts\nC)Ms.Lee\nD)Ms.Ruback\n";
  cin>>Question4;
  Question4 = toupper(Question4);

  switch(Question4){
    case 'B':
      cout<<"\nCorrect\n\n";
      point = point+1;
      break;
    default:
    cout<<"\nwrong\n\n";
  }

  //question 5
  char Question5;
  cout<<"What is the hottest star in the solar system?:\nA) Sun\nB) Earth\nC) Jupiter\nD) Venus\n";
  cin>>Question5;
  if(Question5 == 'A'){
    cout<<"\nCorrect";
    point = point+1;
  }
  else{
    cout<<"\nwrong\n\n";
  }

  //results for each point
  switch(point){
    case 0:
    //terrible
      cout<<"0/5";
      break;
      // terrible
    case 1:
      cout<<"1/5";
      break;
      // just garbage
    case 2:
      cout<<"2/5";
      break;
      //decent
    case 3:
      cout<<"3/5";
      break;
      // alright 
    case 4:
      cout<<"4/5";
      break;
      // eccelent
    case 5:
      cout<<"5/5";
  }
}
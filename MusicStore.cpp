//Ayush Kadigari 
//Period 2 Ms.Roberts
//Music Store


#include <iostream>
using namespace std;


//begining of the code
int main() {
  //this allows it to round eachtother
  cout.setf(ios::fixed);
  cout.precision(2);

  // stinngs of the artist name and the songname
  string artist1;
  string songname1;
  int copiesold1, copiesold2, cost1, costtotal1, price1, moneypercent1, sales1;
  int totalmoney, totalalbums, percentalbums1, albums1;
  
  // Cin Artist 1
  cout << " Artist 1: ";
  cin >> artist1;
  cout << endl;
  
  // Cin of Songname 1
  cout<< artist1 <<"'s album:";
  cin>>songname1;
  cout << endl;

  // Copies sold on east coast
  cout << "Copies of " <<artist1<< "'s " <<songname1<< " Sold on the east coast: ";
  cin>>copiesold1;
  cout << endl;

  // Copies sold on the west coast
  cout << "Copies of " <<artist1<< "'s " <<songname1<< " Sold on the west coast: ";
  cin>>copiesold2;
  cout << endl;

  // The cost of the the song
  cout << "Cost of " <<songname1 <<" ";
  cin>>cost1;
  cout << endl;
  
  // the rest down here is just the samething so there is no need of making comments

  string artist2;
  string songname2;
  int copiesold21, copiesold22, cost2, price2, moneypercent2, albums2, percentalbums2, sales2;
  
  cout << " Artist 2: ";
  cin>>artist2;
  cout << endl;

  cout<< artist2 <<"'s album:";
  cin>>songname2;
  cout << endl;

  cout << "Copies of " <<artist2<< "'s " <<songname2<< " Sold on the east coast";
  cin>>copiesold21;
  cout << endl;

  cout << "Copies of " <<artist2<< "'s " <<songname2<< " Sold on the west coast";
  cin>>copiesold22;
  cout << endl;

  cout << "Cost of " <<songname2;
  cin>>cost2;
  cout << endl<<endl;

  string artist3;
  string songname3;
  int copiesold31, copiesold32, cost3, price3, moneypercent3, percentalbums3, albums3, sales3;
  
  cout << " Artist 3: ";
  cin>>artist3;
  cout << endl;

  cout<< artist3 <<"'s album:";
  cin>>songname3;
  cout << endl;

  cout << "Copies of " <<artist3<< "'s " <<songname3<< " Sold on the east coast";
  cin>>copiesold31;
  cout << endl;

  cout << "Copies of " <<artist3<< "'s " <<songname3<< " Sold on the west coast";
  cin>>copiesold32;
  cout << endl;

  cout << "Cost of " <<songname3;
  cin>>cost3;
  cout << endl<< endl;

 // Total price of each sale
  price1 = cost1*albums1;
  price2 = cost2*albums2;
  price3 = cost3*albums3;

  //All the number of the albums added up
  totalalbums = albums1 + albums2 + albums3;

  //calculations of the total amout of albums
  albums1 = copiesold1 + copiesold2;
  albums2 = copiesold21 + copiesold22;
  albums3 = copiesold31 + copiesold32;
  
  //Finding the percentage of the albums
  percentalbums1 = (albums1/totalalbums)*100;
  percentalbums2 = (albums2/totalalbums)*100;
  percentalbums3= (albums3/totalalbums)*100;

  //Caculating the total amount of albums with multipling with the price
  sales1 = albums1 * cost1;
  sales2 = albums2 * cost2;
  sales3 = albums3 * cost3;

  //math calculations to find the money percentage
  totalmoney = sales1 + sales2 + sales3;
  moneypercent1 = (sales1/totalmoney)*100;
  moneypercent2 = (sales2/totalmoney)*100;
  moneypercent3 = (sales3/totalmoney)*100;


  // result of the input
  cout << "*****************Result*************************" <<endl;
  // showing the artist name
  cout << "Artist      " <<artist1<< "  "<<artist2<< "  "<<artist3<<endl;
  // showing the album name
  cout << "Album       " <<songname1<< "  "<<songname2<< "  "<<songname3<<endl;
  // the total amount sold of album
  cout << "Total Sold  " <<albums1<< "  "<<albums2<< "  "<<albums3<<endl;

  //Shows the total amount of price
  cout << "Total$      " <<price1<< "  "<<price2<< "  "<<price3<<endl;
  //shows the percentage of the album
  cout << "Percent Albums    " <<percentalbums1<< "  "<<percentalbums2<< "  "<<percentalbums3<<endl;
  //shows the percentage of money
  cout << "Percent Money    " <<moneypercent1<< "  "<<moneypercent2<< "  "<<moneypercent3<<endl;
  
  cout << "*****************Result*************************" <<endl;





  return 0;
}
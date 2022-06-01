//Ayush Kadigari
//Pirate 3.0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//50 percent chance for it to say arrrrr at the end
int getrandom() {
  return rand() % 2;
}
//makes the first letter capital
string ucfirst(string pWord) {
    pWord[0] = toupper(pWord[0]);
    return pWord;
}
//string for arr 
string arrr(string rPhrase,char punctuation) {

  size_t fp = rPhrase.find_first_of(punctuation);
  while (fp != -1) {
    if (getrandom() == 0) {
      rPhrase = rPhrase.substr(0, fp) + "Arrr" + rPhrase.substr(fp + 1, rPhrase.size());
      fp = rPhrase.find_first_of(punctuation, fp + 1);
    }
  }
  return rPhrase;
}

//string replace from using and english to pirate 
string fReplace(string englishWord, string pirateReplacement, string rPhrase) {

  int upostion = 0;
  int i = 0;
  string phrase;

  int postion = rPhrase.find(englishWord, i);

  while (postion != -1) {
    rPhrase = rPhrase.substr(0, postion) + ucfirst(pirateReplacement) + rPhrase.substr(postion + englishWord.size());
    postion = rPhrase.find(englishWord, postion + 1);
  }

  return rPhrase;
}

//main
int main() {

  srand(time(0));

//vector in english words 
  const vector < string > englishWords = {
    "hello",
    "friend",
    "madam",
    "officer",
    "stranger",
    "where",
    "is",
    "the",
    "my",
    "your",
    "restaurant",
    "hotel",
    "money"
  };

//vector in pirate 
  const vector < string > pirateReplacements = {
    "ahoy",
    "matey",
    "proud beauty",
    "foul blaggart",
    "scurvy dog",
    "whar",
    "be",
    "th'",
    "me",
    "yer",
    "galley",
    "fleabag inn",
    "booty"
  };

//variables 
  string phrase;
  string rPhrase;

//enter your phrase 
  cout << "Enter your phrase: ";
  getline(cin, phrase);

//for int i english words 
  for (int i = 0; i < englishWords.size(); i++) {
    rPhrase = fReplace(englishWords[i], pirateReplacements[i], phrase);
    phrase = rPhrase;
  }

//arrr exclamation points at the end 
  rPhrase = arrr(rPhrase,'.');
  rPhrase = arrr(rPhrase,'!');
  rPhrase = fReplace("Arrr", "Arrr!", rPhrase);
  rPhrase = arrr(rPhrase,'?');

//pirate phrase 
  cout << "Pirate Phrase: " << rPhrase << endl;

  return 0;

}
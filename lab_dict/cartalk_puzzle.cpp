/**
 * @file cartalk_puzzle.cpp
 * Holds the function which solves a CarTalk puzzler.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include <fstream>

#include "cartalk_puzzle.h"

using namespace std;

/**
 * Solves the CarTalk puzzler described here:
 * http://www.cartalk.com/content/wordplay-anyone.
 * @return A vector of (string, string, string) tuples
 * Returns an empty vector if no solutions are found.
 * @param d The PronounceDict to be used to solve the puzzle.
 * @param word_list_fname The filename of the word list to be used.
 */
vector<std::tuple<std::string, std::string, std::string>> cartalk_puzzle(PronounceDict d,
                                    const string& word_list_fname)
{
    vector<std::tuple<std::string, std::string, std::string>> ret;

    /* Your code goes here! */
   ifstream words(word_list_fname);
   string wordString;

   if(words.is_open() == true) {
     while(getline(words, wordString)) {
       if (!(wordString.length() >= 3)){
       }
       string subStr1 = wordString.substr(1);
       string subStr2 = wordString.substr(2);
       string firstWord = wordString[0] + subStr2;
       string secondWord = subStr1;
       if(d.homophones(wordString, firstWord) != false){
        if(d.homophones(wordString, secondWord) != false){
         ret.push_back(tuple<string,string,string>(wordString, secondWord, firstWord));
      }
     }
    }
  }
   return ret;
}

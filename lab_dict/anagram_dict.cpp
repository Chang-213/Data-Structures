/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using namespace std;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
    /* Your code goes here! */
   ifstream file(filename);
   string wordHold;
   if (file.is_open()) {
     while(getline(file, wordHold)){
       string inOrder(wordHold);
       sort(inOrder.begin(), inOrder.end());
       dict[inOrder].push_back(wordHold);
     }
   }
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
    /* Your code goes here! */
    for (string wordHold: words) {
      string inOrder(wordHold);
      std::sort(inOrder.begin(), inOrder.end());
      dict[inOrder].push_back(wordHold);
    }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
    /* Your code goes here! */
    string inOrder(word);
    std::sort(inOrder.begin(), inOrder.end());
    if (dict.count(inOrder) == 0)
      return vector<string>();
    return dict.at(inOrder);
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    /* Your code goes here! */
    vector<vector<string>> allAnag;
    for (std::pair<string, vector<std::string>> hold : dict) {
      vector<string> strHold = hold.second;
      if (!(strHold.size() >= 2)){
      continue;
    }
      allAnag.push_back(strHold);
    }
    return allAnag;
}

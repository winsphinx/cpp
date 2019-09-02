#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;
int main() {

  int other = 0, vowel = 0, consonant = 0;
  string word;

  while (cin >> word, word != "q") {
    if (!isalpha(word[0])) {
      ++other;
    } else {
      switch (word[0]) {
      case 'a':
        ++vowel;
        break;

      case 'A':
        ++vowel;
        break;

      case 'e':
        ++vowel;
        break;

      case 'E':
        ++vowel;
        break;

      case 'i':
        ++vowel;
        break;

      case 'I':
        ++vowel;
        break;

      case 'o':
        ++vowel;
        break;

      case 'O':
        ++vowel;
        break;

      case 'u':
        ++vowel;
        break;

      case 'U':
        ++vowel;
        break;

      default:
        ++consonant;
      }
    }
  }

  cout << vowel << " words beginning with vowels.\n"
       << consonant << " words beginning with consonants.\n"
       << other << " others.\n";

  return 0;
}

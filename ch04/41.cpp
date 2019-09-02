#include <cstring>
#include <iostream>
#include <string>

int main() {
  using namespace std;
  const int Size = 15;

  char name1[Size];
  char name2[Size] = "abcd";
  string name3;

  cout << "Input a string: ";
  /* cin >> name3; */
  /* cin.getline(name1, Size); */
  /* cin.get(name1, Size).get(); */
  /* cout << strlen(name3) << endl; */
  getline(cin, name3);
  cout << name3.size() << endl;

  return 0;
}

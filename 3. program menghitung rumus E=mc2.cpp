#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
  int e,m,c;
  std::cout << "program menghitung energi" << '\n';
  std::cout << "masukan nilai m :";
  std::cin >> m;
  std::cout << "masukan nilai c :";
  std::cin >> c;

  e=m*c*c;

  std::cout << "nilai E adalah :"<<e << '\n';
  return 0;
}

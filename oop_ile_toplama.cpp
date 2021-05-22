#include <iostream>
using namespace std;

class Mat {
  int x, y;

public:
  void input() {
    cout << "iki tane sayi gir\n";
    cin >> x >> y;
  }

  void add() {
    cout << "topla: " << x + y;
  }

};

int main()
{
   Mat m; 

   m.input();
   m.add();

   return 0;
}

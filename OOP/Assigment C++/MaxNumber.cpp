#include<iostream>
using namespace std;

class test {
private:
   int x, y;
public:

   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void find(test t);
};

void find(test t) {
   if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}

int main() {

   test t;
   t.input();
   find(t);

   return 0;
}

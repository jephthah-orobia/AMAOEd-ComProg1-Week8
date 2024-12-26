/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd Boilerplate for Week8
 * @app desc: This is my personalized boilerplate for C++ console app
 * ****************************************************************/

#include <iostream>
#include <limits>
#include "whatsNext.h"

using namespace std;

int main()
{

  int ns[2];

  cout << "First Number: ";

  cin >> ns[0];

  cout << "Second Number:";

  cin >> ns[1];

  cout << "You entered the following: " << ns[0] << ", " << ns[1] << endl;

  return whatsNext({
      {'r', make_tuple("Re-Run App",
                       []()
                       {
                         system("cls");
                         return main();
                       })},
      });
}

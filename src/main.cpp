/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd ITE7101 Computer Progamming - Week8 - Lab7
 * @app desc: This console app will display a triangle.
 * ****************************************************************/

#include <iostream>
#include <limits>
#include "whatsNext.h"

using namespace std;

int main()
{
  // The task requires to use only 4 variables: h, row, rowLabels, col
  int h, row = 0;
  char rowLabels[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  cout << "Let's make a triangle" << endl
       <<"How tall do you want it? [1-10 integers only]: ";

  while (true)
  {
    cin >> noskipws >> h;
    if (!cin.fail() && h >= 1 && h <= 10)
    {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      break;
    }
    else
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << endl
           << "Invalid height. Try again [1-10 integers only]: ";
    }
  }

  while (row < h)
  {
    int col = 0;
    cout << rowLabels[row] << " "; // disp
    while (col < 2 * h - 1)
    {
      if (
          col == h - row - 1    // left side of the triangle
          || col == h + row - 1// right side of the triangle
          || (row == h - 1
              && col % 2 == 0)  // base of the triangle
      )
      {

        cout << "*";
      }
      else
      {
        cout << " ";
      }
      col++;
    }
    cout << endl;
    row++;
  }


  return whatsNext({
      {'r', make_tuple("Re-Run App",
                       []()
                       {
                         system("cls");
                         return main();
                       })},
  });
}

/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd ITE7101 Computer Progamming - Week8 - Lab7
 * @app desc: This console app will display 5 numbers user inputs.
 * ****************************************************************/

#include <iostream>
#include <limits>
#include "whatsNext.h"

using namespace std;

int main()
{
  // The task requires to use only 4 variables: n, temp, i, j.
  int n[6];

  for (int i = 0; i < 6; i++)
  {
    while (true)
    {
      cout << "Enter number[" << i + 1 << "]: ";
      cin >> n[i];
      if (!cin.fail()) // validation
      {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
      }
      else
      {
        cin.clear();
        cout << "Invalid number, try again." << endl;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }

  for (int i = 0; i < 6; i++)
  {
    for (int j = i; j < 6; j++)
    {
      if (n[i] > n[j])
      {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }

  cout << endl << "The numbers you entered in ascending order: ";

  for (int i = 0; i < 6; i++)
  {
    cout << n[i];
    if (i + 1 < 6)
    {
      cout << ", ";
    }
    else
    {
      cout << ". " << endl;
    }
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

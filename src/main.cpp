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
  // The task requires to use only 2 variables.
  int n[5], i = 0;

  while (i < 5)
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
    i++;
  }
  
  i=0; // reset loop counter
  cout << endl << "The entered numbers are: ";

  while(i < 5){
    cout << n[i];
    if(i < 4) cout << ", ";
    else cout << "." << endl << endl;
    i++;
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

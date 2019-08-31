// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double cost, Tax, tip, bill;


  //Get the cost of meal
  std::cout << "Welcome to the Restaurant Bill Calculator!" << '\n';
  std::cout << " What is the total meal cost? ";
  std::cin >> cost;

  //Calculate Tax
  Tax= cost * .0775;
  std::cout << " Tax:        " << Tax << '\n';

  //Calculate tip
  tip= cost * .2;
  std::cout << " Tip:        " << tip << '\n';

  //Calculate bill
  bill= cost + Tax + tip;
  std::cout << " Total bill: " << bill << '\n';

  return 0;
}

#include <iostream>
#include <string>
#include <iomanip>

int main() {
  //bill total, tip percentage, number of people, 
  //tip amount, total amount per person, total amount
  double billTotal;
  double tipPercentage;
  double tipAmount;
  double totalAmount;
  int numberOfPeople;
  double amountPerPerson;

  //get bill total
  std::cout << "What is the total bill? $";
  std::cin >> billTotal;
  std::cout << std::endl;
  while(billTotal <= 0) {
    std::cout << "Invalid input, try again: ";
    std::cin >> billTotal; 
  }
 
  //get tip percentage
  std::cout << "Tip percentage: ";
  std::cin >> tipPercentage;
  std::cout << std::endl;
  while(tipPercentage <= 0) {
    std::cout << "Invalid input, try again: ";
    std::cin >> tipPercentage;
  }

  //get number of people
  std::cout << "Number of people: ";
  std::cin >> numberOfPeople;
  std::cout << std::endl;
  while(numberOfPeople <= 0)  {
    std::cout << "Invalid input, try again: ";
    std::cin >> numberOfPeople;
  }

  //calculate tip amount
  tipPercentage = tipPercentage * .01;
  tipAmount = billTotal * tipPercentage;

  //calculate total
  totalAmount = tipAmount + billTotal;


//display tip amount, total, and amount per person
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "The tip amount is $" << tipAmount << std::endl;
  std::cout <<  "The total is $" << totalAmount << std::endl;
  //calculate amount per person and display if there is more than one person
  if(numberOfPeople > 1) {
    amountPerPerson = totalAmount / numberOfPeople;
    std::cout << "The amount per person is $" << amountPerPerson << std::endl;
  }
   else
    return 0;
}



//round up to nearest dollar
//split evenly
//
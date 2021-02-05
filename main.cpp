#include <iostream>

using namespace std;

int main()
{
    // intro
  cout << "Welcome to Superstore\a" << endl;
  cout << "We offer two services here:" << endl;
  cout << "1.Sales of items" << endl;
  cout << "2.Making of inquiries" << endl;
  cout << "Please choose a service " << endl;
  int selection;
  cin >> selection;
  if (selection == 1)
    {
    cout << "You have opted to purchase our products\a" << endl;
    }else if(selection == 2)
    {
    cout << "You have opted for our inquiries\a" << endl;
    }else {
        cout << "You have entered the wrong option" << endl;
    }

  //declaration
  string name, id, item[] = {"1.Printer\n", "2.Phone\n", "3.Table\n"};
  int quantity, vat, choice;
  int price1 = 750;
  int price2 = 2580;
  int price3 = 130;
  //name
  cout << "Please enter your name\a" << endl;
  cin >> name;

  //unique id
  cout << "Please enter your unique id\a" << endl;
  cin >> id;

  //items
  cout << "Hello, " << name << " these are the items up for sales\a" << endl;
  cout << item[0];
  cout << item[1];
  cout << item[2];

  //purchase
  cout << "Please pick an item\a" << endl;
  cin >> choice;
  //printer
  if (choice == 1){
    cout << "The price of the printer is GHS" << price1 << endl;
    cout << "How many printers would like to buy?\n\a";
    cin >> quantity;
     //total cost
    vat = 0.12;
    int cost = price1 * quantity + vat ;
    cout << "Your total cost is GHS" << cost << endl;
  }
  //phone
    else if (choice == 2){
    cout << "The price of the phone is GHS" << price2 << endl;
    cout << "How many phones would like to buy?\n\a";
    cin >> quantity;
     //total cost
    vat = 0.12;
    int cost = price2 * quantity + vat ;
    cout << "Your total cost is GHS" << cost << endl;
    }
  //table
    else if (choice == 3){
    cout << "The price of the table is GHS" << price3 << endl;
    cout << "How many tables would like to buy?\n\a";
    cin >> quantity;
     //total cost
    vat = 0.12;
    int cost = price3 * quantity + vat ;
    cout << "Your total cost is GHS" << cost << endl;
    }

    else {
        cout << "The option you have selected is not listed above\a" << endl;
    }
    return 0;
}

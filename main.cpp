#include<iostream>

using namespace std;

int main() {
    char start;
    float shop(void);
    char choice;

    startL:
      cout << "Please press H to start shopping with Home Appliances" << endl;
    start:
      cin >> start;
    if (start == 'h' || start == 'H') {
      float total = shop();
      time_t t = time(NULL);
      tm * Tptr = localtime( & t);

      cout << "Bill Date";
      cout << Tptr -> tm_mday << "/";
      cout << 1 + Tptr -> tm_mon << "/";
      cout << 1900 + Tptr -> tm_year << endl;
      cout << "Bill Time : " << (Tptr -> tm_hour) << ":" << (Tptr -> tm_min) << ":" << (Tptr + tm_sec) << endl;
      cout << "Total BIll Amount : " << total << endl;

      if (total > 50000 && 100000) {
        total = total - (0.05 * total);
        cout << "Total Discount : 5%" << endl;
      } else if (total > 100000 && 125000) {
        total = total - (0.1 * total);
        cout << "Total Discount : 10%" << endl;
      } else if (total > 125000 && 150000) {
        total = total - (0.25 * total);
        cout << "Total Discount : 25%" << endl;
      } else if (total > 150000) {
        total = total - (0.5 * total);
        cout << "Total Discount : 50%" << endl;
      }

      cout << "Total Bill Amount : " << total << endl;

      Again:

      cout << "Do you want to shopping again" << endl;
      cin >> choice;

      if (choice == 'y' || choice == 'Y') {
        goto startL;
        else if (choice == 'n' || choice == 'N') {
          cout << "Thank you for shopping" << endl;
        } else {
          cout << "You have entered a wrong option, please press H" << endl;
        }
      }
    } else {
      cout << "You have entered a wrong option, please enter H to continue shopping" << endl;
      goto start;
    }

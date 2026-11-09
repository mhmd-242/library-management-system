#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Books{
    private:
        int ID;
        string bookTitle;
        string bookAuthor;
        int quantity;

    public:
        Books(int id, string bkTitle, string bkAuthor, int qtty){
            ID = id;
            bookTitle = bkTitle;
            bookAuthor = bkAuthor;
            if(qtty >= 0){
                quantity = qtty;
            }
            else{
                cout << "Invalid quantity number for the book " << bookTitle << ". The quantity is set to 0." << endl;
                quantity = 0;
            }
        }

};

void mainMenu();
void librarian();
void student();

int main(){
    mainMenu();


    return 0;
}

void mainMenu(){
    int mainMenuChoice = 0;
    
    do{
        cout << "==============================" << endl;
        cout << "Main Menu" << endl;
        cout << "Please choose your service" << endl;
        cout << "1. Librarian" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit system" << endl;
        cin >> mainMenuChoice;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid input." << endl;
            continue;
        }
        switch(mainMenuChoice){
            case 1: 
                librarian();
                break;
            case 2:
                student();
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
            
        }
    }
    while(!(mainMenuChoice == 3));
}

void librarian(){
  int librarianMenuChoice = 0;

  do{
    cout << "==============================" << endl;
    cout << "Librarian Menu" << endl;
    cout << "Please choose your service" << endl;
    cout << "1. Add book" << endl;
    cout << "2. Delete book" << endl;
    cout << "3. Display all books" << endl;
    cout << "4. View borrow records" << endl;
    cout << "5. Log out" << endl;
    cin  >> librarianMenuChoice;
    if(cin.fail()){
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Invalid input! Please input a valid input." << endl;
      continue;
    }
    switch(librarianMenuChoice){
      case 1:
        cout << "Add book" << endl;
        break;
      case 2:
        cout << "Delete book" << endl;
        break;
      case 3:
        cout << "Display all books" << endl;
        break;
      case 4:
        cout << "View borrow records" << endl;
        break;
      case 5:
        break;
      default:
        cout << "Invalid choice! Please try again." << endl;
        break;
    }
  }
  while(!(librarianMenuChoice == 5));
}

void student(){
  int studentMenuChoice = 0;

  do{
    cout << "==============================" << endl;
    cout << "Student Menu" << endl;
    cout << "Please choose your service." << endl;
    cout << "1. Display all books" << endl;
    cout << "2. Search for a book" << endl;
    cout << "3. Borrow a book" << endl;
    cout << "4. Return a book" << endl;
    cout << "5. Back to main menu" << endl;
    cin >> studentMenuChoice;
    if(cin.fail()){
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Invalid input! Please input a valid input." << endl;
      continue; 
    }

    switch(studentMenuChoice){
      case 1: 
        cout << "Display all books" << endl;
        break;
      case 2:
        cout << "Search for a book" << endl;
        break;
      case 3:
        cout << "Borrow a book" << endl;
        break;
      case 4:
        cout << "Return a book" << endl;
        break;
      case 5:
        break;
      default:
        cout << "Invalid choice! Please try again." << endl;
    }
  }
  while(!(studentMenuChoice == 5));
}
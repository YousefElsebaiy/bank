#include <iostream>
using namespace std;
// ************Variable********** //
double balance = 1000;
int deposit = 0;
int withdraw = 0;
int password = 1162010;
int choice = 0;
// ************ end of the Variable********** //
// show is function to display the menu of atm
void show(){
    cout << "**** Menu ****" << endl;
    cout << "1.balance" << endl;
    cout << "2.withdraw" << endl;
    cout << "3.deposit" << endl;
    cout << "4.Exit" << endl;
    cout << "***************" << endl;
}
void process(){
    cout << "enter your password" << endl;
    cin >> password;
    do{
        if(password == 1162010){
            cout << "enter your choice: ";
            cin >> choice;
            switch(choice){
                case 1:
                    cout << "your balance is " << balance << endl;
                    break;
                case 2:
                    cout << "note: your balance is " << balance << endl;
                    cout << "enter your amount" << endl;
                    cin >> withdraw;
                    if(withdraw > balance){
                        cout << "sorry you can't witdraw this amount" << endl;
                    }
                    else{
                        // balance = balance - withdraw;//balance = 1000.  withdraw = 500
                        balance -= withdraw;    
                        cout << "Now: your balance is " << balance << endl;
                    }
                    break;
                case 3:
                    cout << "your current balance is " << balance << endl << endl;
                    cout << "enter your deposit money: ";
                    cin >> deposit; //balance = 1000 . deposit = 100
                    balance += deposit; //1100
                    cout << "yout new balance is " << balance << endl;
                    break;
                case 4:
                    cout << "thank you" << endl;
                    break;
            }//end of switch
        }// end of if
        else{
            char option = 'o';
            cout << "password is incorrect, Do you want try again ? Enter [y] of yes or [n] of no" << endl;
            cin >> option;
            if(option == 'y' || option == 'Y'){
                cout << "enter your password" << endl;
                cin >> password;
            }
            else{
                choice = 4;
            }
        }
    }while(choice < 4);
}//end of procces
int main(){
    show();
    process();
    system("pause");
}
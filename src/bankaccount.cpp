#include <iostream>
using namespace std;

class Bankaccount{
    private:
        string accountTitle;
        int balance, limit;
    public:
        Bankaccount(): accountTitle(""), balance(0), limit(0){};
        Bankaccount(string title, int bal): accountTitle(title), balance(bal), limit(0){};
        Bankaccount(string title, int bal, int lim): accountTitle(title), balance(bal), limit(lim){};

    void deposit(int amount){
        balance += amount;
        cout << "Successfully Deposited " << amount << endl;
    }
    void withdraw(int amount){
        if (balance >= amount and limit >= amount){
            balance -= amount;
            cout << "Withdrew " << amount << " successfully" << endl;
        }
        else cout << "Withdraw failed , insufficient funds" << endl;
    }
    void close(){
        cout << "Closing Status: " << endl;
        cout << "Title: " << accountTitle << " , Current Balance: " << balance << " , Daily Limit: " << limit << endl;
    }

};

int main(){
    string title;
    int bal, lim;

    cin >> title;
    cin >> bal;
    cin >> lim;

    Bankaccount user1(title, bal, lim);

    char choice;
    int amt;
    cin >> choice ;
    if (choice != 'q') cin >> amt;

    while(choice != 'q'){
        if (choice == 'w')user1.withdraw(amt);
        else if (choice == 'd') user1.deposit(amt);
        cin >> choice ;
        if (choice != 'q') cin >> amt;
    }
    user1.close();
    return 0;
}
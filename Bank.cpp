//bank system 

#include<iostream>
using namespace std;

class Bank{
    char Name;
    int AccNo;
    char AccType;
    int Balance;
    public:
    void OpenAccount();
    void DepositMoney();
    void WithdrawMoney();
    void DisplayAccount();

    Bank(){
        Name=' ';
        AccNo=0;
        AccType=' ';
        Balance=0;
    }

};

void Bank::OpenAccount(){
    cout<<"Enter your name: ";
    cin>>Name;
    cout<<"Enter your Account Number: ";
    cin>>AccNo;
    cout<<"Enter your Account Type: ";
    cin>>AccType;
    cout<<"Enter your Balance: ";
    cin>>Balance;
}

void Bank::DisplayAccount(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Account Number: "<<AccNo<<endl;
    cout<<"Account Type: "<<AccType<<endl;
    cout<<"Balance: "<<Balance<<endl;
}

void Bank::DepositMoney(){
    int deposit;
    cout<<"Enter the amount you want to deposit: ";
    cin>>deposit;
    Balance+=deposit;
    cout<<"Your new balance is: "<<Balance<<endl;
}

void Bank::WithdrawMoney(){
    int withdraw;
    cout<<"Enter the amount you want to withdraw: ";
    cin>>withdraw;
    Balance-=withdraw;
    cout<<"Your new balance is: "<<Balance<<endl;
}

int main(){
    Bank b;
    int choice;
    cout<<"1. Open Account"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Display Account"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            b.OpenAccount();
            break;
        case 2:
            b.DepositMoney();
            break;
        case 3:
            b.WithdrawMoney();
            break;
        case 4:
            b.DisplayAccount();
            break;
        case 5:
            exit(1);
        default:
            cout<<"Invalid choice"<<endl;
    }
}
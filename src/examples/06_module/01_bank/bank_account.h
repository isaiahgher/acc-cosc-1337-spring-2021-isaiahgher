//bank_account.h
class BankAccount
{
public://access specifiers-USERS OF OUR CLASS(OTHER OBJECTS) CAN SEE WHATS IN PUBLIC
    BankAccount()=default;//synthesized default constructor
    BankAccount(int b) : balance(b){}
    int get_balance()const{return balance;}//header where you create the protoype
    void deposit(int amount);
    void withdraw(int amount);
private://access specifier-ONLY BANK ACCOUNT CLASS SEES DATA/FUNCTIONS IN PRIVATE
    int balance{0};//protect the data integrity
};

//free functions-NOT PART OF THE BANKACCOUNT CLASS
void display_account(const BankAccount& account);
BankAccount get_account(int amount);
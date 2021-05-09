#include <iostream>
#include <cstring>

class Account
{
    public:
        std::string name;
        int acct_num;
        float balance;

        void set_values(std::string, int, float);

};

std::ostream& operator<<(std::ostream& os, const Account & obj)
{
    os << "(" << obj.name << ", " << obj.acct_num << ", " << obj.balance << ")";
    return os;
}

void Account::set_values(std::string user_name, int user_acct_num, float user_balance)
{
    name = user_name;
    acct_num = user_acct_num;
    balance = user_balance;
}


int main()
{
    Account user;
    user.set_values("Scooby", 1001, 1555.45);

    std::cout << user;

    return 0;
}
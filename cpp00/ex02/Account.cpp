#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>


int Account::_nbAccounts;
int Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


 Account::Account()
 {
   
    
 }
Account::Account(int initial_deposit)
{   
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
    
}
Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed";
    std::cout << std::endl;
}
void Account::_displayTimestamp()
{
    time_t currentT = time(NULL);
    struct tm *l = localtime(&currentT);
   std::cout <<"[" << l->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << l->tm_mon  + 1;
    std::cout << std::setfill('0') << std::setw(2)<<l->tm_mday<<"_";
    std::cout << std::setfill('0') << std::setw(2)<<l->tm_hour;
    std::cout << std::setfill('0') << std::setw(2)<< l->tm_min;
    std::cout<< std::setfill('0') << std::setw(2) <<l->tm_sec << "]";

}
int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
    return (_totalAmount);
}
int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}
void Account::	displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " acounts:"<<_nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
}
void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}
void    Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits ++;
    _totalAmount+=deposit;
     _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << p_amount;
    std::cout << ";deposits:" << deposit;
    std::cout << ";amount:" << _amount;
    std::cout <<";nb_depoosits:" << _nbDeposits;
    std::cout << std::endl;
    _totalNbDeposits++;
}
int		Account::checkAmount( void ) const
{
    if (_amount < 0)
        return (0);
    return (1);
}

bool Account::makeWithdrawal(int withdrawal)
{
    int p_amount = _amount;
    _amount = _amount - withdrawal;
    if (!checkAmount())
    {
        _amount = p_amount;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex;
        std::cout << ";p_amount:" << _amount;
        std::cout << ";withdrawal:refused";
        std::cout << std::endl;
        return (false);
    }
    else
    {
        _nbWithdrawals++;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex;
        std::cout << ";p_amount:" << _amount;
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << _amount;
        std::cout <<";nb_withdrawals:" << _nbWithdrawals;
        std::cout << std::endl;
       _totalNbWithdrawals++;
       _totalAmount-=withdrawal;
        return (true);
    }
}


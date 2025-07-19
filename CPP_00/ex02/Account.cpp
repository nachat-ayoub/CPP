#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{	
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{ 
	std::time_t now = std::time(nullptr);
	std::tm* t = std::localtime(&now);

	std::cout << '['
		<< std::setfill('0') << std::setw(4) << (1900 + t->tm_year)
		<< std::setw(2) << (t->tm_mon + 1)
		<< std::setw(2) << t->tm_mday << '_'
		<< std::setw(2) << t->tm_hour
		<< std::setw(2) << t->tm_min
		<< std::setw(2) << t->tm_sec
		<< "] ";
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
			  << "total:" << Account::_totalAmount << ";"
			  << "deposits:" << Account::_totalNbDeposits << ";"
			  << "withdrawals:" << Account::_totalNbWithdrawals
			  << std::endl;
}

int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}
int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}
int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}
int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit ) {
	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << _amount << ";"
			  << "nb_deposits:" << _nbDeposits
			  << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	bool refused = withdrawal > _amount;
	int p_amount = _amount;

	if (!refused)
	{
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		_nbWithdrawals++;
	}

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << p_amount << ";";
	if (refused)
		std::cout << "withdrawal:" << "refused" << std::endl;
	else
		std::cout << "withdrawal:" << withdrawal << ";"
				  << "amount:" << _amount << ";"
				  << "nb_withdrawals:" << _nbWithdrawals
				  << std::endl;
	return refused;
}
int		Account::checkAmount(void) const {
	return _amount;
}
void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals
			  << std::endl;
}
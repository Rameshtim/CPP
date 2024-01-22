/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:46:31 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 15:16:18 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip> //std::setw, setfill
#include <iostream>
#include <ctime> //time, localtime

using std::cin;
using std::cout;
using std::endl;

//initialize static variables without static
//because https://stackoverflow.com/questions/15725922/static-function-a-storage-class-may-not-be-specified-here

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//Getters 

int	Account::getNbAccounts() {
	return _nbAccounts;
}

int	Account::getTotalAmount() {
	return _totalAmount;
}

int	Account::getNbDeposits() {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

//Parameterized Constructor first
Account::Account(int initial_deposit) {
	_nbAccounts++;
	 _accountIndex = _nbAccounts -1;
	 _amount = initial_deposit;
	 _nbDeposits = 0;
	 _nbWithdrawals = 0;
	 _totalAmount += initial_deposit;
	_displayTimestamp();
	cout << "index:" <<  _accountIndex << ";"
		<< "amount:" <<  _amount << ";"
		<< "created" << endl;
	return;
}

//after every function call
void	Account::displayAccountsInfos() {
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << endl;
}


//Destructor
//at the end
Account::~Account() {
	_displayTimestamp();
	cout << "index:" <<  _accountIndex << ";"
		<< "amount:" <<  _amount << ";"
		<< "closed:" << endl;
}

//third make deposit
void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	cout << "index:" <<  _accountIndex << ";"
		<< "p_amount:" <<  _amount << ";";

	 _amount += deposit;
	 _nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	cout << "deposit:" << deposit << ";"
		<< "amount:" <<  _amount << ";"
		<< "nb_deposits:" <<  _nbDeposits << endl;
}

//third function to make withdrawal
//and deny if not enough balance
bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	cout << "index:" <<  _accountIndex << ";"
		<< "p_amount:" <<  _amount << ";";
	
	 _amount -= withdrawal;
	if (checkAmount()) {
		 _amount += withdrawal;
		cout << "withdrawal:refused" << endl;
		return (false);
	}
	_totalAmount -= withdrawal;
	 _nbWithdrawals++;
	cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" <<  _amount << ";"
		<< "nb_withdrawals:" <<  _nbWithdrawals << endl;
	return true;
}

//second function to display
//and after deposit
//and after withdrawal
void Account::displayStatus(void) const {
	_displayTimestamp();
	cout << "index:" <<  _accountIndex << ";"
		<< "amount:" <<  _amount << ";"
		<< "deposits:" <<  _nbDeposits << ";"
		<< "withdrawals:" <<  _nbWithdrawals << endl;
}

int Account::checkAmount(void) const {
	if ( _amount < 0) {
		return (1);
	}
	return (0);
}

void Account::_displayTimestamp(void) {
	time_t	t_stamp_ptr; //hold the current time
	struct tm	*t_stmp; //struct to hold broken time

	std::time(&t_stamp_ptr);//retrieve the current time
	//convert to a structure representing the localtime
	t_stmp = localtime(&t_stamp_ptr);
	cout << "[";
	cout << t_stmp->tm_year + 1900; //year
	cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mon + 1; // month 01 - 12
	cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mday << "_"; // day 01 - 31
	cout << std::setw(2) << std::setfill('0') << t_stmp->tm_hour;
	cout << std::setw(2) << std::setfill('0') << t_stmp->tm_min;
	cout << std::setw(2) << std::setfill('0') << t_stmp->tm_sec;
	cout << "]";
}
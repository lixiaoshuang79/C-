//2019302080239��С˫
#pragma once
#include<string>
#include<iostream>
#include"BankCard.h"
#include"SavingsAccount.h"
using namespace std;

class BankAgent
{
public:
	BankAgent(SavingsAccount &a, BankCard &b,int password1);
}; 

//2019302080239��С˫
#include<string>
#include<iostream>
#include"BankCard.h"
#include"SavingsAccount.h"
#include"BankAgent.h"
using namespace std;

int main()
{
	SavingsAccount accounts[3] = { SavingsAccount("����",5000),SavingsAccount("����",3000),SavingsAccount("����",4000) };
	BankCard cards[3] = { BankCard(1),BankCard(2),BankCard(3)};
	BankAgent agent1(accounts[0], cards[0], 123456);
	BankAgent agent2(accounts[1], cards[1], 654321);
	BankAgent agent3(accounts[2], cards[2], 135790);
	int a, b, m, n,p;
	while (true)
	{
		cout << "��������п�,���뿨�ţ�" << endl;
		cin >> a;
		for (int i = 0;i <3; i++)
		{
			if (cards[i].num == a)
			{
				cout << "�������������룺" << endl;
				cin >> b;
				if (cards[i].password == b)
				{
					cout << "������ȷ����ѡ�����(1ȡ�2���,3��ʾ�˻���Ϣ)" << endl;
					cin >> m;
					if (m == 1)
					{
						cout << "������ȡ���" << endl;
						cin >> n;
						accounts[i].qu(n);
						accounts[i].show();
					}
					if (m == 2)
					{
						cout << "���������" << endl;
						cin >> p;
						accounts[i].cun(n);
						accounts[i].show();

					}
					if (m == 3)
					{
						accounts[i].show();
					}
				}
			}
		}
	}

}
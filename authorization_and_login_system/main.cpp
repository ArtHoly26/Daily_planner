#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

class Enter
{
private:
	string login;
	string password;
	bool pass = false;
	bool logs = false;

public:

void Login (string login)
{
	string path = "Login.txt";
	ofstream log;
	log.open(path);
	if (!log.is_open()) cout << "������ ������" << endl;
	else
	{
		cout << "������� ����� ����� ������������: " << endl;
		cin >> login;
		log << login;
		this->login = login;
	}
	log.close();
}

void Password(string password)
{
	string path = "Password.txt";
	ofstream pass;
	pass.open(path);
	if(!pass.is_open()) cout << "������: " << endl;
	else
	{
		cout << "������� ����� ������: " << endl;
		cin >> password;
		pass << password;
		this->password = password;
	}
	pass.close();
}

void AuthorizationLogin(string login)
{
	string path = "Login.txt";
	string log1;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������: " << endl;
	else
	{
		cout << "������� �����: " << endl;
		cin >> log1;
		while (!read.eof())
		{
			read >> login;
			getline(read, login);

			if (login == log1) logs = true;
		}
	}
	read.close();
}

void AuthorizationPassword(string password)
{
	string path = "Password.txt";
	string password1;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������: " << endl;
	else
	{
		cout << "������� ������: " << endl;
		cin >> password1;
		while (!read.eof())
		{
			read >> password;
			getline(read, password);

			if (password == password1) pass = true;
		}
	}
	read.close();
}

bool Check()
{
	if (pass && logs == true)
	return true;
	else return false;
}

};

void AddMonday()
{
	    cin.get();
		string path = "Monday.txt";
		ofstream writen;
		string notes;
		writen.open(path,ofstream::app);

		if (!writen.is_open()) cout << "������ �������� �����!";
		else
		{
			cout << "���� ������ �����������: ������� �������" << endl;
			SetConsoleCP(1251);
			getline(cin, notes);
			writen << notes;
			SetConsoleCP(866);
		}
		writen.close();
}
void AddTuesday()
{
	cin.get();
	string path = "Tuesday.txt";
	ofstream writen;
	string notes;
	writen.open(path, ofstream::app);

	if (!writen.is_open()) cout << "������ �������� �����!";
	else
	{
		cout << "���� ������ �������, ������� �������" << endl;
		SetConsoleCP(1251);
		getline(cin, notes);
		writen << notes << "\n";
		SetConsoleCP(866);
	}
	writen.close();
}
void AddWednsday()
{
	cin.get();
	string path = "Wednsday.txt";
	ofstream writen;
	string notes;
	writen.open(path, ofstream::app);

	if (!writen.is_open()) cout << "������ �������� �����!";
	else
	{
		cout << "���� ������ �����, ������� �������" << endl;
		SetConsoleCP(1251);
		getline(cin, notes);
		writen << notes << "\n";
		SetConsoleCP(866);
	}
	writen.close();
}
void AddThursday()
{
	cin.get();
	string path = "Thursday.txt";
	ofstream writen;
	string notes;
	writen.open(path, ofstream::app);

	if (!writen.is_open()) cout << "������ �������� �����!";
	else
	{
		cout << "���� ������ �������, ������� �������" << endl;
		SetConsoleCP(1251);
		getline(cin, notes);
		writen << notes << "\n";
		SetConsoleCP(866);
	}
	writen.close();
}
void AddFriday()
{
	cin.get();
	string path = "Friday.txt";
	ofstream writen;
	string notes;
	writen.open(path, ofstream::app);

	if (!writen.is_open()) cout << "������ �������� �����!";
	else
	{
		cout << "���� ������ �������, ������� �������" << endl;
		SetConsoleCP(1251);
		getline(cin, notes);
		writen << notes << "\n";
		SetConsoleCP(866);
	}
	writen.close();
}
void AddSaturday()
{
	cin.get();
	string path = "Saturday.txt";
	ofstream writen;
	string notes;
	writen.open(path, ofstream::app);

	if (!writen.is_open()) cout << "������ �������� �����!";
	else
	{
		cout << "���� ������ �������, ������� �������" << endl;
		SetConsoleCP(1251);
		getline(cin, notes);
		writen << notes << "\n";
		SetConsoleCP(866);
	}
	writen.close();
}
void AddSunday()
{
	cin.get();
	string path = "Sunday.txt";
	ofstream writen;
	string notes;
	writen.open(path, ofstream::app);

	if (!writen.is_open()) cout << "������ �������� �����!";
	else
	{
		cout << "���� ������ �����������, ������� �������" << endl;
		SetConsoleCP(1251);
		getline(cin, notes);
		writen << notes << "\n";
		SetConsoleCP(866);
	}
	writen.close();
}

void ReadMonday()
{
	string path = "Monday.txt";
	string msg;
	ifstream read;
	read.open(path);

	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �����������: " << endl;

		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
		
	}
	read.close();
}
void ReadTuesday()
{
	string path = "Tuesday.txt";
	string msg;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �������: " << endl;
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
	}
	read.close();
}
void ReadWednsday()
{
	string path = "Wednsday.txt";
	string msg;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �����: " << endl;
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
	}
	read.close();
}
void ReadThursday()
{
	string path = "Thursday.txt";
	string msg;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �������: " << endl;
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
	}
	read.close();
}
void ReadFriday()
{
	string path = "Friday.txt";
	string msg;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �������: " << endl;
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
	}
	read.close();
}
void ReadSaturday()
{
	string path = "Saturday.txt";
	string msg;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �������: " << endl;
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
	}
	read.close();
}
void ReadSunday()
{
	string path = "Sunday.txt";
	string msg;
	ifstream read;
	read.open(path);
	if (!read.is_open()) cout << "������ ������ �����!" << endl;
	else
	{
		cout << "������� �� �����������: " << endl;
		while (!read.eof())
		{
			msg = "";
			getline(read, msg);
			cout << msg << endl;
		}
	}
	read.close();
}

void ClearMonday()
{
	string path = "Monday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}
void ClearTuesday()
{
	string path = "Tuesday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}
void ClearWednsday()
{
	string path = "Wednsday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}
void ClearThursday()
{
	string path = "Thursday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}
void ClearFriday()
{
	string path = "Friday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}
void ClearSaturday()
{
	string path = "Saturday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}
void ClearSunday()
{
	string path = "Sunday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "������ �������� �����";

	destroy.close();
}

int main()
{
	setlocale(LC_ALL, "rus");
	Enter user1;
	bool mainFlag = false;
	bool mainFlag2 = false;
	bool mainFlag3 = false;
	bool mainFlag4 = false;
	int choise1;
	int caseChoise1;
	int caseChoise2;
	int caseChoise3;
	user1.Login("");
	user1.Password("");
	system("cls");

	do
	{
		user1.AuthorizationLogin("");
		user1.AuthorizationPassword("");
		system("cls");

	} while (!user1.Check());

	cout << "����� ���������� � ������ ������������!" << endl;
	system("pause");
	system("cls");

	do
	{
		cout << "�������� ����������� ��������:" << endl
			<< "1 - ������� �������" << endl
			<< "2 - ��������� �������" << endl
			<< "3 - �������� �������" <<endl
			<< "4 - ����� �� ���������" << endl;
		cin >> choise1;
		system("pause");
		system("cls");
		
		switch (choise1)
		{
		    case 1:
				do
				{
					cout << "�������� ���� ������ ��� ������ �������:" << endl
						<< "1 - �����������" << endl
						<< "2 - �������" << endl
						<< "3 - �����" << endl
						<< "4 - �������" << endl
						<< "5 - �������" << endl
						<< "6 - �������" << endl
						<< "7 - �����������" << endl
						<< "8 - ����� �� ������" << endl;
					cin >> caseChoise1;
					system("pause");
					system("cls");

					switch (caseChoise1)
					{
					case 1:
						AddMonday();
						system("pause");
						system("cls");
						break;
					case 2:
						AddTuesday();
						system("pause");
						system("cls");
						break;
					case 3:
						AddWednsday();
						system("pause");
						system("cls");
						break;
					case 4:
						AddThursday();
						system("pause");
						system("cls");
						break;
					case 5:
						AddFriday();
						system("pause");
						system("cls");
						break;
					case 6:
						AddSaturday();
						system("pause");
						system("cls");
						break;
					case 7:
						AddSunday();
						system("pause");
						system("cls");
						break;
					case 8:
						mainFlag2 = true;
						system("pause");
						system("cls");
						break;
					default:cout << "������, ����� ������� ���! ������� ������, ���� ����������." << endl;
						system("pause");
						system("cls");
					}
				} while (!mainFlag2);
			     break;
	
		    case 2:
				do
				{
					cout << "�������� ���� ������ ��� ������ �������:" << endl
						<< "1 - �����������" << endl
						<< "2 - �������" << endl
						<< "3 - �����" << endl
						<< "4 - �������" << endl
						<< "5 - �������" << endl
						<< "6 - �������" << endl
						<< "7 - �����������" << endl
						<< "8 - ����� �� ������ �������" << endl;
					cin >> caseChoise2;

					switch (caseChoise2)
					{
					case 1:
						ReadMonday();
						system("pause");
						system("cls");
						break;
					case 2:
						ReadTuesday();
						system("pause");
						system("cls");
						break;
					case 3:
						ReadWednsday();
						system("pause");
						system("cls");
						break;
					case 4:
						ReadThursday();
						system("pause");
						system("cls");
						break;
					case 5:
						ReadFriday();
						system("pause");
						system("cls");
						break;
					case 6:
						ReadSaturday();
						system("pause");
						system("cls");
						break;
					case 7:
						ReadSunday();
						system("pause");
						system("cls");
						break;
					case 8:
						mainFlag3 = true;
						system("pause");
						system("cls");
						break;
					default:cout << "������, ����� ������� ���! ������� ������, ���� ����������." << endl;
						system("pause");
						system("cls");
					}
				} while (!mainFlag3);
			break;

			case 3:
				do
				{
					cout << "�������� ���� ������ ��� �������� �������:" << endl
						<< "1 - �����������" << endl
						<< "2 - �������" << endl
						<< "3 - �����" << endl
						<< "4 - �������" << endl
						<< "5 - �������" << endl
						<< "6 - �������" << endl
						<< "7 - �����������" << endl
						<< "8 - ����� �� ������ �������" << endl;
					cin >> caseChoise3;

					switch (caseChoise3)
					{
					case 1:
						ClearMonday();
						system("pause");
						system("cls");
						break;
					case 2:
						ClearTuesday();
						system("pause");
						system("cls");
						break;
					case 3:
						ClearWednsday();
						system("pause");
						system("cls");
						break;
					case 4:
						ClearThursday();
						system("pause");
						system("cls");
						break;
					case 5:
						ClearFriday();
						system("pause");
						system("cls");
						break;
					case 6:
						ClearSaturday();
						system("pause");
						system("cls");
						break;
					case 7:
						ClearSunday();
						system("pause");
						system("cls");
						break;
					case 8:
						mainFlag4 = true;
						system("pause");
						system("cls");
						break;
					default:cout << "������, ����� ������� ���! ������� ������, ���� ����������." << endl;
						system("pause");
						system("cls");
					}
				} while (!mainFlag4);
				break;

		    case 4:
			mainFlag = true;
			break;

		    default: cout << "������, ����� ������� ���! ������� ������, ���� ����������." << endl;
			system("pause");
			system("cls");
			
		}
	} while (!mainFlag);
	
}
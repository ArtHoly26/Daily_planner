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
	if (!log.is_open()) cout << "Ошибка записи" << endl;
	else
	{
		cout << "Введите новый логин пользователя: " << endl;
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
	if(!pass.is_open()) cout << "Ошибка: " << endl;
	else
	{
		cout << "Введите новый пароль: " << endl;
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
	if (!read.is_open()) cout << "Ошибка записи: " << endl;
	else
	{
		cout << "Введите логин: " << endl;
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
	if (!read.is_open()) cout << "Ошибка: " << endl;
	else
	{
		cout << "Введите пароль: " << endl;
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

		if (!writen.is_open()) cout << "Ошибка открытия файла!";
		else
		{
			cout << "День недели понедельник: введите заметку" << endl;
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

	if (!writen.is_open()) cout << "Ошибка открытия файла!";
	else
	{
		cout << "День недели вторник, введите заметку" << endl;
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

	if (!writen.is_open()) cout << "Ошибка открытия файла!";
	else
	{
		cout << "День недели среда, введите заметку" << endl;
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

	if (!writen.is_open()) cout << "Ошибка открытия файла!";
	else
	{
		cout << "День недели четверг, введите заметку" << endl;
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

	if (!writen.is_open()) cout << "Ошибка открытия файла!";
	else
	{
		cout << "День недели пятница, введите заметку" << endl;
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

	if (!writen.is_open()) cout << "Ошибка открытия файла!";
	else
	{
		cout << "День недели суббота, введите заметку" << endl;
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

	if (!writen.is_open()) cout << "Ошибка открытия файла!";
	else
	{
		cout << "День недели воскресенье, введите заметку" << endl;
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

	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на понедельник: " << endl;

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
	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на вторник: " << endl;
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
	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на среду: " << endl;
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
	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на четверг: " << endl;
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
	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на пятницу: " << endl;
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
	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на субботу: " << endl;
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
	if (!read.is_open()) cout << "Ошибка чтения файла!" << endl;
	else
	{
		cout << "Заметки на воскресенье: " << endl;
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
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

	destroy.close();
}
void ClearTuesday()
{
	string path = "Tuesday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

	destroy.close();
}
void ClearWednsday()
{
	string path = "Wednsday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

	destroy.close();
}
void ClearThursday()
{
	string path = "Thursday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

	destroy.close();
}
void ClearFriday()
{
	string path = "Friday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

	destroy.close();
}
void ClearSaturday()
{
	string path = "Saturday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

	destroy.close();
}
void ClearSunday()
{
	string path = "Sunday.txt";
	ofstream destroy(path);
	destroy.open(path, ofstream::out | ofstream::trunc);
	if (!destroy.is_open()) cout << "Ошибка открытия файла";

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

	cout << "Добро пожаловать в личный еженедельник!" << endl;
	system("pause");
	system("cls");

	do
	{
		cout << "Выберите необходимую операцию:" << endl
			<< "1 - Сделать заметку" << endl
			<< "2 - Прочитать заметки" << endl
			<< "3 - Очистить заметки" <<endl
			<< "4 - Выход из программы" << endl;
		cin >> choise1;
		system("pause");
		system("cls");
		
		switch (choise1)
		{
		    case 1:
				do
				{
					cout << "Выберите день недели для записи заметки:" << endl
						<< "1 - Понедельник" << endl
						<< "2 - Вторник" << endl
						<< "3 - Среда" << endl
						<< "4 - Четверг" << endl
						<< "5 - Пятница" << endl
						<< "6 - Суббота" << endl
						<< "7 - Воскресенье" << endl
						<< "8 - Выйти из записи" << endl;
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
					default:cout << "Ошибка, такой команды нет! Нажмите кнопку, чтоб продолжить." << endl;
						system("pause");
						system("cls");
					}
				} while (!mainFlag2);
			     break;
	
		    case 2:
				do
				{
					cout << "Выберите день недели для чтения заметок:" << endl
						<< "1 - Понедельник" << endl
						<< "2 - Вторник" << endl
						<< "3 - Среда" << endl
						<< "4 - Четверг" << endl
						<< "5 - Пятница" << endl
						<< "6 - Суббота" << endl
						<< "7 - Воскресенье" << endl
						<< "8 - Выход из чтения заметок" << endl;
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
					default:cout << "Ошибка, такой команды нет! Нажмите кнопку, чтоб продолжить." << endl;
						system("pause");
						system("cls");
					}
				} while (!mainFlag3);
			break;

			case 3:
				do
				{
					cout << "Выберите день недели для удаления заметок:" << endl
						<< "1 - Понедельник" << endl
						<< "2 - Вторник" << endl
						<< "3 - Среда" << endl
						<< "4 - Четверг" << endl
						<< "5 - Пятница" << endl
						<< "6 - Суббота" << endl
						<< "7 - Воскресенье" << endl
						<< "8 - Выход из чтения заметок" << endl;
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
					default:cout << "Ошибка, такой команды нет! Нажмите кнопку, чтоб продолжить." << endl;
						system("pause");
						system("cls");
					}
				} while (!mainFlag4);
				break;

		    case 4:
			mainFlag = true;
			break;

		    default: cout << "Ошибка, такой команды нет! Нажмите кнопку, чтоб продолжить." << endl;
			system("pause");
			system("cls");
			
		}
	} while (!mainFlag);
	
}
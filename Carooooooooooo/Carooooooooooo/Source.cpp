#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <conio.h>
#include <mmsystem.h>
using namespace std;
void TextColor(int x)
{
	HANDLE mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void gotoXY(int x, int y)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void fixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}
void AnTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void HienTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = TRUE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void Screen();
void MoldGame();
void TaoKhung(int bottom)
{
	char lr = 186;
	char tb = 205;
	gotoXY(4, 5);
	for (int i = 0; i < 193; i++)
	{
		cout << tb;
	}
	gotoXY(4, 6);
	for (int i = 0; i < 193; i++)
	{
		cout << tb;
	}
	for (int i = 5; i < 50; i++)
	{
		gotoXY(4, i);
		cout << lr << lr;
		gotoXY(195, i);
		cout << lr << lr;

	}
	gotoXY(4, bottom);
	for (int i = 0; i < 193; i++)
	{
		cout << tb;
	}
	gotoXY(4, bottom + 1);
	for (int i = 0; i < 193; i++)
	{
		cout << tb;
	}
}
void LogoGame()
{
	srand(time(0));
	int x = 22, y = 5;
	TextColor(4);
	gotoXY(x + 4, y + 4);       cout << "x           x";
	gotoXY(x + 2, y + 5);     cout << "x x x       x x x";
	gotoXY(x, y + 6);     cout << "x x x x x   x x x x x";
	gotoXY(x + 2, y + 7);     cout << "x x x x x x x x x";
	gotoXY(x + 4, y + 8);      cout << "x x x x x x x";
	gotoXY(x + 6, y + 9);        cout << "x x x x x";
	gotoXY(x + 4, y + 10);      cout << "x x x x x x x";
	gotoXY(x + 2, y + 11);    cout << "x x x x x x x x x";
	gotoXY(x, y + 12);    cout << "x x x x x   x x x x x";
	gotoXY(x + 2, y + 13);   cout << "x x x       x x x";
	gotoXY(x + 4, y + 14);      cout << "x           x";


	int z = 43;
	TextColor(rand() % 15 + 1);
	gotoXY(x + z, y + 4);			    cout << "ooooooooooo";
	gotoXY(x + z - 2, y + 5);		  cout << "ooooooooooooooo";
	gotoXY(x + z - 3, y + 6);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 3, y + 7);		 cout << "oooooooo  ooooooo";
	gotoXY(x + z - 3, y + 8);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 3, y + 9);		 cout << "oooooo     ";
	gotoXY(x + z - 3, y + 10);		 cout << "oooooo     ";
	gotoXY(x + z - 3, y + 11);		 cout << "oooooo    ";
	gotoXY(x + z - 3, y + 12);		 cout << "oooooooo  ooooooo";
	gotoXY(x + z - 3, y + 13);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 2, y + 14);		  cout << "ooooooooooooooo";
	gotoXY(x + z, y + 15);				cout << "ooooooooooo";



	TextColor(rand() % 15 + 1);
	gotoXY(x + z - 3 + 22, y + 4);					 cout << "ooooooooo";
	gotoXY(x + z - 4 + 22 - 2, y + 5);		  cout << "ooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 6);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 7);	     cout << "ooooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 8);	     cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 9);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	TextColor(rand() % 15 + 1);
	gotoXY(x + z + 33, y + 4);			 cout << "ooooo   ooooooooo";
	gotoXY(x + z + 33, y + 5);			 cout << "oooooooooooooooooo";
	gotoXY(x + z + 33, y + 6);			 cout << "ooooooooooooooooooo";
	gotoXY(x + z + 33, y + 7);			 cout << "oooooooooooooooooooo";
	gotoXY(x + z + 1 + 33, y + 8);		 cout << "ooooooo     ooooooo";
	gotoXY(x + z + 1 + 33, y + 9);		 cout << "ooooooo     ooooooo";
	gotoXY(x + z + 1 + 33, y + 10);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 11);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 12);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 13);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 14);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 15);		 cout << "ooooooo";
	TextColor(rand() % 15 + 1);
	gotoXY(x + z + 57, y + 4);			    cout << "ooooooooooo";
	gotoXY(x + z + 57 - 2, y + 5);	      cout << "ooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 6);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 7);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 8);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 9);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	gotoXY(x + z + 57, y + 15);				cout << "ooooooooooo";



	TextColor(7);
	gotoXY(x + 134, y + 4);         cout << "x x x x x x x";
	gotoXY(x + 132, y + 5);       cout << "x x x x x x x x x";
	gotoXY(x + 130, y + 6);       cout << "x x xx         xx x x";
	gotoXY(x + 130, y + 7);     cout << "x x x           x x x";
	gotoXY(x + 130, y + 8);     cout << "x x x           x x x";
	gotoXY(x + 130, y + 9);     cout << "x x x           x x x";
	gotoXY(x + 130, y + 10);    cout << "x x x           x x x";
	gotoXY(x + 130, y + 11);    cout << "x x x           x x x";
	gotoXY(x + 130, y + 12);      cout << "x x xx         xx x x";
	gotoXY(x + 132, y + 13);      cout << "x x x x x x x x x";
	gotoXY(x + 134, y + 14);        cout << "x x x x x x x";

}
void LogoGame2()
{

	int x = 22, y = 5;
	TextColor(4);
	gotoXY(x + 4, y + 4);       cout << "x           x";
	gotoXY(x + 2, y + 5);     cout << "x x x       x x x";
	gotoXY(x, y + 6);     cout << "x x x x x   x x x x x";
	gotoXY(x + 2, y + 7);     cout << "x x x x x x x x x";
	gotoXY(x + 4, y + 8);      cout << "x x x x x x x";
	gotoXY(x + 6, y + 9);        cout << "x x x x x";
	gotoXY(x + 4, y + 10);      cout << "x x x x x x x";
	gotoXY(x + 2, y + 11);    cout << "x x x x x x x x x";
	gotoXY(x, y + 12);    cout << "x x x x x   x x x x x";
	gotoXY(x + 2, y + 13);   cout << "x x x       x x x";
	gotoXY(x + 4, y + 14);      cout << "x           x";

	Sleep(200);
	int z = 43;

	TextColor(6);
	gotoXY(x + z, y + 4);			    cout << "ooooooooooo";
	gotoXY(x + z - 2, y + 5);		  cout << "ooooooooooooooo";
	gotoXY(x + z - 3, y + 6);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 3, y + 7);		 cout << "oooooooo  ooooooo";
	gotoXY(x + z - 3, y + 8);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 3, y + 9);		 cout << "oooooo     ";
	gotoXY(x + z - 3, y + 10);		 cout << "oooooo     ";
	gotoXY(x + z - 3, y + 11);		 cout << "oooooo    ";
	gotoXY(x + z - 3, y + 12);		 cout << "oooooooo  ooooooo";
	gotoXY(x + z - 3, y + 13);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 2, y + 14);		  cout << "ooooooooooooooo";
	gotoXY(x + z, y + 15);				cout << "ooooooooooo";


	Sleep(200);
	TextColor(9);
	gotoXY(x + z - 3 + 22, y + 4);				 cout << "ooooooooo";
	gotoXY(x + z - 4 + 22 - 2, y + 5);		  cout << "ooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 6);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 7);	     cout << "ooooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 8);	     cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 9);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	gotoXY(x + z - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	Sleep(200);
	TextColor(4);
	gotoXY(x + z + 33, y + 4);			 cout << "ooooo   ooooooooo";
	gotoXY(x + z + 33, y + 5);			 cout << "oooooooooooooooooo";
	gotoXY(x + z + 33, y + 6);			 cout << "ooooooooooooooooooo";
	gotoXY(x + z + 33, y + 7);			 cout << "oooooooooooooooooooo";
	gotoXY(x + z + 1 + 33, y + 8);		 cout << "ooooooo     ooooooo";
	gotoXY(x + z + 1 + 33, y + 9);		 cout << "ooooooo     ooooooo";
	gotoXY(x + z + 1 + 33, y + 10);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 11);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 12);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 13);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 14);		 cout << "ooooooo";
	gotoXY(x + z + 1 + 33, y + 15);		 cout << "ooooooo";
	Sleep(200);
	TextColor(10);
	gotoXY(x + z + 57, y + 4);			    cout << "ooooooooooo";
	gotoXY(x + z + 57 - 2, y + 5);	      cout << "ooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 6);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 7);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 8);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 9);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	gotoXY(x + z + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	gotoXY(x + z + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	gotoXY(x + z + 57, y + 15);				cout << "ooooooooooo";



	TextColor(7);
	gotoXY(x + 134, y + 4);         cout << "x x x x x x x";
	gotoXY(x + 132, y + 5);       cout << "x x x x x x x x x";
	gotoXY(x + 130, y + 6);     cout << "x x xx         xx x x";
	gotoXY(x + 130, y + 7);     cout << "x x x           x x x";
	gotoXY(x + 130, y + 8);     cout << "x x x           x x x";
	gotoXY(x + 130, y + 9);     cout << "x x x           x x x";
	gotoXY(x + 130, y + 10);    cout << "x x x           x x x";
	gotoXY(x + 130, y + 11);    cout << "x x x           x x x";
	gotoXY(x + 130, y + 12);    cout << "x x xx         xx x x";
	gotoXY(x + 132, y + 13);      cout << "x x x x x x x x x";
	gotoXY(x + 134, y + 14);        cout << "x x x x x x x";

}

void Interface()
{
	TaoKhung(49);
	Screen();
	AnTroChuot();
	TextColor(78);
	gotoXY(90, 25); cout << "PLAYER VS PLAYER";
	TextColor(11);
	gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)";
	gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)";
	gotoXY(93, 31); cout << "LOAD  GAME";
	gotoXY(93, 33); cout << "ABOUT GAME";
	gotoXY(96, 35); cout << "HELP";
	gotoXY(96, 37); cout << "EXIT";
	int select = 0;
	int coordinate = 25;
	do
	{
		char a = _getch();
		if (a == 's' || a == 'S') { PlaySound(TEXT("b.wav"), NULL, SND_SYNC); select = 1; }
		else if (a == 'w' || a == 'W') { select = 2; PlaySound(TEXT("b.wav"), NULL, SND_SYNC); }
		else if (a == 13 || a == 'e' || a == 'e' || a == '5') select = 3;
		if (select == 1 && coordinate < 37) coordinate += 2;
		else if (select == 2 && coordinate > 25) coordinate -= 2;
		if (coordinate == 25)
		{
			PlaySound(TEXT("dichuyen"), NULL, SND_FILENAME | SND_ASYNC);
			TextColor(78);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER"; TextColor(11);
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)";
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)";
			gotoXY(93, 31); cout << "LOAD  GAME";
			gotoXY(93, 33); cout << "ABOUT GAME";
			gotoXY(96, 35); cout << "HELP";
			gotoXY(96, 37); cout << "EXIT";
		}
		if (coordinate == 27)
		{

			TextColor(11);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER"; TextColor(78);
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)"; TextColor(11);
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)";
			gotoXY(93, 31); cout << "LOAD  GAME";
			gotoXY(93, 33); cout << "ABOUT GAME";
			gotoXY(96, 35); cout << "HELP";
			gotoXY(96, 37); cout << "EXIT";
		}
		if (coordinate == 29)
		{

			TextColor(11);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER";
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)"; TextColor(78);
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)"; TextColor(11);
			gotoXY(93, 31); cout << "LOAD  GAME";
			gotoXY(93, 33); cout << "ABOUT GAME";
			gotoXY(96, 35); cout << "HELP";
			gotoXY(96, 37); cout << "EXIT";
		}
		if (coordinate == 31)
		{

			TextColor(11);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER";
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)";
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)"; TextColor(78);
			gotoXY(93, 31); cout << "LOAD  GAME"; TextColor(11);
			gotoXY(93, 33); cout << "ABOUT GAME";
			gotoXY(96, 35); cout << "HELP";
			gotoXY(96, 37); cout << "EXIT";
		}
		if (coordinate == 33)
		{

			TextColor(11);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER";
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)";
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)";
			gotoXY(93, 31); cout << "LOAD  GAME"; TextColor(78);
			gotoXY(93, 33); cout << "ABOUT GAME"; TextColor(11);
			gotoXY(96, 35); cout << "HELP";
			gotoXY(96, 37); cout << "EXIT";
		}
		if (coordinate == 35)
		{

			TextColor(11);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER";
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)";
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)";
			gotoXY(93, 31); cout << "LOAD  GAME";
			gotoXY(93, 33); cout << "ABOUT GAME"; TextColor(78);
			gotoXY(96, 35); cout << "HELP"; TextColor(11);
			gotoXY(96, 37); cout << "EXIT";
		}
		if (coordinate == 37)
		{
			TextColor(11);
			gotoXY(90, 25); cout << "PLAYER VS PLAYER";
			gotoXY(87, 27); cout << "PLAYER WITH COMPUTER (easy)";
			gotoXY(87, 29); cout << "PLAYER WITH COMPUTER (hard)";
			gotoXY(93, 31); cout << "LOAD  GAME";
			gotoXY(93, 33); cout << "ABOUT GAME";
			gotoXY(96, 35); cout << "HELP"; TextColor(78);
			gotoXY(96, 37); cout << "EXIT";
		}
	} while (select != 3);
	system("cls");
	if (coordinate == 25)
	{
		MoldGame();
	}

}










int main()
{
	fixConsoleWindow();
	resizeConsole(10000, 6000);


	Interface();








}
void Screen()
{
	int check = 1;
	while (check < 20)
	{
		LogoGame();
		Sleep(100);
		check++;
	}
	LogoGame2();
}
void MoldGame()
{
	TaoKhung(47);
	gotoXY(5, 6);
	for (int i = 7; i <= 45; i++)
	{
		if (i % 2 == 0) {
			gotoXY(40, i);
			for (int j = 0; j < 120; j++)
			{
				cout << (char)196;
			}
		}
	}
	for (int i = 8; i <= 44; i++)
	{


		for (int j = 40; j < 165; j++)
		{
			if (j % 5 == 0)
			{
				gotoXY(j, i);
				cout << (char)179;
			}

		}
		cout << endl << endl << endl << endl << endl;
	}
}
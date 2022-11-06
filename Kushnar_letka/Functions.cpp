#pragma once
#include <iostream>
#include <cmath>
#include "Functons.h"

using namespace std;


void Input(double& a, std::string bob, double left, double right) //���� � �������������
{

	while (true)
	{
		std::cout << bob;
		std::cin >> a;
		if (std::cin.fail() || (a < left || a > right))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Error! Try again" << std::endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			break;
		}

	}

}

void Menu()//��������� ����
{
	double changeble;
	double X, Y, Radius;
	Input(changeble, "1.������ ����������\n2.����� �� ��������� \n", 1, 2);
	if ((int)changeble == 1)
	{
		Input(X, "������� �: ", -32767, 32766);
		Input(Y, "������� y: ", -32767, 32766);
		Input(Radius, "������� R: ", 0, 32766);
		int dots;
		dots = Find_dots(X, Y, Radius);
		cout << "�-�� ����� � �������� �����: " << dots << endl;
		Menu();
	}
	else
	{
		exit(EXIT_SUCCESS);
	}

}

int Find_dots(double X, double Y, int Radius)
{
	int dots = 0;
	for (int chek_y(Y + (Radius +1));chek_y > Y - (Radius + 1);chek_y--)
	{
		for (int chek_x(X - (Radius + 1)); chek_x < X + (Radius + 1); chek_x++)
		{
			if (pow(X - chek_x, 2) + pow(Y - chek_y, 2) <= pow(Radius, 2))
				dots++;
		}
	}
	return dots;
}
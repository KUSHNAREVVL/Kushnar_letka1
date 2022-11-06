#pragma once
#include <iostream>
using namespace std;


/**
* �������� ������ �� ��������� ����������� �����
*
* @param a �����
* @param bob ������ ��� ������ ������
* @param left �������� ��������� ��������
* @param right ����������� ���������
* (���� left, right = 0, �� �������� ����)
* @return ����
*/
void Input(double& a, std::string bob, double left, double right);

/**
*  ���� ��������
* 
*  @return ����
*/
void Menu();

/**
* ����� ������� ����� �������� �������� ����
*
* @param X ��������� ���� �� �
* @param Y �������� ���� �� Y
* @param Radius ������� ������
* 
* @return �-��� �����
*/
int Find_dots(double X, double Y, int Radius);
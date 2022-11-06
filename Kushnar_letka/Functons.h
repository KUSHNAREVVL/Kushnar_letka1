#pragma once
#include <iostream>
using namespace std;


/**
* Введення данних із перевіркою правильності вводу
*
* @param a число
* @param bob надпис при введені данних
* @param left мінімальне допустиме значення
* @param right максимальне допустиме
* (якщо left, right = 0, то обмежень немає)
* @return немає
*/
void Input(double& a, std::string bob, double left, double right);

/**
*  Меню завдання
* 
*  @return немає
*/
void Menu();

/**
* Пошук кількості точок усередині заданого кола
*
* @param X серединна кола за Х
* @param Y середина кола за Y
* @param Radius довжина радіуса
* 
* @return к-сть точок
*/
int Find_dots(double X, double Y, int Radius);
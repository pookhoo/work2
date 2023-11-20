#include <iostream>
using namespace std;

int task1()
{
	setlocale(0, "");
	cout << "Введите 2 числа,которые хотите умножить: " << endl;
	int a, b;
	cin >> a >> b;
	int c = a * b;
	cout << "Какой результат умножения?" << endl;
	int answer;
	cin >> answer;

	if (answer < c || answer > c)
	{
		cout << "Неверно! Вот правильный ответ: " << c;
	}
	else if(answer = c)
	{
		cout << "Верно! Ответ был: " << c;
	}
	return 0;

}

int task2()
{
	setlocale(0, "");
	cout << "Программа: Расписание\n";
	cout << "Выберите день недели:\n";
	cout << " \n";
	cout << "[1] Понедельник\n";
	cout << "[2] Вторник\n";
	cout << "[3] Среда\n";
	cout << "[4] Четверг\n";
	cout << "[5] Пятница\n";
	cout << "[6] Суббота\n";
	cout << "[7] Воскресенье\n";

	int choice;
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "Вы выбрали понедельник\n";
			cout << "\n";
			cout << "Учеба" << endl << "Ужин" << endl << "Домашка" << endl << "Вечерний отдых" << endl << "Подготовка ко сну" << endl << "Сон";
			cout << "\n";
			break;
		
		case 2:
			cout << "Вы выбрали вторник\n";
			cout << "\n";
			cout << "Учеба" << endl << "Ужин" << endl << "Домашка" << endl << "Вечерний отдых" << endl << "Подготовка ко сну" << endl << "Сон";
			cout << "\n";
			break;
		
		case 3:
			cout << "Вы выбрали среду\n";
			cout << "\n";
			cout << "Учеба" << endl << "Ужин" << endl << "Домашка" << endl << "Вечерний отдых" << endl << "Подготовка ко сну" << endl << "Сон";
			cout << "\n";
			break;
		
		case 4:
			cout << "Вы выбрали четверг\n";
			cout << "\n";
			cout << "Учеба" << endl << "Ужин" << endl << "Домашка" << endl << "Вечерний отдых" << endl << "Подготовка ко сну" << endl << "Сон";
			cout << "\n";
			break;
		
		case 5:
			cout << "Вы выбрали пятницу\n";
			cout << "\n";
			cout << "Учеба" << endl << "Ужин" << endl << "Домашка" << endl << "Вечерний отдых" << endl << "Подготовка ко сну" << endl << "Сон";
			cout << "\n";
			break;
		
		case 6:
			cout << "Вы выбрали субботу\n";
			cout << "\n";
			cout << "Утро" << endl << "Недельная уборка" << endl << "Обед" << endl << "Отдых";
			cout << "\n";
			break;

		case 7:
			cout << "Вы выбрали воскресенье\n";
			cout << "\n";
			cout << "Утро" << endl << "Завтрак" << endl << "Прогулка" << endl << "Приготовления к учебе" << endl << "Сон";
			break;
 	}
	return 0;
}

int task3()
{
	setlocale(0, "");
	const int arraySize(10);
	int myArray[arraySize] = { 1,2,3,4,5,6,7,8,9,10 };

	int sum = 0;

	for (int i = 0; i < arraySize; ++i)
	{
		if (myArray[i] % 2 != 0)
		{
			sum += myArray[i];
		}
	}
	cout << "Сумма нечетных чисел: " << sum;

	return 0;

}
int main()
{ 
	/*task1();*/
	/*task2();*/
	task3();
}
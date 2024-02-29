#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

string removeVowels(string word) {
	vector<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'y',
							'A', 'E', 'I', 'O', 'U', 'Y' };
	for (int i = 0; i < word.length(); i++)
	{
		if (find(vowels.begin(), vowels.end(), word[i]) != vowels.end())
		{
			word = word.replace(i, 1, "");
			i -= 1;
		}
	}
	return word;
}

string removeConsonants(string word) {
	vector<char> consonants = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x',
								'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X' };
	for (int i = 0; i < word.length(); i++)
	{
		if (find(consonants.begin(), consonants.end(), word[i]) != consonants.end())
		{
			word = word.replace(i, 1, "");
			i -= 1;
		}
	}
	return word;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	string word;

	cout << "Введите слово: ";
	cin >> word;

	cout << "Выберите действие:\n1. Вывести слово задом наперед\n2. Вывести слово без гласных\n"
		"3. Вывести слово без согласных\n4. Рандомно раскинуть буквы слова" << endl;

	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		reverse(word.begin(), word.end());
		cout << endl << "Результат: " << word << endl;
		break;
	case 2:
		cout << endl << "Результат: " << removeVowels(word) << endl;
		break;
	case 3:
		cout << endl << "Результат: " << removeConsonants(word) << endl;
		break;
	case 4:
		random_shuffle(word.begin(), word.end());
		cout << endl << "Результат: " << word << endl;
		break;
	}

	system("pause");
}
// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define SIZE 100 
#define BUFFER_SIZE 1024

//поиск транзакции с наибольшим и наименьшим числом товаров

// В данную функцию передаём массив из целых чисел, в котором будем искать максимальное значение
int max_products(int prices[], int size)
{
	int max_price = 0;
	for (int i = 0; i < size; i++)
	{
		if (prices[i] > max_price)
		{
			max_price = prices[i];
		}
	}
	return max_price;
}

int min_products(int prices[], int size)
{
	int min_price = 1000;
	for (int i = 0; i < size; i++)
	{
		if (prices[i] < min_price)
		{
			min_price = prices[i];
		}
	}
	return min_price;
}


//поиск транзакций с тем товаром, название которого ввёл пользователь программы
void search(char descriptions[1000][100], int size)
{
	int transaction_id = 0;
	char description[BUFFER_SIZE];
	char *sub_string = NULL;
	int counter = 0;

	scanf_s("%s", description, BUFFER_SIZE);

	for (int i = 0; i < size; i++)
	{
		sub_string = strstr(descriptions[i], description);

		if (sub_string != NULL) {
			printf("transaction_id: %d\n", i);
			printf("description: %s\n", descriptions[i]);
		}
		counter++;
	}

}

//поиск среднего значения стоимости 

float avg_price(int prices[], int size)
{
	float avg_price = 0;
	for (int i = 0; i < size; i++)
	{
		avg_price = (prices[i] / size);
	}
	return avg_price;


}

struct transactions
{
	int transaction_id;
	int price;
	char description[100]; // для упрощения, чтобы не вызывать функцию malloc
};


int main()
{

	FILE *transactions_file;

	struct transactions transaction_buffer;

	transaction_buffer.transaction_id = 0;
	transaction_buffer.price = 0;

	char buffer[BUFFER_SIZE]; // Это массив для чтения строк

	errno_t err = fopen_s(&transactions_file, "C:\\Users\\uc2\\Desktop\\files\\transactions.txt", "r");

	int position = 0;
	int all_prices[1000];
	char descriptions[1000][100];

	if (err)
		printf_s("The file transactions.txt was not opened\n");
	else
	{		
		while (fgets(buffer, BUFFER_SIZE, transactions_file) != NULL)
		{
			printf("%s", buffer);

			int count_separator = 0;
			int price = 0;
			char description[BUFFER_SIZE];
			int description_position = 0;
			for (int i = 0; i < strlen(buffer); i++) {
				if (buffer[i] == ';') {
					printf_s("Position: %d\n", i);
					count_separator++;
				}
				if (count_separator == 1 && buffer[i] != ';') {
					price = price * 10 + (buffer[i] - 48);
				}
				
				if (count_separator == 2 && buffer[i] != ';') { // Сохранение текущего описания
					description[description_position] = buffer[i];
					description_position++;
				}
				
			}
			// Сохранение описания в массив descriptions
			description[description_position] = '\0'; // конец строки
			printf_s("%s\n", description);
			
			for (int j = 0; j < description_position+1; j++) { // В поле с индексом description_position хранится код конца строки
				descriptions[position][j] = description[j];
			}
			

			all_prices[position] = price;
			position++;
		}
	}
	//поиск среднего значения стоимости 

	printf("avg_price=  %f\n ", avg_price(all_prices, position));




	//поиск транзакции с наибольшим и наименьшим числом товаров

	printf("Max products: %d\n", max_products(all_prices, position));
	printf("Min products: %d\n", min_products(all_prices, position));
	
	//поиск транзакций с тем товаром, название которого ввёл пользователь программы
	printf("\nInprut description: ");
	search(descriptions, position);


	
	fclose(transactions_file);



    return 0;
}


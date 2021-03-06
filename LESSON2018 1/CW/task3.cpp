#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define SIZE 100 
#define BUFFER_SIZE 1024



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

//определение времени поиска транзакций с наибольшим и наименьшим числом товаров

/*int time_search_max(int max_products, int size)
{
	
	float result = 0;
	for (int i = 10; i < 100000000; i++) {
		result += log(double(i));
	}
	printf("Result: %f\n", result);
	
	return 0;

}

int time_search_min(int min_products, int size)
{

}
*/


//«структурa» для хранения информации о транзакции

//typedef int all_transactions;


//10% самых дорогих покупок



struct all_transactions
{
	int transaction_id;
	int price;
	char description[100]; // для упрощения, чтобы не вызывать функцию malloc
};

int main()
{
	clock_t time_begin = clock();

	FILE *all_transactions_file;

	struct all_transactions all_transaction_buffer;

	all_transaction_buffer.transaction_id = 0;
	all_transaction_buffer.price = 0;
	

	char buffer[BUFFER_SIZE]; // Это массив для чтения строк

	errno_t err = fopen_s(&all_transactions_file, "C:\\Users\\1\\Desktop\\all_transactions.txt", "r");

	int position = 0;
	int all_prices[1000];
	char descriptions[1000][100];


	if (err)
		printf_s("The file all_transactions.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, all_transactions_file) != NULL)
		{
			//printf("%s", buffer);

			int count_separator = 0;
			int price = 0;
			for (int i = 0; i < strlen(buffer); i++) {
				if (buffer[i] == ';') {
					//printf_s("Position: %d\n", i);
					count_separator++;
				}
				if (count_separator == 1 && buffer[i] != ';') {
					price = price * 10 + (buffer[i] - 48);
				}
			}
		}


	}

	fclose(all_transactions_file);

	clock_t time_end = clock();
	printf("Time: %.2fs\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);
	


	return 0;
}

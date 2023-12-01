#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct city
{
	char name[50];
	char country[50];
	int population;
};


int input_city(struct city *city_pointer)
{
	printf("Name> ");
	scanf_s(" %[^\n]s", (*city_pointer).name, sizeof((*city_pointer).name));
	printf("Country> ");
	scanf_s(" %[^\n]s", (*city_pointer).country, sizeof((*city_pointer).country));
	printf("Population > ");
	scanf(" %d", &(*city_pointer).population);
	return 0;
}

int main(void)
{
	struct city city1, city2, city3;
	printf("Input three cities:\n");
	input_city(&city1);
	input_city(&city2);
	input_city(&city3);
	printf("\nPrinting the three cities:\n");
	printf("1. %s in %s with a population of %d people\n", city1.name, city1.country, city1.population);
	printf("2. %s in %s with a population of %d people\n", city2.name, city2.country, city2.population);
	printf("3. %s in %s with a population of %d people\n", city3.name, city3.country, city3.population);
	return 0;
}
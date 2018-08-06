#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a linked list.
 * @head: pointer to struct
 * Return: sum of all data in nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int data, sum = 0;

	while (temp)
	{
		data = temp->n;
		sum += data;
		temp = temp->next;
	}
	return (sum);
}

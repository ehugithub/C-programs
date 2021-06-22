#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define CHARS 26

struct node {
	char data;
	int freq;
	struct node *left, *right, *next;
} *start = NULL;


void insert(struct node *, char, int);
void merge();

int main () { 
	char ch; 
	int i = 0;
	char input[CHARS];
	int frequency[CHARS];
	struct node *ptr = malloc(sizeof(struct node));
	printf("Enter list of characters: ");
	scanf("%[^\n]", input);
	printf("Enter their corresponding frequencies, separated by a space: ");
	while(ch != '\n')
		scanf("%d%c", &frequency[i++], &ch);
	/*for (int l = 0; l < i; l++) {
		insert(ptr, input[l], frequency[l]);
	} */
	insert(ptr, input[0], frequency[0]);
	printf("%c%d\n", start->data, start->freq);
	insert(ptr, input[1], frequency[1]);
	printf("%c%d\n", start->next->data, start->next->freq);
	insert(ptr3, input[2], frequency[2]);
	printf("%c%d\n", start->next->next->data, start->next->next->freq);

	/*
	ptr = start;
	while(ptr != NULL)
		printf("%c\t%d\n", ptr->data, ptr->freq);
	
	while(start->next != NULL)
		merge(start, start->next); */
	return 0;
}

void insert(struct node *p, char letter, int fre){
	struct node *ptr2;
	//ptr = (struct node *)malloc(sizeof(struct node));
	p->data = letter;
	p->freq = fre;
	if (start == NULL || fre < start->freq) {
		p->next = start;
		start = p;
	}
	else {
		ptr2 = start;
		while(ptr2->next != NULL && ptr2->next->freq <= fre)
			ptr2 = ptr2->next;
		p->next = ptr2->next;
		ptr2->next = p;
	}
}

void merge() {
	struct node *p1 = start, *p2 = start->next, *p3;
	start = p2->next;
	p1->next = p2->next = NULL;
	p3 = (struct node *)malloc(sizeof(struct node));
	p3->left = p1;
	p3->right = p2;
	insert(p3, '\0', p1->freq + p2->freq);
}

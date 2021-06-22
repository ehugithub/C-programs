#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define CHARS 26

struct node {
	char data;
	int freq;
	struct node *left, *right, *next;
} *start = NULL;


struct node *insert(struct node *, /*struct node *, */char, int);
void merge();

int main () { 
	char ch; 
	int i = 0;
	char input[CHARS];
	int frequency[CHARS];
	struct node *ptr;
	printf("Enter list of characters: ");
	scanf("%[^\n]", input);
	printf("Enter their corresponding frequencies, separated by a space: ");
	while(ch != '\n')
		scanf("%d%c", &frequency[i++], &ch);

	for (int l = 0; l < i; l++) {
		printf("\n%d", l);
		//ptr = (struct node *)malloc(sizeof(struct node));
		start = insert(start, input[l], frequency[l]);
	}
	/*
	ptr = start;
	while(ptr != NULL)
		printf("%c\t%d\n", ptr->data, ptr->freq);
	
	while(start->next != NULL)
		merge(start, start->next); */
	return 0;
}

struct node *insert(struct node *start, /* struct node *ptr, */char letter, int fre){
	struct node *ptr, *ptr2;
	ptr = (struct node *)malloc(sizeof(struct node));
	ptr->data = letter;
	ptr->freq = fre;
	printf("%d\t%c", ptr->freq, ptr->data);
	if (start == NULL /* || fre < start->freq */) {
		ptr->next = start;
		start = ptr;
	}
	else {
		ptr2 = start;
		while(ptr2->next != NULL && ptr2->next->freq <= fre)
			ptr2 = ptr2->next;
		ptr->next = ptr2->next;
		ptr->next = ptr;
	}
}

void merge() {
	struct node *p1 = start, *p2 = start->next, *p3;
	start = p2->next;
	p1->next = p2->next = NULL;
	p3 = (struct node *)malloc(sizeof(struct node));
	p3->left = p1;
	p3->right = p2;
	insert(start, '\0', p1->freq + p2->freq);
}

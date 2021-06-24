#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define CHARS 26

struct node {
	char data;
	int freq;
	struct node *left, *right, *next;
} *start = NULL;
//char code[5];
//int count = 0;

void insert(struct node *, char, int);
void merge();
void printArray(int arr[], int);
void printcode(struct node *, int arr[], int);

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
	for (int l = 0; l < i; l++) {
		ptr = malloc(sizeof(struct node));
		insert(ptr, input[l], frequency[l]);
	}
	
	while(start->next != NULL)
		merge(start, start->next);
	int arr[i], num = 0;
	printcode(start, arr, num);
	return 0;
}

void insert(struct node *p, char letter, int fre){
	struct node *ptr2;
	if(letter != '\0')
		p->left = p->right = NULL;
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

void printcode(struct node *ptr, int code[], int count) {
	if(ptr->left != NULL) {
		code[count] = 0;
		printcode(ptr->left, code, count + 1);
	}
	if(ptr->right != NULL) {
		code[count] = 1;
		printcode(ptr->right, code, count + 1);
	}
	if(ptr->left == NULL && ptr->right == NULL) {
		printf("%c: ", ptr->data); 
		printArray(code, count);
	}
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; ++i)
		printf("%d", arr[i]);
	printf("\n");
}

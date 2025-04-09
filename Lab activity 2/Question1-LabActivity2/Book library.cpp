#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Book {
	char title[100];
	char author[100];
	int year;

};

void addBook(struct Book library[], int *numBooks);
void displayBooks(const struct Book library[], int numBooks);
void totalBooks(int numBooks);
void findBook(const struct Book library[], int numBooks);

int main() {
	struct Book library[100];
	int numBooks = 0;
	int choice;
	
	do {
		printf("\nHi! This is an online library. Please select your option:\n");
		printf("1. Add Book\n");
		printf("2. Display Books\n");
		printf("3. Total Number of Books\n");
		printf("4. Find Book by Title\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		getchar();
		
		switch(choice) {
			case 1:
				addBook(library, &numBooks);
				break;
			case 2: 
				displayBooks(library, numBooks);
				break;
			case 3:
				totalBooks(numBooks);
			case 4:
				findBook(library, numBooks);
				break;
			case 5:
				printf("Exiting program.\n");
			default:
				printf("Invalide choice. Please try again.\n");	
		}
	} while (choice != 5);
	
	return 0;
}

void addBook(struct Book library[], int *numBooks) {
	struct Book newBook;
	printf("Enter title: ");
	fgets(newBook.title, 100, stdin);
	newBook.title[strcspn(newBook.title, "\n")] = '\0';
	printf("Enter author: ");
	fgets(newBook.author, 100, stdin);
	newBook.author[strcspn(newBook.author, "\n")] = '\0';
	printf("Enter year: ");
	scanf("%d", &newBook.year);
	getchar();
	library[*numBooks] = newBook;
	(*numBooks)++;
	printf("Book added successfully.\n");
}

void displayBooks(const struct Book library[], int numBooks) {
	if (numBooks == 0) {
		printf("Library is empty.\n");
		return;
	}
	printf("Library contains the following books:\n");
	for (int i = 0; i < numBooks; i++) {
		printf("Title: %s, Author: %s, Year: %d\n", library[i].title, library[i].author, library[i].year);
	}
}

void totalBooks(int numBooks) {
	printf("Total number of books in library: %d\n", numBooks);
}

void findBook(const struct Book library[], int numBooks) {
	char title[100];
	printf("Enter the title of the book you want to find: ");
	fgets(title, 100, stdin);
	title[strcspn(title, "\n")] = '\0';
	int found = 0;
	for (int i = 0; i < numBooks; i++) {
		if (strcmp(library[i].title, title) == 0) {
			printf("Book found! Title: %s, Author: %s, Year: %d\n", library[i].title, library[i].author, library[i].year);
			found = 1;
			break;
		}
	}
	if (!found)
		printf("Book not found.\n");
}

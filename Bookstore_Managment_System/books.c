#include <stdio.h>
#define _LEN 100

typedef struct Book{
	char * name;
	unsigned int book_id;
	double price;
}	Book;
//struct System{
//	struct Book books[5];
//};
static void search_book( Book b_database[],int len, char * search_value, Book * _book){
	Book * ptr = _book;
	int x;
	for ( x = 0; x < len; ++x){
		if (b_database[x].name == search_value){
			ptr->name = b_database[x].name;
			ptr->book_id = b_database[x].book_id;
			ptr->price = b_database[x].price;
		}else
			printf("NOT FOUND!!!\n");
			break;
	}
}
//This function "get_input" is not being implemented , but will be later
int get_input(char str[], int n){
	char _char;
	int x;
	while ( _char = getchar() != '\n'){
		if ( x < n){
			str[x] = _char;
		}	++x;
	}str[x] = '\0';
	return x;
} 
int main(int argc, char * argv[])
{
	Book b1 = {"Atoms", 121324, 100};
	Book b2 = {"Silcon valley", 142313, 200};
	Book b3 = {"The matrix", 956755, 300};
	Book b4 = {"Welcom", 83468, 200};
	Book b5 = {"The one", 95724, 400};

	Book b_database[] = {b1, b2, b3, b4, b5};
	int len = sizeof(b_database) / sizeof(b_database[0]);

	Book _book = {"Null", 0, 0};

	char * search_value = "Welcom";
	search_book(b_database, len, search_value, &_book);

	printf("name: %s\nId: %d\nprice: R%0.2f\n", _book.name, _book.book_id, _book.price); 


}

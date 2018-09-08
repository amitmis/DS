#include<stdio.h>
#include<malloc.h>

#define size 3

struct node {
	int key;
	int value;
	struct node* link;
};

struct node* arr[size];

struct node* insert(int k, int v) {

	struct node *n, *sv;
	int loc;

	n = (struct node *)malloc(sizeof(struct node));

	n->key = k;
	n->value = v;
	n->link = NULL;
	

	loc = k % size;
	
	if(arr[loc] == NULL) {
	
	arr[loc] = n;
	
	}
	
	else {
		
		sv = arr[loc];
		
		while(sv->link != NULL) {
		
		
		sv = sv->link;

		
		}
		sv->link = n;	
	
	}

}

display() {

	int i;
	struct node *c;

	for(i = 0; i < size; i++) {
		
		if(arr[i] != NULL) {
		
			if(arr[i]->link != NULL) {
			
			c = arr[i]->link;
		
			while(c != NULL) {
				
				printf ("(%d %d)\n",c->key, c->value);
				c = c->link;	
			}	
			
			}		
		
		printf ("(%d %d)\n",arr[i]->key, arr[i]->value);
                
 		}

	}

}

void main() {


	int k, v, ch;

	printf (" enter choice\n ");

	scanf("%d", &ch);

	while (ch == 1) {

		printf("enter key and value\n ");

		scanf("%d %d",&k ,&v);

		insert(k,v);


		printf (" enter choice = 1 to insert more \n ");

		scanf("%d", &ch);
	}

	display();
}

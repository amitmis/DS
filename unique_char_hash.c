#include <stdio.h>
#include<malloc.h>
#include<string.h>

struct node {
	int key;
	char value;
	
};

struct node *arr[26];

insert(int k, char v) {

	struct node *n;
	int loc;	
	n = (struct node*)malloc(sizeof(struct node));

	n->key = k;
	n->value = v;

	loc = k % 26;
	if(arr[loc] == NULL) {

		arr[loc] = n;
	
	}	

}

display() {
	
	int i = 19;
	while(i >= 19 && i<=25) {

		if(arr[i] != NULL) {
			printf("%c ",arr[i]->value);
				
		}
		i++;
	}
	i = 0;	
	while(i >= 0 && i<=18) {

		if(arr[i] != NULL) {
			printf("%c ",arr[i]->value);
				
		}
		i++;
	}	
	
}
void main() {

	char in[30],ch;
	int k, i, len;
	printf("enter string\n");

	scanf("%s",in);
	len = strlen(in);
	printf("len %d\n", len);
	for(i = 0; i < len ; i++) {

			
		k = in[i];

		printf("(%d %c)\n",k,in[i]);		
		insert (k,in[i]);
	
	}
	display();
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i, n, ch, ack;
	char input[20];
	FILE *in;
	printf("\n\n\nStop and Wait Protocol\n");
	printf("\n1.Send\n2.Check ACK\n3.EOT\n");
	while(1){
		printf("Enter the choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				ack = 0;
				in = fopen("data.txt","w");
				printf("Enter the data:");
				scanf("%s",input);
				n = strlen(input);
				for(i = 0; i < n+1; i++){
					fprintf(in,"%s",input);
				}
				fclose(in);
				printf("--->Data sent\n");
				ack = 1;
				break;
			case 2:
				if ( ack == 1 ){
					printf("Acknowledgement received.");
				}else{
					printf("Acknowledgement not received.");
				}
                break;
			case 3:
				printf("Transmission ended.");
				exit(1);
		}
    }
	getch();
}
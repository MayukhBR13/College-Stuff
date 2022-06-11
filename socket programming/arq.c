#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i, n, ch, ack,a=0,one=0;
	char input[20];
	FILE *in;
	printf("\n\n\nStop and Wait Protocol\n");
	printf("\n1.Send\n2.Check ACK\n3.EOT\n");
	while(1){
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				in = fopen("data.txt","w");
				printf("Enter the data:");
				scanf("%s",input);
				n = strlen(input);
				for(i = 0,one = 0; i < n; i++){
					fprintf(in,"%c",input[i]);
					if(input[i]=='1')one++;
				}
				fprintf(in,"%c",(one%2==0)?'0':'1');
				fclose(in);
				printf("--->Data sent\n");
				a++;
				break;
			case 2:
				in = fopen("ack.txt","r");
				fscanf(in,"%d",&ack);
				fclose(in);
				if ( ack == a%2 ){
					printf("Acknowledgement received.");
				}else{
					printf("Acknowledgement not received.");
					a--;
				}
                break;
			case 3:
				printf("Transmission ended.");
				exit(1);
		}
    }
	getch();
}

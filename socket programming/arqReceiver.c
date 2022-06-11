#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i, n, ch, ack=0,one=0;
	char output[20];
	FILE *out;
	out = fopen("data.txt","r");
    if(out==NULL)exit(1);
	fscanf(out,"%s",output);
	n = strlen(output);
	for(i = 0; i < n; i++){
        if(output[i]=='1')
            one++;				
	}
    fclose(out);
    if(one%2==0){
        printf("Received data has even parity\nData Accepted ");
        ack++;
        out=fopen("ack.txt","w");
        fprintf(out,"%d",ack%2);
        fclose(out);
    }
    else
        printf("Received data has odd parity\nData Rejected \n");
    printf("Received Data: ");
    for(i=0;i<n-1;i++)
        printf("%c",output[i]);
    
}

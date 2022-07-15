//Q2. Program to create another text file deleting the 
//words "a","an","the" and replacing them with a blank
//space each.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
void replace();
void main() {

FILE *fp,*ft;
char str[80],target[80];
fp=fopen("file.txt","r");
if(fp==NULL) {
puts("cannot open source file!");
exit(1);
}
ft=fopen("new.txt","w");
if(ft==NULL) {
puts("cannot open target file!");
exit(1);
}
while(fgets(str,79,fp)!=NULL) {
replace(str,&target);
fputs(target,ft);
}
fclose(fp);
fclose(ft);
printf("\nTask completed!");
printf("\nThis program is made by JAYANT SINGH with Scholar No. 21U01041.");
getch();
}
void replace(char *s, char *s1) {
int i=0,j=0,k=0;
char temp[100],temp2[100],main[100],*t=temp,*m=main;
/* copying to temporary string */
while(*s!='\0') {
*t=*s;
t++;
s++;
}
*t='\0';
/* checking each word */
while(temp[i]!='\0') {
temp2[j]=temp[i];
if(temp[i]==' ') {
temp2[j]='\0';
if(strcmpi(temp2,"the")==0) {
strcpy(temp2," ");
}

else if(strcmpi(temp2,"an")==0) {
strcpy(temp2," ");
}
else if(strcmpi(temp2,"a")==0) {
strcpy(temp2," ");
}
j=0;
while(temp2[j]!='\0') {
main[k]=temp2[j];
k++;
j++;
}
main[k]=' ';  
k++;     
j=-1;
}
i++;
j++;
}
temp2[j]='\0';              /* last word terminated */
if(strcmpi(temp2,"the")==0){    /* checking last word too */
strcpy(temp2," ");
}
else if(strcmpi(temp2,"an")==0) {
strcpy(temp2," ");
}
else if(strcmpi(temp2,"a")==0) {
strcpy(temp2," ");
}
/* last word of the string */
else {
j=0;
while(temp2[j]!='\0') {
main[k]=temp2[j];
k++;
j++;
}
main[k]='\0';   /* new string is completely ready */
}
while(*m!='\0') {
*s1=*m;
s1++;
m++;
}
*s1='\0';
} 
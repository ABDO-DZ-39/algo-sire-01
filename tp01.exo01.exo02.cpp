#include<stdio.h>
int main(){
printf("tp01,exo01:\n");
int i,j,s,v;
char m[5][5]={
{'1', '2', '3', '4', '5'},
{'7', 'a', 'c', '8', 'd'},
{'c', '9', '4', 'z', '8'},
{'5', '6', 'p', 'n', '3'},
{'2', '9', 't', 'm', 'k'},
};
printf("matrix=\n");
for(i=0;i<5;i++){

for(j=0;j<5;j++){
printf("%c\t",m[i][j]);
}
printf("\n");
}
printf("\n matrix pair =\n");
for(i=0;i<5;i++){
for(j=0;j<5;j++){
s=i%2;
if(s==0){
printf("%c\t",m[i][j]);


}
}
printf("\n");
}
printf("\n matrix un pair =\n");
for(i=0;i<5;i++){
for(j=0;j<5;j++){
v=i%2;
if(v!=0){
printf("%c\t",m[i][j]);

}
}
printf("\n");
}
printf("\n diagonal left to raight :\n");
for(i=0;i<5;i++){
printf("%c\t",m[i][i]);
}
printf("\n");
printf("\n diagonal raight to left :\n ");  
for(i=0;i<5;i++){
printf("%c\t",m[i][4-i]);	
}
printf("\n");


printf("\n tp1.exo2: \n");

int m1[4][4],k;

printf("\t give me the matrix =\n");
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("\t m[%d][%d]=\n",i,j);
scanf("%d",&m1[i][j]);
}
}
printf("\t the matrix after chang:\n");
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%d\t",m1[i][j]);
}
printf("\n");
}

for(i=0;i<4;i++){
for(j=0;j<i;j++){
k=m1[i][j];
m1[i][j]=m1[j][i];
m1[j][i]=k;
}
}
printf("the matrix bfor change:\n");
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%d\t",m1[i][j]);
}
printf("\n");
}




 return 0;	
}

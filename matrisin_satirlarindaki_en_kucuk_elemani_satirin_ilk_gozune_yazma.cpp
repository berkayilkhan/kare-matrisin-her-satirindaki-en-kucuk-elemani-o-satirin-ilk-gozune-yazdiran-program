#include<stdio.h>
int main ()
{
    int A[50][50],i,j,n,enk,gecici,yer;
    printf("Kare matrisin boyutu :  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		printf("A[%d][%d]: ",i+1,j+1);
		scanf("%d",&A[i][j]);	
	}
    printf("\n girilen matris \n");
     for(i=0;i<n;i++)
     {
     	for(j=0;j<n;j++)
     	printf("%3d",A[i][j]);
     	printf("\n");
     	
	 }
	 for(i=0;i<n;i++)
	 {
	 	enk=A[i][0];// satýrýn ilk elemaný enk seç
	 	yer=0;
	 	for(j=0;j<n;j++)
	 	{
	 		if(enk>A[i][j])
	 		{
	 			enk=A[i][j];
	 			yer=j; // enk elemanýn yeri
			 }
		 }
		 // yer deðiþtirme
		 gecici=A[i][0];
		 A[i][0]=A[i][yer];
		 A[i][yer]= gecici;
	 }
	 printf("\n yeni matris \n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	printf("%3d",A[i][j]);
	 	printf("\n");
	 }
	 return 0;
}

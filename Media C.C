#include<stdio.h>

int main(){
	
	float n1, n2, n3, n4,media,nE,mF, fddd;
	
	printf ("Digite as quatro notas");
	scanf ("%f%f%f%f",&n1,&n2,&n3,&n4);
	
	media= ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	
	printf("media:%f", media);
	
    if (media>=7)
    printf("Aprovado");
    else{
    	if(media<=5)
    	 printf("Aluno em exame");
     else{
    	if(media>=5 && media<7){
    		printf("aluno reprovado\n");
    		printf("nota do exame:");
    		scanf("%f",&nE);
    		
    		mF=(media+nE)/2;
    		
    		if(mF>=5)
    		printf("Aprovado");
    		else{
    		printf("Reprovado");	
			}
    		
    
		}
	 }	 
	}	
	return 0;
}


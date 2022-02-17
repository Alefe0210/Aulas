#include<stdio.h>

void apresentaClassificacao(){
	printf("idade <=10 criança\n10 >idade<18 adolescente\n18 >=25 jovem\n25 >= idade <= 58 adulto\n idade> 58 idoso\n");
	
}
int calcularIdade (int anoAtual, int anoNascimento){
	return anoAtual-anoNascimento;
}

int main(){
	
	int anoAtual, anoNascimento,idade;
	
		printf("Digite o ano atual e o ano de nascimento:");
		scanf("%d%d",&anoNascimento, &anoAtual);
	
		idade=calcularIdade(anoAtual,anoNascimento);
		
		printf("idade %d\n",idade);
		
		#include<stdio.h>

void apresentaClassificacao(){
	printf("idade <=10 criança\n10 >idade<18 adolescente\n18 >=25 jovem\n25 >= idade <= 58 adulto\n idade> 58 idoso\n");
	
}
int calcularIdade (int anoAtual, int anoNascimento){
	return anoAtual-anoNascimento;
}

int main(){
	
	int anoAtual, anoNascimento,idade;
	
		printf("Digite o ano atual e o ano de nascimento:");
		scanf("%d%d",&anoNascimento, &anoAtual);
	
		idade=calcularIdade(anoAtual,anoNascimento);
		
		printf("idade %d\n",idade);	
}
//apresentarClassificacao

switch (idade){
	case 0 ... 10: printf("crianca"); break;
	case 11 ... 18: printf("adolescente"); break;
	case 19 ... 25: printf("jovem"); break;
	case 26 ... 58: printf("adulto");break;
	case 59 ... 100: printf("idoso");break;
	default: printf("invalido!");
}
}

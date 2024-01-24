/*
Lucas Marques Bandechi		Matricula: 22106697
Thiago Aquino Lima 			Matrícula: 21206956

*/

#include <stdio.h>

int main()
{   int GI=0, GG=0, NG=0, QJ=0, VI=0, VG=0, EMP=0;
	do
    {   printf("\n Novo GRENAL");
        printf("\n Digite o numero de gols do Internacional:");
        scanf("%d", &GI);
        printf(" Digite o numero de gols do gremio:");
        scanf("%d", &GG);
        QJ++;
        if(GI>GG)
            VI++;
        else if(GG>GI)
            VG++;
        else
            EMP++;
            
        printf("\n Novo GRENAL? 1-SIM  2-NA0: ");
        scanf("%d", &NG);
        
    }while(NG==1);
    
    printf("\n Quantidade de grenais: %d", QJ);
    printf("\n Numero de vitorias do Internacional: %d", VI);
    printf("\n Numero de vitorias do Gremio: %d", VG);
    printf("\n Numero de empates: %d", EMP);
    if(VI>VG)
        printf("\n O maior vencedor desta serie foi o Internacional");
    else if(VG>VI)
        printf("\n O maior vencedor desta serie foi o Gremio");
    else
        printf("\n Nao houve vencedor"); 
    
    return 0;
}

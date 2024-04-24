#include <stdio.h>
#include <conio.h>

#define Num_Vert 7

int Ge[7][7]={{0,1,1,0,0,0,0},
             {1,0,1,1,1,0,0},
             {1,1,0,1,1,0,0},
             {0,1,1,0,1,1,0},
             {0,1,1,1,0,0,1},
             {0,0,0,1,0,0,1},
             {0,0,0,0,1,1,0}};

int Gne[7][7]= {{0,1,1,1,0,0,0},
               {1,0,0,1,0,0,0},
               {1,0,0,1,0,0,0},
               {1,1,1,0,1,1,0},
               {0,0,0,1,0,0,1},
               {0,0,0,1,0,0,1},
               {0,0,0,0,1,1,0}};

int euler(int G[7][7], int C_euler[50], int *tamciclo) // 1 - tem ; 0 - n�o tem
{
    int Grau[7];  // grau de cada v�rtice
    int C_aux[50]; // guarda ciclo auxiliar
    int impar=0; //
    for (int i=0;i<Num_Vert;i++)
        {
        Grau[i]=0;
        for (int j=0;j<Num_Vert;j++) Grau[i]+=G[i][j];
        if (Grau[i]%2!=0)
           return(0);
        }
    int v=0;
    int pos=0;
    int G_Total=0;
    for (int i=0;i<Num_Vert;i++) G_Total+=Grau[i];
    while (Grau[v]>0) // encontra o ciclo inicial
       {
       C_euler[pos++]=v;        // acrescenta v�rtice no primeiro ciclo
       int j;
       for (j=0;G[v][j]==0;j++); // encontra pr�xima aresta n�o percorrida
       Grau[v]--;Grau[j]--;G_Total-=2;   // atualiza graus
       G[v][j]=G[j][v]=0;     // elimina aresta
       v=j;
       }
    while (G_Total>0) // enquanto h� arestas n�o percorridas...
       {
       int j;
       for (j=0;Grau[C_euler[j]]==0;j++); // procura primeiro v�rtice do ciclo
                                        // j� criado que ainda tem arestas a
                                        // percorrer
       v=C_euler[j];
       int posaux=0;
       int inicaux=j;
       while (Grau[v]>0) // encontra ciclo auxiliar
          {
          C_aux[posaux++]=v;        // acrescenta v�rtice no primeiro ciclo
          int j;
          for (j=0;G[v][j]==0;j++); // encontra pr�xima aresta n�o percorrida
          Grau[v]--;Grau[j]--;G_Total-=2;   // atualiza graus
          G[v][j]=G[j][v]=0;     // elimina aresta
          v=j;
          }
       // acrescenta ciclo auxiliar no ciclo original
       for (int i=pos-1;i>=inicaux;i--) C_euler[i+posaux]=C_euler[i]; // desloca vetor � direita
       for (int i=0;i<posaux;i++) C_euler[inicaux+i]=C_aux[i];
       pos+=posaux;
       }
*tamciclo=pos;
return 1;
}

int main()
{
int Ciclo[50];
int tamciclo;
if (euler(Ge,Ciclo,&tamciclo))
   {
   printf("O Ciclo �: ");
   for (int i=0;i<tamciclo;i++) printf("%d ",Ciclo[i]);
   printf("\n");
   }
else printf("N�o tem\n");
getch();
}

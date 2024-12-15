#include <stdio.h>
int walkedSquares, maxSquares; /*quadrados andados*/
/*descobrir a distancia euclideana maxima que charlotte pode se afastar de casa*/

int main()
{
    float a,m; /*altura da mare e segundos para andar um quadrado no mapa*/
    int w,h,x,y;/*largurado mapa, altura do mapa, coordenadas da casa de charlotte*/
    int mapa[h][w],tempoMax = 43200;/*matriz de h x w, quadrados maximos andaveis*/
    scanf("%f%f%d%d%d%d",&a,&m,&w,&h,&x,&y);
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            scanf("%d ",mapa[i][j]); /*guarda altura em milimetros de cada quadrado*/
                                     /*em relação a mare ultra baixa, vaira de 0 a 20000 mm*/
    maxSquares=tempoMax/m;
}

/*percorrer o maximo de caminhos numa função recursiva e salvar o 
ponto de maior distância no caminho que ainda retorna para casa*/
int caminho(int x, int y)
{
    if (walkedSquares<maxSquares)
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                
            }
        }
            
    }
    else
    {
        /* code */
    }
    
    
}
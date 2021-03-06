using namespace std;
#include <cstdio>
#include <iostream>
#include <cstring>

bool test=true;
int map [6][6]={{-1,-1,2,3,4,5},{-1,-1,3,2,5,4},{-1,-1,1,0,2,2},{-1,-1,0,1,3,3},{-1,-1,4,4,1,0},{-1,-1,5,5,0,1}};

int mapeado(string instr)
{
   	if(instr=="+x")return 0;
    else if(instr=="-x")return 1;
	else if(instr=="+y")return 2;
	else if(instr=="-y")return 3;
	else if(instr=="+z")return 4;
	else return 5;
}

void darRepuesta(int pos)
{
    if(pos==0) printf("+x\n");
    else if(pos==1) printf("-x\n");
    else if(pos==2) printf("+y\n");
    else if(pos==3) printf("-y\n");
    else if(pos==4) printf("+z\n");
    else if(pos==5) printf("-z\n");
}

int main()
{
    if(test) freopen("../../data/medium/BenderBRodriguez.in","r",stdin);

    int numInst, pos;
    scanf("%d",&numInst);
    char instr[3];

    while(numInst!=0)
    {
        pos=0;
        for(int i=0;i<numInst-1;i++)
        {
            scanf("%s",instr);
            if(strcmp(instr,"No")!=0) pos=map[pos][mapeado(instr)];
        }
        darRepuesta(pos);
        scanf("%d",&numInst);
    }
    return 0;
}

#include<stdio.h>
void main()
{
  int roll,maths,c,ele,graphics,cs,i,add,p,l,m,n,o,q;
  float per;
  char name[40];
  
  printf("Enter your roll no.=");
  scanf("%d",&roll);

  printf("Enter your name= ");
  scanf("%s",name);
  a:printf("Enter maths marks=");
  scanf("%d",&maths);
  if(maths>100)
  {
    printf("!!! invalid entry enter again");
    printf("\n");
    goto a;
  }
  b:printf("Enter C-laungauge marks=");
  scanf("%d",&c);
   if(c>100)
  {
    printf("!!! invalid entry enter again");
    printf("\n");
    goto b;
  }
  d:printf("Enter electronics marks=");
  scanf("%d",&ele);
   if(ele>100)
  {
    printf("!!! invalid entry enter again");
    printf("\n");
    goto d;
  }
  e:printf("Enter Graphics marks=");
  scanf("%d",&graphics);
  if(graphics>100)
  {
    printf("!!! invalid entry enter again");
    printf("\n");
    goto e;
  }
  f:printf("Enter communication skillsmarks=");
  scanf("%d",&cs);
   if(cs>100)
  {
    printf("!!! invalid entry enter again");
    printf("\n");
    goto f;
  }
    printf("Enter practicle marks=");
      scanf("%d",&p);
      l=p+maths;
      m=p+c;
      n=p+ele;
      o=p+graphics;
      q=p+cs;
  for(i=1;i<=75;i++)
  {
    printf("=");
  }
  printf("\n                  SVERI'S Collage of Engineering,Pandhrpur");
  printf("\n");
   for(i=1;i<=75;i++)
  {
    printf("=");
  }
  printf("\n                          ||FY BTECH SCORE CARD||");
  printf("\n");
  for(i=1;i<=75;i++)
  {
    printf("=");
  }
  printf("\n");
  printf("Student name: %s",name); 
  printf("        Roll no:%d",roll);
  printf("\n");
   for(i=1;i<=75;i++)
  {
    printf("-");
  }
  printf("\nSUBJECTS");
  printf("            |______________MARKS____________|          |          |");
  printf("\n                    |  TOTAL | PRACTICAL |  THEORY  |PRCT+THERY|  RESULT  |");
  printf("\n____________________|________|___________|__________|__________|__________|");
  printf("\nMATHS");
  printf("               |  100   |");  
  printf("     %d    |     %d   |    %d",p,maths,l);
  if(l>=100)
  {
    printf("   |          |");
  }
  else
  {
    printf("    |          |");
  }
  printf("\nC-laungauge");
  printf("         |  100   |");
  printf("     %d    |     %d   |    %d",p,c,m);
  if(m>=100)
  {
    printf("   |          |");
  }
  else
  {
    printf("    |          |");
  }             
  printf("\nELECTRONICS");
  printf("         |  100   |");
    add=l+m+n+o+q;
   per=(float)add/625*100;
    if(per>=35)
  {
   printf("     %d    |     %d   |    %d",p,ele,n);
   if(n>=100)
  {
    printf("   |   PASS   |");
  }
  else
  {
    printf("    |   PASS   |");
  }
  }
  if(per<35)
  {
   printf("     %d    |     %d   |    %d",p,ele,n);
    if(n>=100)
  {
    printf("   |   FAIL   |");
  }
  else
  {
    printf("    |   FAIL   |");
  }
  }
  printf("\nGRAPHICS");
  printf("            |  100   |");
  printf("     %d    |     %d   |    %d",p,graphics,o);
  if(o>=100)
  {
    printf("   |          |");
  }
  else
  {
    printf("    |          |");
  }
  printf("\nCommunication Skills");
  printf("|  100   |");
  printf("     %d    |     %d   |    %d",p,cs,q);
  if(q>=100)
  {
    printf("   |          |");
  }
  else
  {
    printf("    |          |");
  }
  printf("\n");
   for(i=1;i<=75;i++)
  {
    printf("-");
  }

 
  printf("\nTotal Marks=%d",add);
  printf("         percentage=%f",per);
  printf("\n");
  printf("\n");

  if(per<=100&&per>=90)
  {
    printf(" GRADE=A");
  }
else if(per<=90&&per>=80)
 {
   printf(" GRADE=B");
 }
 else if(per<=80&&per>=70)
  {
    printf("GRADE=C");
  }
  else if(per<=70&&per>=35)
  {
    printf(" GRADE=D");
  }
  printf("\n");
 for(i=1;i<=75;i++)
  {
    printf("-");
  }
}
#include<stdio.h>
#include<stdlib.h>
main()
{
	int hr1,min1,sec1,hr2,min2,sec2;
	
	printf("��J��Ӯɶ��p��ɶ��t\n");

	printf("��J�ɶ�1: ");
	scanf("%d%d%d",&hr1,&min1,&sec1);
	printf("%dhr %dmin %dsec\n",hr1,min1,sec1);
	printf("��J�ɶ�2: ");
	scanf("%d%d%d",&hr2,&min2,&sec2);
	printf("%dhr %dmin %dsec\n",hr2,min2,sec2);	
	int hr1s=hr1*3600,min1s=min1*60,hr2s=hr2*3600,min2s=min2*60;
    int total1=hr1s+min1s+sec1;
    int total2=hr2s+min2s+sec2;
    int total3=total1-total2;
    int total4=total2-total1;
    if(total1>total2)
    	printf("��ɶ��t��%d��\n",total3);
    else
        printf("��ɶ��t��%d��\n",total4);
system("PAUSE");
return 0;
   
	
}

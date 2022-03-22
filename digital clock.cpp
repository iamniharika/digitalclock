#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int h=0,m=0,s=0;
	system("cls");
	printf("enter the time in format hh:mm:ss");
	scanf("%d%d%d" , &h,&m,&s);
	start:
		for(h;h<24;h++) {
			for(m;m<60;m++) {
				for(s;s<60;s++) {
					system("cls");
					printf("\n\n\t\t\t %d:%d:%d" ,h,m,s);
					if(h<12){
						printf("\t AM");
					}
					else{
						printf("\t PM");
					}
					for(double i=0;i<3619999;i++) {
						i++;
						i--;
}

}s=0;

}m=0;

}h=0;
goto start;
getch();
return 0;
}


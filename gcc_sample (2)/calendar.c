#include <stdio.h>
 
int day_of_week(int ,int ); //�Լ� ����
int print_calendar(int ,int ,int);
void print_head(int ,int );
int year; //��
int month;

int main(void)
{         
           //��
           int day; //�ش�� 1���� ����
          
           do {
                     printf("�⵵�� ���� �Է��Ͻÿ�(2009 8�� ���� ��������)\n>> ");
         //            scanf("%d%d",&year,&month); //��� �Է�
                     if(month>=1 && month<=12)
                                break;
                     else
                                printf("�߸��� �Է��Դϴ�\n>> ");
           } while (1);
          
           day = day_of_week(year,month); //�ش�� ���ۿ��� ���ϱ�
          
           print_head(year,month); //�޷� ��ܺ� ���
          
           //�޷� ��¥ ���
          
           return print_calendar(day,year,month); }
/****************************/
int day_of_week(int year,int month) //�� �ϼ��� ���ϴ� �Լ�(�ش� �� 1���� ������������ �˱�����)
{
           int temp = 0; //�ӽ÷� ��꿡 ����� ����
           int i; //for ������ ����� ����
          
           for(i=1;i<year;i++) { //�⵵�� �ϼ�
                     if((i%4 == 0) && (i%100 != 0) || (i%400 == 0)) {
                                temp += 366;
                     } else {
                                temp += 365;    
                     }
           }
          
           for(i=1;i<month;i++) { //�� �� �ϼ�
                     if ( i==2 ) { // 2���ϰ�� ���� �˻�
                                if((year%4==0) && (year%100 != 0) || (year%400 == 0))
                                          temp += 29;
                                else
                                          temp += 28;
                     }
                     switch (i) {
                     case 1:
                     case 3:
                     case 5:
                     case 7:
                     case 8:
                     case 10:
                     case 12:
                                temp += 31; //�Ѵ��� 31���� ���
                                break;
                     case 4:
                     case 6:
                     case 9:
                     case 11:
                                temp += 30; //�Ѵ��� 30���� ���
                                break;
                     }
           }
          
           temp = temp + 1; //���������� �ϼ��� ���� �� �� ���� ���Ѵ�
          
           return temp % 7; //1=��,2=ȭ...6=��,0=��
}
/****************************/
int print_calendar(int sd, int year, int month) //�޷��� ����ϴ� �Լ�
{
           int i, j; //for��
           int temp; //�ش� ���� �� �ϼ�
          
		   printf("%d,%d,%d\n",sd,year,month);
           switch (month) { //�Ѵ��� �ϼ��� ���Ѵ�
           case 1:       case 3:       case 5:       case 7:       case 8:       case 10:       case 12:
                     temp = 31; //�Ѵ��� 31���� ���
                     break;
           case 4:       case 6:       case 9:       case 11:
                     temp = 30; //�Ѵ��� 30���� ���
                     break;
           case 2: //2���� ���
                     if((year%4==0) && (year%100 != 0) || (year%400 == 0))
                                temp = 29;
                     else
                                temp = 28;
		   default :
			   printf("%d is invalid month! \n",month);
			   return 1;
           }
           printf("start!\n\n");
           printf("\t      ");
           for(i=1;i<=sd;i++)
               printf("        ");

		   j = sd;
           for(i=1;i<=temp;i++) {
                     if(j == 7) { //���Ϻ��� ��µǵ��� �ٹٲ�
                                printf("\n\t      ");
                                j = 0;
                     }
                     printf("%2d      ",i);
                     j++;
           }
           printf("\n\n");
		   return 0;

}
/****************************/
void print_head(int year,int month) //�޷��� ��ܺ� ����� ����ϴ� �Լ�
{
           printf("\n\t\t\t\t[%d�� %02d��]\n\n",year,month);
           printf("\t      ��      ��      ȭ      ��      ��      ��      ��\n");
}

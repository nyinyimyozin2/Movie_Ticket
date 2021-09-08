/*5918154 Nyi Nyi Myo Zin Htet, 5918186 Asif Rashid Section 643 Final project Due28.Dec.2016 Movie ticker booking system*/ 

#include <stdio.h>
void main()
{
	FILE*fpt;
	if((fpt=fopen("Ticket.txt","a"))== NULL)
	{
		printf("Error: File could not be open!");
	}
	else
	{
	
		int movie,day,time,seat=0,total,seattype,i,seatnum=70,z=0;
		char c;
		printf("Welcome to Our Movie ticket booking system!!\n");
		printf("\n");
		do
		{	
			a:
			printf("1.Sausage Party.\t\t2.Doctor Strange.\t\t3.Max Steel.\t4.Death Note 2016.\t\t5.Middle School.\n");
		
			printf("\n");
			
			printf("Enter the number for movie :");
			scanf("%d",&movie);
			fprintf(fpt,"Movies : ");
			switch(movie)
			{
				case 1: printf("Sausage Party.\n");
						fprintf(fpt,"Sausage Party.\n");
						break;
				case 2: printf("Doctor Strange.\n");
						fprintf(fpt,"Doctor Strange.\n");
						break;
				case 3: printf("Max Steel.\n");
						fprintf(fpt,"Max Steel.\n");
						break;
				case 4: printf("Death Note.\n");
						fprintf(fpt,"Death Note.\n");
						break;
				case 5: printf("Middle School.\n");
						fprintf(fpt,"Middle School.\n");
						break;
				default:printf("\n");
						printf("Error!! Please try Again!\n");
				goto a;
			}
		
			printf("\n");
			
			b:
			printf("1.Sunday\t 2.Monday\t 3.Tuesday\t 4.Wednesday\t 5.Thursday\t6.friday\t 7.Saturday.\n");
			
			printf("\n");
		
			printf("Enter the number to Choose Day! :");
			scanf("%d",&day);
			fprintf(fpt,"Day :");
			switch(day)
			{
				case 1: printf("Sunday\n");
						fprintf(fpt,"Sunday\n");
						break;		
				case 2: printf("Monday\n");
						fprintf(fpt,"Monday\n");
						break;		
				case 3: printf("Tuesday\n");
						fprintf(fpt,"Tuesday\n");
						break;
				case 4: printf("Wednesday\n");
						fprintf(fpt,"Wednesday\n");
						break;		
				case 5: printf("Thursday\n");
						fprintf(fpt,"Thursday\n");
						break;		
				case 6: printf("Friday\n");
						fprintf(fpt,"Friday\n");
						break;		
				case 7: printf("Saturday\n");
						fprintf(fpt,"Saturday\n");
						break;
				default:printf("\n");
						printf("Please chose again!\n");
				goto b;
			}
			
			printf("\n");
			
			c:	
			printf("1.9:00 to 12:00 \t2.13:00 to 15:00\t3.17:00 to 19:00\t\t4.21:00 to 23:00\n");
		
			printf("\n");
			
			printf("Enter the number for time :");
			scanf("%d",&time);
			fprintf(fpt,"Time :");
			switch(time)
			{
				case 1: printf("9:00 to 12:00\n");
						fprintf(fpt,"9:00 to 12:00\n");
						break;
				case 2: printf("13:00 to 15:00\n");
						fprintf(fpt,"13:00 to 15:00\n");
						break;
				case 3: printf("17:00 to 19:00\n");
						fprintf(fpt,"17:00 to 19:00\n");
						break;
				case 4: printf("21:00 to 23:00\n");
						fprintf(fpt,"21:00 to 23:00\n");
						break;
				default:printf("\n");
						printf("Error Time!! Please Try again!!\n");
				goto c;
				printf("\n");
			}
			if((day==4&&time==3)||(day==4&&time==4))
			{
				printf("\nToday is movie night! Special discount 20%% !!\n");
				fprintf(fpt,"It is promotion period!\n");
				}
		
			printf("\n");
			
			d:
			z=seatnum-seat;
			printf("There are %d seat.\n",z);
			if(z<=0)
			{
				fprintf(fpt,"There are 0 seat.\n");
				break;
			}
			else
			{
				printf("Which type of seat do you want?\n");
				printf("1.VIP seat.(300 bath)\t\t2.Normal seat.(200Bath)\n");
			
				printf("\n");
			
				printf("Enter a number for seat type :");
				scanf("%d",&seattype);
				fprintf(fpt,"Tpye of seat:");
				switch(seattype)
				{
					case 1: printf("You choice VIP seat!!\n");
							fprintf(fpt,"VIP.\n");
							break;
					case 2: printf("You choice Normal seat!!\n");
							fprintf(fpt,"Normal!\n");
							break;
					default : printf("\n");
							  printf("Error! please enter the number correctly!!\n");
					goto d;
				}
				e:
				if(seattype==1)
				{
					g:
					printf("\nHow many seat do you want to buy?\n");
					scanf("%d",&seat);
					if(seat>70 || seat<1)
					{
						printf("Error:Try again please!\n");
						printf("\n");
						goto g;
					}
					else
					{
				
						fprintf(fpt,"Bought %d VIP seat!\n",seat);
				
						if((day==4&&time==3)||(day==4&&time==4))
						{
							total=(300*seat)*(0.8);
						}
						else
						{
						total=300*seat;
						}
					}
				}
				else if (seattype==2)
				{
					f:
					printf("How many seat do you want to buy?\n");
					scanf("%d",&seat);
							if(seat>70 || seat<1)
					{
						printf("Error:Try again please!\n");
						printf("\n");
						goto f;
					}
					else
					{
						fprintf(fpt,"Bought %d Normal seat!\n",seat);
			
						if((day==4 && time==3)||(day==4 && time==4))
						{
							total=(200*seat)*(0.8);
						}
						else
						{
							total=200*seat;
						}
					}
				}
				else
				{
				goto e;
				}
		}
			printf("\n");
		
			printf("Total : %d Bath\n",total);
			fprintf(fpt,"Total : %d Bath\n",total);
			printf("Booking succeeded!\n");
			printf("Have a nice day !! We hope you'll enjoy the movie!\n");
			fprintf(fpt,"-------------------------------");	
		
			printf("\n");
		
			fprintf(fpt,"\n");
			printf("Would you like to book again?\n");
			k:
			printf("Press 1 to book again! : ");
			scanf("%d",&i);
			if(i==1 || i==6969)
			{
				continue;
			}
			else
			{
				goto k;
			}
		}while(i!=6969);

		fclose(fpt);
	}
}

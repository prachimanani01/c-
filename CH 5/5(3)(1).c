#include<stdio.h>

void main()
{
	int choice,english,hindi,gujarati;

	printf("\t======Telecom call service======\n\n\n");
	printf("Press 1 for english\n");
	printf("Press 2 for hindi\n");
	printf("Press 3 for gujrati\n\n\n");

	printf("Enter your choice:-");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:
			printf("\nPress 1 for Internet recharge\n");
			printf("Press 2 for Top up recharge\n");
			printf("Press 3 for special recharge\n\n");
			printf("Enter your choice:-");
			scanf("%d",&english);
		switch (english)
		{
			case 1:
				printf("You have successfully done the INTERNET RECHARGE....!\n");
			break;

			case 2:
				printf("You have successfully done the TOP UP RECHARGE....!\n");
			break;

			case 3:
				printf("You have successfully done the SPECIAL RECHARGE....!\n");
			break;

		}
		break;
		case 2:
			printf("Internet recharge ke liye 1 dabaiye\n");
			printf("Top up recharge keliye 2 dabaiye\n");
			printf("Special recharge keliye 3 dabaiye\n");
			printf("Enter your choice:-");
			scanf("%d",&hindi);
		      switch (hindi)
			{
			case 1:
				printf("apne safaltapurvak INTERNET RECHARGE kra liya hain...!\n");
			break;

			case 2:
				printf("apne safaltapurvak TOP UP RECHARGE kra liya hain....!\n");
			break;

			case 3:
			printf("apne safaltapurvak SPECIAL RECHARGE kra liya hain.....!\n");
			break;

		}
		break;

	case 3:
			printf("Internet recharge mate 1 dabavo\n");
			printf("Top up recharge mate 2 dabavo\n");
			printf("Special recharge mate 3 dabavo\n\n");
			printf("Enter your choice:-");
			scanf("%d",&gujarati);
		      switch (gujarati)
		{
			case 1:
				printf("tame safaltapurvak INTERNET RECHARGE karyu che.....!\n");
			break;

			case 2:
				printf("tame safaltapurvak TOP UP RECHARGE karyu che.....!\n");
			break;

			case 3:
			printf("tame safaltapurvak SPECIAL RECHARGE karyu che....!\n");
			break;

		}
		default:
			printf("Invalid choice");
		break;
	}


}
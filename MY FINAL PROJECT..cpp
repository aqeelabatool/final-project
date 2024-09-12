#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char reg[12];
	char x;
	cout<<"enter registration number i.e 2020-UOBS-000\n";
	gets(reg);
	
	if (strcmp(reg,"2020-UOBS-154")==0)
    {
    cout<<"Mubeen Ahmed Syed\n";
	 cout<<"S/O S M Ali Shah\n";
	 cout<<"Semester Fall 2020\n";
	 cout<<"Section A\n";
	 
	 cout<<"Enter A to check attendence , S to check assignment , R to check result, T to check time table \n";
	 cin>>x;
	 switch(x)
	  {
	  case 'A':
	   cout<<"Your Attendence Is 86%";
	           break;
	  case 'S':
	   cout<<"Your Assignment Is Submitted";
	           break;
	  case 'R':
	   cout<<"Your Result is 72%";
	  case 'T':
	   cout<<"Monday\n 1:30 programming fundamental\n 2:30 calculus\n tuesday\n 12:30 physics\n 3:30 english";
	           break;
	  }
	 exit(1);
	}
	if (strcmp(reg,"2020-UOBS-253")==0)
    {
    cout<<"Anjum Ali\n";
	 cout<<"S/O S M Ali Shah\n";
	 cout<<"Semester Fall 2020\n";
	 cout<<"Section A\n";
	 cout<<"Enter A to check attendence , S to check assignment , R to check result , T to check time table \n";
	  cin>>x;
	 switch(x)
	  {
	  case 'A':
	   cout<<"Your Attendence Is 82%";
	           break;
	  case 'S':
	   cout<<"Your Assignment Is Submitted";
	           break;
	  case 'R':
	   cout<<"Your Result is 76%";
	  case 'T':
	   cout<<"Monday\n 1:30 programming fundamental\n 2:30 calculus\n tuesday\n 12:30 physics\n 3:30 english";
	           break;
	  }
	 exit(1);
	}
	if (strcmp(reg,"2020-UOBS-344")==0)
    {
    cout<<"Fida Hussain\n";
	 cout<<"S/O S M Ali Shah\n";
	 cout<<"Semester Fall 2020\n";
	 cout<<"Section A\n";
	 cout<<"Enter A to check attendence , S to check assignment , R to check result , T to check time table \n";
	  cin>>x;
	 switch(x)
	  {
	  case 'A':
	   cout<<"Your Attendence Is 92%";
	           break;
	  case 'S':
	   cout<<"Your Assignment Is Submitted";
	           break;
	  case 'R':
	   cout<<"Your Result is 81%";
	  case 'T':
	   cout<<"Monday\n 1:30 programming fundamental\n 2:30 calculus\n tuesday\n 12:30 physics\n 3:30 english";
	           break;
	  }
	 exit(1);
	}
	if (strcmp(reg,"2020-UOBS-411")==0)
    {
    cout<<"Kacho Zakawat\n";
	 cout<<"S/O S M Ali Shah\n";
	 cout<<"Semester Fall 2020\n";
	 cout<<"Section A\n";
	 cout<<"Enter A to check attendence , S to check assignment , R to check result ,T to check time table \n";
	  cin>>x;
	 switch(x)
	  {
	  case 'A':
	   cout<<"Your Attendence Is 96%";
	           break;
	  case 'S':
	   cout<<"Your Assignment Is Submitted";
	           break;
	  case 'R':
	   cout<<"Your Result is 65%";
	  case 'T':
	   cout<<"Monday\n 1:30 programming fundamental\n 2:30 calculus\n tuesday\n 12:30 physics\n 3:30 english";
	           break;
	  }
	 exit(1);
	}
      return 0;
}

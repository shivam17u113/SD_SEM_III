#include<iostream>
using namespace std;


void create(int a[], int n)
 {

		for(int i=0; i<n; i++)
		{
		cin>>a[i];

		}
 }

void display( int a[],int no)
{
cout<<"{";
for (int i=0; i<no; i++)
{
cout<<a[i];
cout<<"\t ";
}
cout<<"}";
}


int union1(int a[], int b[] , int c[], int no1,int no2)
{
int i,j,count=0,k=0;
for( i=0; i<no1; i++)
{
c[i]=a[i];
k++;
}

for( j=0 ;j<no2 ;j++)
{
count=0;

for (i=0; i<no1 ;i++)
   {
	if(a[i]== b[j])
	{
	count++;

	}
  }

	if(count==0)
	{
         
	c[k]=b[j];
          k++;

	}


 }

return k;

}

int difference(int a[], int b[] , int c[], int no1,int no2)
{

int i,j,k=0,count=0;

for(i=0; i<no1;i++)

{
count=0;

for(j=0; j<no2;j++)


  {

	 if(a[i]==b[j])
	{

	count++;
	}

   
  }
if(count==0)
	{
	c[k]=a[i];
	k++;

	}


}

return k;

}


int intersection(int a[], int b[] , int c[], int no1,int no2)
{

int i,j,k=0,count=0;

for(i=0; i<no1;i++)

{
count=0;

for(j=0; j<no2;j++)


  {

	 if(a[i]==b[j])
	{

	count++;
	}

   
  }
if(count!=0)
	{
	c[k]=a[i];
	k++;

	}


}

return k;

}

int subset(int a[], int b[] , int no1,int no2)
{
int count=0;

		for(int i=0; i<no1; i++)
{
	for(int j=0; j<no2;j++)

	{
		if(a[i]==b[j])
		{
			count++;
		}
		
	}
	
}

cout<<" \n\n the count is ( no of elements in set 2 )"<<count;
if(count==no2)
{
	return 1;
	}	
	else
	{
		return 1;
	}
	
	
}

void remove(int a[],int no)
{
	
		int pos,i;
	cout<<" which position you wnat to remove   "; cin>>pos;
	
	for( i=pos-1; i<no;i++)
	{
		a[i]=a[i+1];
		
	}
	a[i]=0;
}

void modify(int a[],int no)
{
		int pos,i,ele;
	cout<<" which position you wnat to modify   "; cin>>pos;
	
	cout<<"\n enter the new element   ";
	a[pos]=ele;
	
}


int main()
{
int no_ele,choise;
int result[100];
int no1,no2,ch1;
cout<<"\n enter the no of elemnts you want to insert in set 1  "; cin>>no1;

int arr1[no1];

cout<<"\n enter the no of elemnts you want to insert in set 2  "; cin>>no2;

int arr2[no2];

cout<<"enter the elements in 1st set  ";
create(arr1,no1);
cout<<"enter the elements in 2nd set  ";
create(arr2,no2);







do
{
cout<<"\n 1. union\n 2.difference \n 3. intersection\n 4. subset\n 5.remove \n 6.display\n 0.exit";
cin>>ch1;

switch(ch1)
{
case 1:
no_ele=union1(arr1,arr2,result,no1,no2);
cout<<"\n the unoin is   ";
 display(result,no_ele);
break;


case 2:
	
	{
		cout<<"\n\n  ";
		cout<<"\n1.a-b \n 2.b-a";
		cin>>choise;
		
		switch(choise)
		{
			case 1:
			no_ele=difference(arr1,arr2,result,no1,no2);
            cout<<"\n the difference  is   ";
            display(result,no_ele);
            break;
			
			case 2:
			 	no_ele=difference(arr2,arr1,result,no1,no2);
            cout<<"\n the difference  is   ";
            display(result,no_ele);
            break;
			
			
		}
		
		
		break;
	}

case 3:
no_ele=intersection(arr1,arr2,result,no1,no2);
cout<<"\n the intersection  is   ";
 display(result,no_ele);
break;

case 4:
	{
	
	no_ele=subset(arr2,arr1,no1,no2);
 if(no_ele==1)
 {
 	cout<<" yes!!! it is subset  ";
 }
	else
		{
	        cout<<"  not a subset  ";
		}
break;
}

case 5:
	{
		cout<<"\n which set you want to change 1st or second   ";
		cin>>choise;
		
		if(choise==1)
		{
			remove(arr1,no1);
		}
		else
		{
			remove(arr2,no2);
		}
		
		break;
	}
	
	case 6:
		{
			cout<<"\n which set you want to display 1st or second   ";
		cin>>choise;
		
		if(choise==1)
		{
			display(arr1,no1);
		}
		else
		{
			display(arr2,no2);
		}
		
	break;
	}

case 7:
	{
	cout<<"\n which set you want to modify 1st or second   ";
		cin>>choise;
		
		if(choise==1)
		{
			modify(arr1,no1);
		}
		else
		{
			modify(arr2,no2);
		}
		
	break;	
		
		
		
		
	}



}
}while(ch1!=0);



return 0;

}





















#include <iostream>
#include<bits/stdc++.h>
int count =0;
using namespace std;
int addnode();
int deleteNode();
int searchNode();
void displayList();
void cleanup(); 
struct EMP {
   char emp_name[20];
   int emp_id;
   struct EMP *prev;
   struct EMP *next;
};
struct EMP *head = NULL;
struct EMP *tail = NULL;
struct EMP *temp1;
struct EMP *temp2;
void create()
{
    int emp_id;
    char emp_name[20];
    tail = (struct EMP*)malloc(sizeof(struct EMP));
    tail->prev = NULL;
    tail->next = NULL;
    cout<<"Enter employee id "<<endl;
    cin>>emp_id;
    cout<<"Enter employee name"<<endl;
    cin>>emp_name;
    tail->emp_id = emp_id;
    strcpy(tail->emp_name,emp_name);
        
}

int main()
{
	cout<<"========================\n";
	cout<<"***** Main Menu *****\n";
	cout<<"========================\n";
	while(true)
	{
	
	cout<<"1. Add Node"<<endl;
	cout<<"2. Delete Node"<<endl;
	cout<<"3. Search Node"<<endl;
	cout<<"4. Dispaly List"<<endl;
	cout<<"5. Cleanup (Delete all nodes)"<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Enter your option (1..6) : ";

	int a;
	cin>>a;
	switch(a)
	{
		case 1:
			addnode();
			break;
			case 2:
				deleteNode();
				break;;
				case 3:
					searchNode();
					break;
					case 4:
						displayList();
						break;
						case 5:
							cleanup();
							break;
				case 6:
					exit(0);
					break;
					default:
						cout<<"Invalid Input"<<endl;
						break;
	}
}
	return 0;
}
int addnode()
{
	 int check;
	 cout<<"Press 1 to add head node or press 2 for non_head node"<<endl;
	 
cin>>check;
if(check==1){

    // If DLL is empty
    if (head == NULL) {
        create();
        head = tail;
        temp1 = head;
    }
  
    // Else create a new node and
    // update the links
    else {
        create();
        tail->next = head;
        head->prev = tail;
        head= tail;
   }
}
else
{ 
if(check==2)
{
	
    // If DLL is empty
    if (head== NULL) {
        create();
        head= tail;
        temp1 = head;
    }
  
    // Else create a new node and
    // update the links
    else {
        create();
        temp1->next = tail;
        tail->prev = temp1;
        temp1 = tail;
    }
}
}
return 0;
}
int deleteNode()
{ 
	int check1;
	cout<<"Press 1 to delete node from begining or press 2 to delete node from end"<<endl;
	cin>>check1;
	if(check1==0)
	{
		
		cout<<"Node not found"<<endl;
		
	}
	else 
	{
		if(check1==1)
		{
			struct EMP* tail;
    tail = head;
    if (tail == NULL) {
        cout<<"list is empty\n";
        return 0;
    }
    if (tail->next == NULL) {
        cout<<tail->emp_id;
        cout<<tail->emp_name;
        free(tail);
        head = NULL;
    }
    else {
        head = head->next;
        head->prev = NULL;
        cout<<tail->emp_id;
        cout<<tail->emp_name;
    }
    
    return 0;
}
		}
		
			if(check1==2)
			{
				struct EMP* tail;
    tail = head;
    if (tail == NULL) {
        cout<<"list is empty\n";
        return 0;
    }
    if (tail->next == NULL) {
        cout<<tail->emp_id;
        cout<<tail->emp_name;
        free(tail);
        head = NULL;
    }
    else {
        tail = temp1;
        temp2 = temp1->prev;
        temp2->next = NULL;
        cout<<tail->emp_id;
        cout<<tail->emp_name;
        free(tail);
        temp1 = temp2;
    }
    
    return 0;
}
			}
		
	
	void displayList()
	{
		temp2 = head;
    if (temp2 == NULL) {
        cout<<"\n list is empty\n";
        return;
    }
    cout<<"\n linked list elements from beginning:\n"; 
           
    while (temp2 != NULL) {
        cout<<"employee id = "<<tail->emp_id<<endl;
        cout<<"employee name = "<<tail->emp_name<<endl;
        temp2 = temp2->next;
        
    }
	}
int searchNode()
{
	int x;
	cout<<"Enter the employe id to search "<<endl;
	cin>>x;
	tail = head;
	int pos=0;
	while(tail->emp_id != x && tail->next != NULL)
	{
		pos++;
		tail = tail->next;
	}
	if(tail->emp_id != x)
	{
	
	cout<<"Not found "<<endl;
}
	else
	{
			cout<<tail->emp_id<<endl;
			cout<<tail->emp_name<<endl;
	}
return 0;
}
void cleanup()
{
	if (head == NULL || tail == NULL) 

        return; 
 

    

    if (head == tail) 

        head = tail->next; 
 

    
    if (tail->next != NULL) 

        tail->next->prev = tail->prev; 
 

    

    if (tail->prev != NULL) 

        tail->prev->next = tail->next; 
 

    

    free(tail); 

    return;
}


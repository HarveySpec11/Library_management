#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library
{
    public :
    int id;
    char name[100];
    char author_name[100];
    char student[100];
    int price;
    int pages;
};
    
int main()
{
    Library lib[20];
    int input=0;
    int count =0;

    while(input!=3)
    {
        cout<<"Enter 1 to input details"<<endl;
        cout<<"Enter 2 to display details"<<endl;
        cout<<"Enter 3 to quit"<<endl;
        cin>>input;

    switch (input)
    {
        case 1: 
            start:
            cout<<"Enter book id"<<endl;
            cin>>lib[count].id;
            cout<<"Enter book name"<<endl;
            cin.getline(lib[count].name,100,'$');
            cout<<"Enter Author name"<<endl;
            cin.getline(lib[count].author_name,100,'$');
            cout<<"Enter student name"<<endl;
            cin.getline(lib[count].student,100,'$');
            cout<<"Enter book price"<<endl;
            cin>>lib[count].price;
            cout<<"Enter book pages"<<endl;
            cin>>lib[count].pages;
            count++;
            break;

            case 2: 
            for(int i=0;i<count;i++)
            {
                cout<<"Book id is:  "<<lib[i].id<<endl;
                cout<<"Book name is:  "<<lib[i].name<<endl;
                cout<<"Name of the Author:  "<<lib[i].author_name<<endl;
                cout<<"Student name is:  "<<lib[i].student<<endl;
                cout<<"The price of the book is:  "<<lib[i].price<<endl;
                cout<<"The no of pages in the book are:  "<<lib[i].pages<<endl;
            }
            break;

            case 3:
            exit(0);
            break;

            default:
            cout<<"You have entered wrong value, please type again"<<endl;
            goto start;
    }
    }
} 

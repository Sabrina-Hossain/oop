//IIUC CAFETERIA BY  C211211
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

//Global Variable
float amount=0;		//To calculate the total amount.
int size=0;		//Total Items Added to Order

//Structure to store the ordered items & generate bill
struct Items
{
    int id;
    char item[20];
    int qty;
    float rate;
    float amt;
} I[20];

//Function Prototyping
void drawLine();	//Function to drawLines for presentaiton
void Header();		//Display Heading in Invoice
void menu();		//Displaying Menu of Items
void showBill();	//Displaying Invoice

void drawLine()
{
    for(int i=1; i<70; i++)
        cout<<"=";
    cout<<endl;
}

void Header()
{
    cout<<setw(10)<<"I.D."
        <<setw(20)<<"Item Name"
        <<setw(10)<<"Qty."
        <<setw(10)<<"Rate"
        <<setw(10)<<"Amount"
        <<endl;
}

void showBill()
{
    system("cls");
    drawLine();
    cout<<"\t\t\tITEMIZED INVOICE\n";
    drawLine();
    Header();
    drawLine();
    for(int i=0; i<size; i++)
    {
        cout<<setw(10)<<I[i].id
            <<setw(20)<<I[i].item
            <<setw(10)<<I[i].qty
            <<setw(10)<<I[i].rate
            <<setw(10)<<I[i].amt
            <<endl;
    }
    cout<<endl;
    cout<<setw(50)<<"Total Amount : "
        <<setw(10)<<amount<<" Taka"<<endl;
    drawLine();
    cout<<"\n\t...Thank you for purchasing from IIUC CAFETERIA...\n\n";

}

void menu()
{
    system("cls");
    drawLine();
    cout<<"\t\tWELCOME TO IIUC CAFETERIA\n";
    drawLine();
    cout<<"Items Available\t\tRate\n";
    drawLine();
    cout<<"0. Exit\n";
    cout<<"1. Coffee\t\t30.00\n";
    cout<<"2. Tea\t\t\t15.00\n";
    cout<<"3. Soda\t\t\t20.00\n";
    cout<<"4. Juice\t\t15.00\n";
    cout<<"5. Burger\t\t35.00\n";
    cout<<"6. Chicken Khichuri\t60.00\n";
    cout<<"7. Chicken Somucha\t 8.00\n";
    cout<<"8. Biscut\t\t15.00\n";

    cout<<"\nEnter your choice: ";
}

int main()
{
    int ch, i=0, qty;
    char choice='n';
start:
    do
    {
        system("cls");
        menu();
        cin>>ch;
        switch(ch)
        {
        case 0:
            exit(0);
        case 1:
            cout<<"\nNo. of Coffees: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"No order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Coffee");
                I[i].rate=30;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }

        case 2:
            cout<<"\nNo. of Teas: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Tea");
                I[i].rate=15;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }

        case 3:
            cout<<"\nNo. of Sodas: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Soda");
                I[i].rate=20;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }

        case 4:
            cout<<"\nNo. of Juices: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Juice");
                I[i].rate=15;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }

        case 5:
            cout<<"\nNo. of Burger's: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Burger");
                I[i].rate=35;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }


        case 6:
            cout<<"\nNo. of Chicken Khichuri's: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Chicken Khichuri");
                I[i].rate=60;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }

        case 7:
            cout<<"\nNo. of Chicken Somucha's: ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Chicken Somucha");
                I[i].rate=8;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }
        case 8:
            cout<<"\nNo. of Biscuts : ";
            cin>>I[i].qty;
            if(I[i].qty==0)
            {
                cout<<"\n\n\tNo order placed yet";
                break;
            }
            else
            {
                I[i].id=i+1;
                strcpy(I[i].item,"Biscut");
                I[i].rate=15;
                I[i].amt=I[i].qty*I[i].rate;
                amount+=I[i].amt;
                i++;
                size++;
                break;
            }
        default:
            cout<<"\n\t\tItem not available";
            break;
        }
        cout<<"\n\n\tDo You Want to Add More (Y/N)? ";
        cin>>choice;

        if(choice=='Y'||choice=='y')
            goto start;
        else if(choice!='Y'||choice!='y')
            ch=0;

    }
    while(ch!=0);

    if((choice!='y'||choice!='Y') && amount>0)
        showBill();

    amount=0;
    size=0;
    int ax;
    cout<<"\n\t Press 0 for Exit \n";
    cout<<"\n\t Press 1 for New Order \n\t_";
    cin>>ax;
    if(ax==1)
    {
        main();
        system("cls");
    }
    else if(ax==0)
    {
        exit(0);
    }
}

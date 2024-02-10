#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <ctime>
#include <windows.h>
#include <conio.h>

	using namespace std;
		void login();
		void registr();
		void forgot();
		void reciept();

	main(){
		
	cout<<"\n\n\n\t\t\t\t\t     лл  ллл  лл  л  л ллл   ллллл";
	cout<<endl<<"\t\t\t\t\t    л    л л л  л л  л л л   л    ";
	cout<<endl<<"\t\t\t\t\t    л лл ллл л  л л  л ллл   ллллл";
	cout<<endl<<"\t\t\t\t\t    л  л лл  л  л л  л л     	  л";
	cout<<endl<<"\t\t\t\t\t    лллл л л  лл   лл  л     ллллл\n\n\t\t\t\t\t    ";
		
	char x = 219;
	for(int i=0;i<=27;i++){			
	Sleep(30);
	cout<<x;
	} 
	system("cls");
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	LoginForm:
        int choice;
    
    cout  << "\t\t\t\t\t==========\033[1;35mBEAN THERE, DRANK THAT CAFE\033[0m============" << endl;
    cout  << "\t\t\t\t\t|       \033[1;35mWhere one sip feels like a warm hug\033[0m     |" << endl;
    cout  << "\t\t\t\t\t|                                               |" << endl;
    cout  << "\t\t\t\t\t|\033[1;34m                 [1] Log in                    \033[0m|" << endl;
    cout  << "\t\t\t\t\t|\033[1;32m                 [2] Sign up                   \033[0m|" << endl;
    cout  << "\t\t\t\t\t|\033[1;33m                 [3] Forgot Password           \033[0m|" << endl;
    cout  << "\t\t\t\t\t|\033[1;36m                 [4] About                     \033[0m|" << endl;
    cout  << "\t\t\t\t\t|\033[1;31m                 [5] Exit                      \033[0m|" << endl;
    cout  << "\t\t\t\t\t|                                               |" << endl;
    cout  << "\t\t\t\t\t=================\033[1;35mW-E-L-C-O-M-E\033[0m===================" << endl;
    
        cout<<"\n\t\t\t\t\tEnter your choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1:
                login();
                break;
        	case 2:
            	registr();
                break;
            case 3:
                forgot();
                break;
            case 4:
            	
        system("cls");
    SetConsoleTextAttribute(hConsole, 3);   
    cout  << "\t\t==========================================About==================================================" << endl;
    cout  << "\t\t|                             BEAN THERE, DRANK THAT CAFE                                       |" << endl;
    cout  << "\t\t|                                                                                               |" << endl;
    cout  << "\t\t| This program is for educational purpose only.                                                 |" << endl;
    cout  << "\t\t| This program is all about Coffee Ordering System and this is our project in comprog. subject. |" << endl;
    cout  << "\t\t| This program has a lot of features for the user.                                              |" << endl;
    cout  << "\t\t| It reduces the time-consuming, it increases the service quality and more.                     |" << endl;
    cout  << "\t\t| This system has also a lot of bugs or limits.                                                 |" << endl;
    cout  << "\t\t| nd We are working on it. Thank you.                                                           |" << endl;
    cout  << "\t\t|                                                                                               |" << endl;
    cout  << "\t\t=======================================W-E-L-C-O-M-E=============================================" << endl;
                	
    	system ("pause");
        system("cls");
    		main();
        		goto LoginForm;
        		break;
                		
            case 5:
		system("cls");
		SetConsoleTextAttribute(hConsole, 2); 
    	cout  <<"\t\t\t\t\tThanks for using this program" << endl;
        cout  <<"\t\t\t\t\tThis program is created by CEIT 37 201A Group5" << endl;
        cout  << endl;
        cout  << "\t\t\t\t\t==========BEAN THERE, DRANK THAT CAFE============" << endl;
		cout  << "\t\t\t\t\t|                 Group Members:                |" << endl;
		cout  << "\t\t\t\t\t|                                               |" << endl;
		cout  << "\t\t\t\t\t|                 Jhonard Langcoyan             |" << endl;
		cout  << "\t\t\t\t\t|                 Mary Ann Gomez                |" << endl;
		cout  << "\t\t\t\t\t|                 Mark Anthony Maraya           |" << endl;
		cout  << "\t\t\t\t\t|                 Piolo Manibog                 |" << endl;
		cout  << "\t\t\t\t\t|                 Elaine Valdez                 |" << endl;
		cout  << "\t\t\t\t\t|                 Frensie Beltran               |" << endl;
		cout  << "\t\t\t\t\t|                 Monica Cruz                   |" << endl;
		cout  << "\t\t\t\t\t|                 Yurie Flores                  |" << endl;
		cout  << "\t\t\t\t\t|                 Darlyn Evasco                 |" << endl;
		cout  << "\t\t\t\t\t|                 Sarah Mae Hernandez           |" << endl;
		cout  << "\t\t\t\t\t|                                               |" << endl;
		cout  << "\t\t\t\t\t=================W-E-L-C-O-M-E===================" << endl;
                return 0;
                break;
            default:
                cout<<"\t\t\t\t\tError! The program will now terminate\n"<<endl; 
                return 0;
        }
        
}
	
	void login(){ // Mark and Frensie
		char ch;
        int count;
        string user,pass,u,p;
        system("cls");
    cout  << "\t\t\t\t\t==========\033[1;35mBEAN THERE, DRANK THAT CAFE\033[0m============" << endl;
    cout  << "\t\t\t\t\t|       \033[1;35mWhere one sip feels like a warm hug\033[0m     |" << endl;
    cout  << "\t\t\t\t\t|                                               |" << endl;
    cout  << "\t\t\t\t\t|                 \033[1;34mPlease Login\033[0m                  |" << endl;
    cout  << "\t\t\t\t\t|                                               |" << endl;
    cout  << "\t\t\t\t\t=================\033[1;35mW-E-L-C-O-M-E\033[0m===================" << endl;
    cout  << "\t\t\t\t\t                                                 " << endl;
    cout  << "\t\t\t\t\tUSERNAME: ";
    	cin >> user;
    cout  << "\t\t\t\t\tPASSWORD: ";
       
       
	  	while((ch = getch()) != 13)
		{
    // The users inputted password will display as an asterisk//
    		if(ch == 8){
				if(!pass.empty()){
					cout << "\b \b";
				pass.erase(pass.size() - 1); 
				}
			
			}else{
				
				pass.push_back(ch);
				cout << '*';
			
			}
		}      
        
        ifstream input("Database.txt");
        while(input>>u>>p)
        {
        	if(u==user && p==pass){
        		
        	count=1;
            system("cls");
            }
        }
        input.close();
        if(count==1)
        {
                
    double vat;
    int ordercode;
    int i = 0, x = 0, choice, transaction = 0, drinks = 0, a, b, sleep, itempurchase = 0;
    int limit = 0, quantity, order, pay, change = 0, toy;
    int yesno = 1, totalquantity[100], totalorder[100], total = 0, add;
    string totaldrinks[100], price[100];
    string allorder[100], name1, name, icon;
    int again = 1;
    char *l = " ------------------------------------------------------------------------------\n";
    login:
    string user;
    string pass = "";

// for Icon
    char ch;
    icon[0] = 2;
    icon[1] = 16;
    icon[2] = 17;
    icon[3] = 4;
    icon[4] = 2;
    icon[5] = 240;

    main:

    beginning:

    do {
    		system("cls");
        limit++;
        again++;
        itempurchase++;
        i++;

    cout << "\t\t\t\t\t-----------------------------------------------" << endl;
    cout << "\t\t\t\t\t|\033[1;35m    Welcome To BEAN THERE, DRANK THAT CAFE\033[0m   |" << endl;
    cout << "\t\t\t\t\t-----------------------------------------------\n" << endl;

    cout << "\t\t\t\t\t ==========\033[1;35mBEAN THERE, DRANK THAT CAFE\033[0m========="<<endl;
	cout << "\t\t\t\t\t|                                              |"<<endl;
	cout << "\t\t\t\t\t|              What is your Order?             |"<<endl;
	cout << "\t\t\t\t\t|                                              |"<<endl;
	cout << "\t\t\t\t\t| \033[1;31m[1]Hot Coffee\033[0m............................... |"<<endl;
	cout << "\t\t\t\t\t| \033[1;34m[2]Iced Coffee\033[0m.............................. |"<<endl;
	cout << "\t\t\t\t\t| \033[1;33m[3]Dessert Only\033[0m............................. |"<<endl;
	cout << "\t\t\t\t\t| \033[1;32m[0]Main Menu\033[0m................................ |"<<endl;
	cout << "\t\t\t\t\t|                                              |"<<endl;
	cout << "\t\t\t\t\t =================W-E-L-C-O-M-E================"<<endl;


    cout << "\n\t\t\t\t\t" << icon[1] << " Please Enter your Choose: ";
    cin >> choice;

			system("cls");								//HOT COFEE MENU
            if (choice == 1) {


    cout << "\t\t\t\t\t  -----------------------------------------------" << endl;
    cout << "\t\t\t\t\t  |              \033[1;31mHOT COFFEEE\033[0m   -  \033[1;32mMENU\033[0m          |" << endl;
    cout << "\t\t\t\t\t  -----------------------------------------------\n" << endl;


    cout << "\n\t\t\t\t+---------- \033[1;31mITEM #1\033[0m ---------+ \t       +--------- \033[1;31mITEM #2\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|        Blonde Latte        |\t       |       Blonde Latte w/      |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 145.00\033[0m     |\t       |     Price : \033[1;32mPhp 235.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;31mITEM #3\033[0m ---------+ \t       +--------- \033[1;31mITEM #4\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Caramel Macchiato      |\t       |    Caramel Macchiato w/    |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 170.00\033[0m     |\t       |     Price : \033[1;32mPhp 260.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;31mITEM #5\033[0m ---------+ \t       +--------- \033[1;31mITEM #6\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|        Skinny Mocha        |\t       |        Skinny Mocha w/     |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 160.00\033[0m     |\t       |     Price : \033[1;32mPhp 250.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;31mITEM #7\033[0m ---------+ \t       +--------- \033[1;31mITEM #8\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|      Caffe Americano       |\t       |      Caffe Americano w/    |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 175.00\033[0m     |\t       |     Price : \033[1;32mPhp 265.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;31mITEM #9\033[0m ---------+ \t       +--------- \033[1;31mITEM #10\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|       Irish Coffee         |\t       |       Irish Coffee w/      |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 120.00\033[0m     |\t       |     Price : \033[1;32mPhp 210.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;

    cout << "\n\t\t\t\t+--------- \033[1;31mITEM #11\033[0m ---------+ \t       +-------- \033[1;31mITEM #12\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     White Hot Chocolate    |\t       |    White Hot Chocolate w/  |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 155.00\033[0m     |\t       |     Price : \033[1;32mPhp 245.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+--------- \033[1;31mITEM #13\033[0m ---------+ \t       +-------- \033[1;31mITEM #14\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|       Black Tea Latte      |\t       |      Black Tea Latte w/    |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 135.00\033[0m     |\t       |     Price : \033[1;32mPhp 225.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+\n" << endl;



//MENU
    cout << "\t\t\t\t" << icon[1] << " From the list Item What do you like? ";
    cin >> ordercode;


    if (ordercode == 2 || ordercode == 4 || ordercode == 6 || ordercode == 8 ||
        ordercode == 10 || ordercode == 12 || ordercode == 14) {
        cout << "\n\n\t\t\t\t\t      "  <<"Choices of Dessert [Select your Dessert] "
              << "\n\n";
        cout << "\t\t\t\t\t\t+ --------------------------------- +\n";
        cout << "\t\t\t\t\t\t|              \033[1;31mDESSERT\033[0m " << icon[3] << "            |" << endl;
        cout << "\t\t\t\t\t\t|                                   |" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[1]\033[0m \033[1;36mHoney cake\033[0m....................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[2]\033[0m \033[1;36mApple Pie\033[0m.....................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[3]\033[0m \033[1;36mStrawberry Tart\033[0m...............|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[4]\033[0m \033[1;36mMuffin\033[0m........................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[5]\033[0m \033[1;36mCreme Caramel\033[0m.................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[6]\033[0m \033[1;36mChocolate cake\033[0m................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[7]\033[0m \033[1;36mTiramisu\033[0m......................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[8]\033[0m \033[1;36mCinnamon rolls\033[0m................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[9]\033[0m \033[1;36mCarrot Cake\033[0m...................|" << endl;
        cout << "\t\t\t\t\t\t|\033[1;31m [10]\033[0m \033[1;36mCheesecakes\033[0m..................|" << endl;
        cout << "\t\t\t\t\t\t+ --------------------------------- +\n" << endl;


        cout << "\t\t\t\t" << icon[1] << " Please Choose Dessert: ";
        cin >> drinks;


        switch (drinks) {
            case 1:
                totaldrinks[i] = "Honey cake ";
                break;
            case 2:
                totaldrinks[i] = "Apple Pie ";
                break;
            case 3:
                totaldrinks[i] = "Strawberry Tart  ";
                break;
            case 4:
                totaldrinks[i] = "Muffin ";
                break;
            case 5:
                totaldrinks[i] = "Creme Caramel ";
                break;
			case 6:
                totaldrinks[i] = "Chocolate cake ";
                break;
			case 7:
                totaldrinks[i] = "Tiramisu ";
                break;
			case 8:
                totaldrinks[i] = "Cinnamon rolls ";
                break;
			case 9:
                totaldrinks[i] = "Carrot Cake ";
                break;
			case 10:
                totaldrinks[i] = "Cheesecakes ";
                break;    
            default:
                totaldrinks[i] = "   --    ";
        }

    } else if (ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 7 ||
               ordercode == 9 || ordercode == 11 || ordercode == 13) {
        totaldrinks[i] = "   --    ";
    }else {
    	cout<<"\n\t\t\t\t\tinvalid input!\n";
	
      	goto main;
        		
        	
	}

//Quantity
    cout << "\n\t\t\t\t"  << icon[1] << " Please Enter Quantity(Item): ";
    cin >> quantity;


    switch (ordercode) {
        case 1:

            allorder[i] = "         Blonde Latte ";
            price[i] = " Php 145.00  ";
            totalquantity[i] = quantity;
            totalorder[i] = 145 * quantity;
            break;

        case 2:

            allorder[i] = "         Blonde Latte w/ Dessert of your choice";
            price[i] = " Php 235.00  ";
            totalquantity[i] = quantity;
            totalorder[i] = 235 * quantity;
            break;

        case 3:

            allorder[i] = "     Caramel Macchiato ";
            price[i] = " Php 170.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 170 * quantity;
            break;

        case 4:

            allorder[i] = "         Caramel Macchiato w/ Dessert of your choice";
            price[i] = " Php 260.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 260 * quantity;
            break;

        case 5:

            allorder[i] = "     Skinny Mocha ";
            price[i] = " Php 160.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 160 * quantity;
            break;

        case 6:

            allorder[i] = "         Skinny Mocha w/ Dessert of your choice";
            price[i] = " Php 250.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 250 * quantity;
            break;

        case 7:

            allorder[i] = "     Caffe Americano ";
            price[i] = " Php 175.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 175 * quantity;
            break;

        case 8:

            allorder[i] = "         Caffe Americano w/ Dessert of your choice";
            price[i] = " Php 265.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 265 * quantity;
            break;

        case 9:

            allorder[i] = "     Irish Coffee ";
            price[i] = " Php 120.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 120 * quantity;
            break;

        case 10:

            allorder[i] = "         Irish Coffee w/ Dessert of your choice";
            price[i] = " Php 210.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 210 * quantity;
            break;

        case 11:

            allorder[i] = "     White Hot Chocolate ";
            price[i] = " Php 155.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 155 * quantity;
            break;

        case 12:

            allorder[i] = "         White Hot Chocolate w/ Dessert of your choice";
            price[i] = " Php 245.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 245 * quantity;
            break;

        case 13:

            allorder[i] = "     Black Tea Latte ";
            price[i] = " Php 135.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 135 * quantity;
            break;

        case 14:

            allorder[i] = "         Black Tea Latte w/ Dessert of your choice";
            price[i] = " Php 225.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 225 * quantity;
            break;
        default: 
        	break;
       
        
    }
//	cout << "\nHow many"<<allorder [i]<<"\n";
            }

//COLD COFFEE
            if (choice == 2) {

    cout << "\t\t\t\t\t  -----------------------------------------------" << endl;
    cout << "\t\t\t\t\t  |              \033[1;34mICED COFFEEE\033[0m   -  \033[1;32mMENU\033[0m          |" << endl;
    cout << "\t\t\t\t\t  -----------------------------------------------\n" << endl;


    cout << "\n\t\t\t\t+---------- \033[1;34mITEM #1\033[0m ---------+ \t       +--------- \033[1;34mITEM #2\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|      Nitro Cold Brew       |\t       |     Nitro Cold Brew w/     |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 140.00\033[0m     |\t       |     Price : \033[1;32mPhp 230.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;34mITEM #3\033[0m ---------+ \t       +--------- \033[1;34mITEM #4\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|        Iced Latte          |\t       |         Iced Latte w/      |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 180.00\033[0m     |\t       |     Price : \033[1;32mPhp 270.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;34mITEM #5\033[0m ---------+ \t       +--------- \033[1;34mITEM #6\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|        Frappuccino         |\t       |        Frappuccino w/      |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 180.00\033[0m     |\t       |     Price : \033[1;32mPhp 270.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;34mITEM #7\033[0m ---------+ \t       +--------- \033[1;34mITEM #8\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|       Iced Coffee          |\t       |       Iced Coffee w/       |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 160.00\033[0m     |\t       |     Price : \033[1;32mPhp 250.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;34mITEM #9\033[0m ---------+ \t       +--------- \033[1;34mITEM #10\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Creamy Iced Coffee     |\t       |    Creamy Iced Coffee w/   |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 150.00\033[0m     |\t       |     Price : \033[1;32mPhp 240.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;

    cout << "\n\t\t\t\t+--------- \033[1;34mITEM #11\033[0m ---------+ \t       +-------- \033[1;34mITEM #12\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|        Cafe Affogato       |\t       |       Cafe Affogato w/     |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 155.00\033[0m     |\t       |     Price : \033[1;32mPhp 245.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+--------- \033[1;34mITEM #13\033[0m ---------+ \t       +-------- \033[1;34mITEM #14\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|   Iced Caramel Macchiato   |\t       |  Iced Caramel Macchiato w/ |" << endl;
    cout << "\t\t\t\t|           Solo             |\t       |   Dessert of your choices  |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 135.00\033[0m     |\t       |     Price : \033[1;32mPhp 225.00\033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+\n" << endl;
//MENU
    cout << "\t\t\t\t" << icon[1] << " From the list Item What do you like? ";
                cin >> ordercode;
                
			if (ordercode == 2 || ordercode == 4 || ordercode == 6 || ordercode == 8 ||
                    ordercode == 10 || ordercode == 12 || ordercode == 14) {
        cout << "\n\n\t\t\t\t\t     "  <<"Choices of Dessert [Select your Dessert] "
             << "\n\n";
         cout << "\t\t\t\t\t\t+ --------------------------------- +\n";
        cout << "\t\t\t\t\t\t|              \033[1;31mDESSERT\033[0m " << icon[3] << "            |" << endl;
        cout << "\t\t\t\t\t\t|                                   |" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[1]\033[0m \033[1;36mHoney cake\033[0m....................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[2]\033[0m \033[1;36mApple Pie\033[0m.....................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[3]\033[0m \033[1;36mStrawberry Tart\033[0m...............|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[4]\033[0m \033[1;36mMuffin\033[0m........................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[5]\033[0m \033[1;36mCreme Caramel\033[0m.................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[6]\033[0m \033[1;36mChocolate cake\033[0m................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[7]\033[0m \033[1;36mTiramisu\033[0m......................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[8]\033[0m \033[1;36mCinnamon rolls\033[0m................|" << endl;
        cout << "\t\t\t\t\t\t| \033[1;31m[9]\033[0m \033[1;36mCarrot Cake\033[0m...................|" << endl;
        cout << "\t\t\t\t\t\t|\033[1;31m [10]\033[0m \033[1;36mCheesecakes\033[0m..................|" << endl;
        cout << "\t\t\t\t\t\t+ --------------------------------- +\n" << endl;


        cout << "\t\t\t\t" << icon[1] << " Please Choose Dessert: ";
        cin >> drinks;


        switch (drinks) {
            case 1:
                totaldrinks[i] = "Honey cake";
                break;
            case 2:
                totaldrinks[i] = "Apple Pie";
                break;
            case 3:
                totaldrinks[i] = "Strawberry Tart";
                break;
            case 4:
                totaldrinks[i] = "Muffin";
                break;
            case 5:
                totaldrinks[i] = "Creme Caramel";
                break;
			case 6:
                totaldrinks[i] = "Chocolate cake";
                break;
			case 7:
                totaldrinks[i] = "Tiramisu";
                break;
			case 8:
                totaldrinks[i] = "Cinnamon rolls";
                break;
			case 9:
                totaldrinks[i] = "Carrot Cake";
                break;
			case 10:
                totaldrinks[i] = "Cheesecakes";
                break;    
            default:
                totaldrinks[i] = "   --    ";
        }

    } else if (ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 7 ||
               ordercode == 9 || ordercode == 11 || ordercode == 13) {
        totaldrinks[i] = "   --    ";
    }else {
    	cout<<"\n\t\t\t\t\tinvalid input!\n";
		goto main;
	}

//Quantity
    cout << "\n\t\t\t\t" << icon[1] << " Please Enter Quantity(Item): ";
    cin >> quantity;


    switch (ordercode) {
        case 1:

            allorder[i] = "       Nitro Cold Brew   ";
            price[i] = " Php 140.00  ";
            totalquantity[i] = quantity;
            totalorder[i] = 140 * quantity;
            break;

        case 2:

            allorder[i] = "       Nitro Cold Brew w/ Dessert of your choice";
            price[i] = " Php 230.00  ";
            totalquantity[i] = quantity;
            totalorder[i] = 230 * quantity;
            break;

        case 3:

            allorder[i] = "       Iced Latte   ";
            price[i] = " Php 180.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 180 * quantity;
            break;

        case 4:

            allorder[i] = "       Iced Latte w/ Dessert of your choice";
            price[i] = " Php 270.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 270 * quantity;
            break;

        case 5:

            allorder[i] = "       Frappuccino   ";
            price[i] = " Php 180.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 180 * quantity;
            break;

        case 6:

            allorder[i] = "       Frappuccino w/ Dessert of your choice";
            price[i] = " Php 270.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 270 * quantity;
            break;

        case 7:

            allorder[i] = "       Iced Coffee   ";
            price[i] = " Php 160.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 160 * quantity;
            break;

        case 8:

            allorder[i] = "       Iced Coffee w/ Dessert of your choice";
            price[i] = " Php 250.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 250 * quantity;
            break;

        case 9:

            allorder[i] = "       Creamy Iced Coffee   ";
            price[i] = " Php 150.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 150 * quantity;
            break;

        case 10:

            allorder[i] = "       Creamy Iced Coffee w/ Dessert of your choice";
            price[i] = " Php 240.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 240 * quantity;
            break;

        case 11:

            allorder[i] = "       Cafe Affogato   ";
            price[i] = " Php 155.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 155 * quantity;
            break;

        case 12:

            allorder[i] = "         Cafe Affogato w/ Dessert of your choice";
            price[i] = " Php 245.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 245 * quantity;
            break;

        case 13:

            allorder[i] = "       Iced Caramel Macchiato   ";
            price[i] = " Php 135.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 135 * quantity;
            break;

        case 14:

            allorder[i] = "       Iced Caramel Macchiato w/ Dessert of your choice";
            price[i] = " Php 225.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 225 * quantity;
            break;
            
        default: 
        	break;
       
        
    }

}
            
//DESSERT

    if (choice == 3) 
			
	{

    cout << "\t\t\t\t\t  -----------------------------------------------" << endl;
    cout << "\t\t\t\t\t  |              \033[1;36mDESSERT\033[0m   -  \033[1;32mMENU\033[0m          |" << endl;
    cout << "\t\t\t\t\t  -----------------------------------------------\n" << endl;


    cout << "\n\t\t\t\t+---------- \033[1;36mITEM #1\033[0m ---------+ \t       +--------- \033[1;36mITEM #2\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|         \033[1;33mHoney cake\033[0m         |\t       |          \033[1;33mApple Pie\033[0m         |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 99.00 \033[0m     |\t       |     Price : \033[1;32mPhp 99.00 \033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;36mITEM #3\033[0m ---------+ \t       +--------- \033[1;36mITEM #4\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|       \033[1;33mStrawberry Tart\033[0m      |\t       |           \033[1;33mMuffin\033[0m           |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 99.00 \033[0m     |\t       |     Price : \033[1;32mPhp 99.00 \033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;36mITEM #5\033[0m ---------+ \t       +--------- \033[1;36mITEM #6\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|        \033[1;33mCreme Caramel\033[0m       |\t       |        \033[1;33mChocolate cake\033[0m      |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 99.00 \033[0m     |\t       |     Price : \033[1;32mPhp 99.00 \033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;36mITEM #7\033[0m ---------+ \t       +--------- \033[1;36mITEM #8\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|         \033[1;33mTiramisu\033[0m           |\t       |       \033[1;33mCinnamon rolls\033[0m       |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 99.00 \033[0m     |\t       |     Price : \033[1;32mPhp 99.00 \033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;
    cout << "\n\t\t\t\t+---------- \033[1;36mITEM #9\033[0m ---------+ \t       +--------- \033[1;36mITEM #10\033[0m ----------+"
         << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|         \033[1;33mCarrot Cake\033[0m        |\t       |          \033[1;33mCheesecakes\033[0m       |" << endl;
    cout << "\t\t\t\t|                            |\t       |                            |" << endl;
    cout << "\t\t\t\t|     Price : \033[1;32mPhp 99.00 \033[0m     |\t       |     Price : \033[1;32mPhp 99.00 \033[0m     |" << endl;
    cout << "\t\t\t\t+----------------------------+\t       +----------------------------+" << endl;

    cout << "\n\t\t\t\t" << icon[1] << " From the list Item What do you like? ";
    cin >> ordercode;

    if (ordercode == 1 || ordercode == 3 || ordercode == 2 || ordercode == 4 ||
        ordercode == 5 || ordercode == 6 || ordercode == 7 || ordercode == 8 || ordercode == 9|| ordercode == 10) {
        totaldrinks[i] = "   --    ";
    }else {
    	cout<<"\n\t\t\t\t\tinvalid input!\n";
		goto main;
	}

    cout << "\t\t\t\t" << icon[1] << " Please Enter Quantity: ";
    cin >> quantity;

    switch (ordercode) {
        case 1:
            allorder[i] = "         Honey cake ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 2:
            allorder[i] = "         Apple Pie ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 3:
            allorder[i] = "         Strawberry Tart ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 4:
            allorder[i] = "         Muffin ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 5:
            allorder[i] = "         Creme Caramel ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 6:
            allorder[i] = "         Chocolate cake ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 7:
            allorder[i] = "         Tiramisu ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 8: 
            allorder[i] = "         Cinnamon rolls ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 9:
            allorder[i] = "         Carrot Cake ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
        case 10:
            allorder[i] = "         Cheesecakes ";
            price[i] = " Php 99.00 ";
            totalquantity[i] = quantity;
            totalorder[i] = 99 * quantity;
            break;
	 	default: 
        	break;
       

    }

        }
            
    if(choice == 0){
            	
		main();
	}
			     
//ORDER AGAIN
        cout << "\n\n\t\t\t\tORDER AGAIN ? [1] Yes [0] No [3] Cancel Order: ";
        cin >> yesno;
	if (yesno == 3) {
            
           	main();
        }
        
    }  while ((yesno == 1) || (yesno != 0));
    

// Loading
    cout << "\n\n";

    cout << "\t\t\t\tGenerating your Bill ";
    

    for (a = 1; a <= 2; a++) {
        Sleep(900);
        cout << "...";
    }

	system("cls");
    cout << "\n\n\n";

// Receipt // Sarah and Darlyn
	cout << "\t\t\t\t                     BEAN THERE, DRANK THAT CAFE " << icon[0] << "\n";
    cout << "\t\t\t\t                            Mandaluyong City \n";
    cout << "\t\t\t\t                            Boni Avenue 1550\n";
    cout << "\t\t\t\t                 +++++++++++++++++++++++++++++++++++++++\n\n\n";	

// Time and Date
    time_t now;
	
    struct tm *ti;
    time (&now);
	ti = localtime(&now);


    cout << "\t\t\t  Date: " <<  1+ti->tm_mon << " / ";
    cout << ti->tm_mday << " / ";
    cout << 1900 + ti->tm_year << "                                      ";

    cout << "Time: " << ti->tm_hour << ":";
    cout << 1 + ti->tm_min << ":";
    cout << 1 + ti->tm_sec << endl;


    //	char *l = " ------------------------------------------------------------------------------\n";
    cout << "\n\n\n\t\t\t  You have ordered: " << "\t\t\t\t   Transaction # " << again << "\n";
    cout <<"\t\t\t" <<l;
    cout << "\t\t\t              ITEM\t        |  DESSERT  | UNIT PRICE |  QUANTITY  | AMOUNT\n";
    cout <<"\t\t\t" <<l;


    for (i = 1; i <= limit; i++) {
        cout <<"\t\t" << allorder[i] << "| " << totaldrinks[i] << "| " << price[i] << "| " << totalquantity[i]
             << " | P " << totalorder[i] << "\n";
  	         
    }
    
    ofstream rec("reciept.txt", ios::app); // Open file in append mode

    // Check if the file is opened successfully
    if (!rec) {
        cout << "Failed to open the file." << endl;
        
    }

    // Iterate over the array elements and write them to the file
    for (i = 1; i <= limit; i++) {
    rec
	
	 <<"\t" << allorder[i] << "  | " << totaldrinks[i] << "| " << price[i] << "| " << totalquantity[i]
     << " |  P " << totalorder[i] << "\n\n";
  	
        // ... write other array elements to the file
    }

    rec.close(); // Close the file
    
    

//    
	cout << "\n\n\n";

//TOTAL
    for (i = 1; i <= limit; i++) 
	{

        total = total + totalorder[i];
    }
    
//PAY BILL
    do {
 
        cout << "\t\t\t                                                           Total: P " << total << "\n";
        cout << "\t\t\t  Enter Received cash : ";
        cin >> pay;


        if (pay < total) {
            cout <<"\t\t\t"  << l << "\n";
            cout <<"\t\t\t                       Error Insufficient Amount -_- ";
            cout <<"\t\t\t"<< l << "\n" ;
        } else {

            change = pay - total;
            
            cout << "\t\t\t  Changed Due         : " << change << "\n";
            cout << "\t\t\t  Items Purchased     : " << itempurchase << endl;
            vat = total * 0.12;
            cout << "\t\t\t  12% VAT Included    : " << vat;     
            cout <<"\n\n\n";
 			cout <<"\t\t\t                    Thank you, and enjoy your coffee.\n";
            
     ofstream rec2("reciept.txt", ios::app);   
	 rec2 
 
	 <<"\t\t"<< l << "\n"
	 <<"\t\t\t  Date: " << 1+ ti->tm_mon << " / "<<ti->tm_mday << " / "<<1900 + ti->tm_year << "                                   " <<"Time: " <<  ti->tm_hour << ":"<< ti->tm_min << ":"<< ti->tm_sec << endl
	 
	 <<"\t\t\t  Cash Received       : " << pay << "\n"
	 <<"\t\t\t  Changed Due         : " << change << "\n"
	 <<"\t\t\t  Items Purchased     : " << itempurchase << endl
	 <<"\t\t\t  12% VAT Included    : " << vat << "\n"
	 <<"\t\t\t                                                         Total: P " << total << "\n"
	 <<"\t\t"<< l << "\n"
	 <<"\t\t                     BEAN THERE, DRANK THAT CAFE " << icon[0] << "\n"
	 <<"\t\t                            Mandaluyong City \n"
	 <<"\t\t                            Boni Avenue 1550\n"
	 <<"\t\t                 +++++++++++++++++++++++++++++++++++++++\n\n\n"
	 <<"\n"
	 <<"\t\t                   This serves as your Official Receipt.\n"
	 <<"\t\t                    Thank you, and enjoy your coffee.\n"
	 << "\n\n"
	 <<"\t\t*******************************************************************************************"
	 << "\n\n";	
	    
        }
        i;;

    } while (pay < total);


    cout << "\n\n\t\t\t\tNew Transaction? [1] yes [0] no? : ";
    cin >> again;

    if (again == 1) {
        system("cls");
		 main();
    }

    if (again == 0) {
    	
    
      
        cout<<"\n\t\t\t\t\tThank You & Come again!\n";
	exit(EXIT_SUCCESS);	
		
		 
    }
        }

        else
        {
    		system("cls");
            cout << "\n\t\t\t\t\t-----------------------------------------------" << endl;
            cout << "\t\t\t\t\t|                 \033[1;31mLOGIN Error\033[0m                   |" << endl;
            cout << "\t\t\t\t\t|                                               |" << endl;
            cout << "\t\t\t\t\t|    Please check your username and password    |" << endl;
            cout << "\t\t\t\t\t|                                               |" << endl;
            cout << "\t\t\t\t\t-----------------------------------------------" << endl;
            system ("pause");
            system("cls");
            main();
        }
}
void registr() //Yurie and Elaine
{
        
        string reguser,regpass,ru,rp;
        system("cls");
    cout  << "\t\t\t\t\t==========\033[1;35mBEAN THERE, DRANK THAT CAFE\033[0m============" << endl;
    cout  << "\t\t\t\t\t|       \033[1;35mWhere one sip feels like a warm hug\033[0m     |" << endl;
    cout  << "\t\t\t\t\t|                                               |" << endl;
    cout  << "\t\t\t\t\t|                 \033[1;32mSign up now!\033[0m                  |" << endl;
    cout  << "\t\t\t\t\t|                                               |" << endl;
    cout  << "\t\t\t\t\t=================\033[1;35mW-E-L-C-O-M-E\033[0m===================" << endl;
    cout  << "\t\t\t\t\t                                                 " << endl;
    cout  << "\t\t\t\t\tEnter Username :";
        cin>>reguser;
    cout  << "\t\t\t\t\tEnter Password :";
        cin>>regpass;
        
        ofstream reg("Database.txt");
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\t\t\t\t\t\tRegistration Sucessful\n";
        
        main(); 
}

void forgot() // Mary and Monica
{
        int ch;
        system("cls");
        cout<<"\t\t\t\t\tForgotten ? We're here for help\n";
        cout << "\n\t\t\t\t\t-----------------------------------------------" << endl;
        cout << "\t\t\t\t\t|     \033[1;35mWelcome To BEAN THERE, DRANK THAT CAFE\033[0m      |" << endl;
        cout << "\t\t\t\t\t|                                                 |" << endl;
		cout << "\t\t\t\t\t|      \033[1;33m[1] Search your id by username\033[0m             |" << endl;
		cout << "\t\t\t\t\t|      \033[1;33m[2] Search your id by password\033[0m             |" << endl;
		cout << "\t\t\t\t\t|      \033[1;33m[3] Main menu\033[0m                              |" << endl;
		cout << "\t\t\t\t\t|                                                 |";
        cout << "\n\t\t\t\t\t---------------------------------------------------" << endl;
        cout<<"\t\t\t\t\tEnter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                    int count=0;
                    string searchuser,su,sp;
                    cout<<"\n\t\t\t\t\tEnter your remembered username :";
                    cin>>searchuser;
                    
                    ifstream searchu("database.txt");
                    while(searchu>>su>>sp)
                    {
                        if(su==searchuser)
                        {
                                count=1;
                        }
                    }
                    searchu.close();
                    if(count==1)
                    {
                        cout<<"\n\n\t\t\t\t\tHurray, account found\n";
                        cout<<"\n\t\t\t\t\tYour password is "<< "\033[1;32m" <<sp <<"\033[0m ";
                        cin.get();
                        cin.get();
                        system("cls");
                        main();
                    }
                    else
                    {
                        cout<<"\n\t\t\t\t\tSorry, Your userID is not found in our database\n";
                        cout<<"\n\t\t\t\t\tPlease kindly contact your system administrator for more details \n";
                        cin.get();
                        cin.get();
                        main();
                    }
                    break;
                }
                case 2:
                {
                    int count=0;
                    string searchpass,su2,sp2;
                    cout<<"\n\t\t\t\t\tEnter the remembered password :";
                    cin>>searchpass;
                    
                    ifstream searchp("database.txt");
                    while(searchp>>su2>>sp2)
                    {
                        if(sp2==searchpass)
                        {
                                count=1;
                        }       
                    }
                    searchp.close();
                    if(count==1)
                    {
                        cout<<"\n\t\t\t\t\tYour password is found in the database \n";
                        cout<<"\n\t\t\t\t\tYour Id is : "<<"\033[1;32m" <<su2 <<"\033[0m " ;
                        cin.get();
                        cin.get();
                        system("cls");
                        main();
                    }
                    else
                    {
                        cout<<"\t\t\t\t\tSorry, We cannot found your password in our database \n";
                        cout<<"\n\t\t\t\t\tkindly contact your administrator for more information\n";
                        cin.get();
                        cin.get();
                        main();
                    }
            
                    break;
                }   
                case 3:
                {
                    cin.get();
                    main();
                }
                default:
                    cout<<"\t\t\t\t\tSorry, You entered wrong choice. Kindly try again"<<endl;
                    forgot();
        }
}


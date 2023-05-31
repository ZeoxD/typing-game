#define CLEAR_SCREEN cout<<"\x1b[2J \x1b[1;1H"<<flush;
#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||

string about_select(int num) {
    string about9  = " This typing Game project is ";
    string about10 = " developed in C++ language.  ";
    string about11 = " You can obtain your typing  ";
    string about12 = "speed by choosing the levels.";
    string about13 = "  This project is developed  ";
    string about14 = "    by Divyanshu Tripathi    ";

    switch(num) {

    case 9: return about9;
            break;
    case 10: return about10;
            break;
    case 11: return about11;
            break;
    case 12: return about12;
            break;
    case 13: return about13;
            break;
    case 14: return about14;
            break;

    return "";
    }
}

int about()
{
        CLEAR_SCREEN char ch;
        int mid_offset=5;

        CYAN_FG ascii_art("        TYPING  GAME"); cout<<endl;

        for(int i = 0; i < WINDOW_HEIGHT; i++)
        {
                for (int j =0; j < WINDOW_WIDTH; j++)
                {
                    if (i == 0 OR j == 0 OR i == (WINDOW_HEIGHT-1) OR j == (WINDOW_WIDTH-1) OR i==1 OR j ==1 OR j==2 OR i == (WINDOW_HEIGHT-2) OR j == (WINDOW_WIDTH-2) OR j == (WINDOW_WIDTH-3) )
                    {
                        RED_BG BLUE_FG printf("|");
                        BLACK_BG

                    }

                    else if( (i>=9 AND i<=14) AND j==(WINDOW_WIDTH/3) )
                    {
                        BLUE_BG cout<<"  ";
                        WHITE_BG RED_FG cout<<"    ";
                        cout<<about_select(i); cout<<"    ";
                        BLACK_FG BLUE_BG cout<<"  ";
                        BLACK_BG
                    }
                    else
                    {

                        if( (i>=9 AND i<=14) /*AND ( j>=(WINDOW_WIDTH/3) AND j<=(WINDOW_WIDTH/3) )*/ )
                        {
                            cout<<"";
                        }
                        else cout<<" ";
                    }

                }
                cout<<endl;
        }
        cin>>ch;
    return 0;
}

int exit()
{
    CLEAR_SCREEN
    GREEN_FG
    return 1;
}


#define CLEAR_SCREEN cout<<"\x1b[2J \x1b[1;1H"<<flush;
#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||

int about()
{
        CLEAR_SCREEN char ch;
        string about9 = "abcdefghijklmnopqrstuvwxyz";
        string about10 = "abcdefghijklmnopqrstuvwxyz";
        string about11 = "abcdefghijklmnopqrstuvwxyz";
        string about12 = "abcdefghijklmnopqrstuvwxyz";
        string about13 = "abcdefghijklmnopqrstuvwxyz";
        string about14 = "abcdefghijklmnopqrstuvwxyz";
        int mid_offset=5;

        CYAN_FG ascii_art("        TYPING  GAME"); cout<<endl;

        for(int i = 0; i < WINDOW_HEIGHT; i++)
        {
                for (int j =0; j < WINDOW_WIDTH; j++)
                {
                    if (i == 0 OR j == 0 OR i == (WINDOW_HEIGHT-1) OR j == (WINDOW_WIDTH-1) OR i==1 OR j ==1 OR j==2 OR i == (WINDOW_HEIGHT-2) OR j == (WINDOW_WIDTH-2) OR j == (WINDOW_WIDTH-3) )
                    {
                        RED_BG BLUE_FG printf("|"); BLACK_BG

                    }

                    else if( (i>=9 AND i<=14) AND j==(WINDOW_WIDTH/2)-5 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   "; cout<<about<<i;   cout<<"    "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    /*else if( i==10 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   NORMAL  "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==11 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   HARD    "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }*/

                    else
                    {

                        if( (i>=9 AND i<=14) AND ( j>=(WINDOW_WIDTH/2)-mid_offset AND j<=(WINDOW_WIDTH/2)+mid_offset ) )
                        {
                            cout<<"";
                        }

                        /*else if( i==10 AND ( j>=(WINDOW_WIDTH/2)-7 AND j<=(WINDOW_WIDTH/2)+7 ) )
                        {
                            cout<<"";
                        }
                        else if( i==11 AND ( j>=(WINDOW_WIDTH/2)-7 AND j<=(WINDOW_WIDTH/2)+7 ) )
                        {
                            cout<<"";
                        }*/

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


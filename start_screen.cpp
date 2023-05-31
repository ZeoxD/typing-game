#define CLEAR_SCREEN cout<<"\x1b[2J \x1b[1;1H"<<flush;
#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||

int start_menu()
{
        CLEAR_SCREEN
        int s_pass;
        CYAN_FG ascii_art("        TYPING  GAME"); cout<<endl;

        for(int i = 0; i < WINDOW_HEIGHT; i++)
        {
                for (int j =0; j < WINDOW_WIDTH; j++)
                {
                    if (i == 0 OR j == 0 OR i == (WINDOW_HEIGHT-1) OR j == (WINDOW_WIDTH-1) OR i==1 OR j ==1 OR j==2 OR i == (WINDOW_HEIGHT-2) OR j == (WINDOW_WIDTH-2) OR j == (WINDOW_WIDTH-3) )
                    {
                        RED_BG BLUE_FG printf("|"); BLACK_BG

                    }

                    else if( i==9 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"  1.EASY   "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==11 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"  2.NORMAL "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==13 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"  3.HARD   "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else
                    {

                        if( i==9 AND ( j>=(WINDOW_WIDTH/2)-7 AND j<=(WINDOW_WIDTH/2)+7 ) )
                        {
                            cout<<"";
                        }
                        else if( i==11 AND ( j>=(WINDOW_WIDTH/2)-7 AND j<=(WINDOW_WIDTH/2)+7 ) )
                        {
                            cout<<"";
                        }
                        else if( i==13 AND ( j>=(WINDOW_WIDTH/2)-7 AND j<=(WINDOW_WIDTH/2)+7 ) )
                        {
                            cout<<"";
                        }

                        else cout<<" ";
                    }

                }
                cout<<endl;
        }

        cin>>s_pass;
    return s_pass;
}

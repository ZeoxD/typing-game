#include<iostream>
#include<time.h>
#include<string>
#include<math.h>
#include"asciiart.h"
#include"wincolor.h"

#define CLEAR_SCREEN cout<<"\x1b[2J \x1b[1;1H"<<flush;
#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||


using namespace std;

int main_menu()
{
    CLEAR_SCREEN
    int pass;
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
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   START   "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==11 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   ABOUT   "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==13 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   EXIT    "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
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

        cin>>pass;
    return pass;

}

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
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   EASY    "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==11 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   NORMAL  "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
                    }

                    else if( i==13 AND j==(WINDOW_WIDTH/2)-4 )
                    {
                        BLUE_BG cout<<"  "; WHITE_BG RED_FG cout<<"   HARD    "; BLACK_FG BLUE_BG cout<<"  "; BLACK_BG
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

void typing_test1()
{

    CLEAR_SCREEN
    time_t t1,t2;
    t1 = time(NULL); cout<<"\a";

    WHITE_BG GREEN_FG
    GREEN_BG cout<<"\n\n\n\n\n\n\n\n\t\t\t\t  "; WHITE_BG cout<<"                                                "; GREEN_BG cout<<"  ";
    GREEN_BG cout<<"\n\t\t\t\t  "; WHITE_BG CYAN_FG cout<<"  the quick brown fox jumped over the lazy dog  "; GREEN_BG cout<<"  "<<endl;
    GREEN_BG cout<<"\t\t\t\t  "; WHITE_BG cout<<"                                                "; GREEN_BG cout<<"  ";

    BLACK_BG WHITE_FG
    cout<<"\n\n\t\t\t\tStart Typing..."<<endl;
    string ttest;
    cout<<endl<<"\t\t\t\t";
    cin >> ws;
    getline(cin, ttest);

    t2 = time(NULL); cout<<"\a";

    int wc = ttest.length();
    cout<<"\n\n\n";

    int seconds;
    seconds = t2 - t1;
    float min = (seconds / 60.0);
    wc = wc/5;
    float wpm = (wc/min);
    wpm = ceil(wpm);

    cout<<endl<<"\t\t\t\t"<<wpm<<" WPM is your typing speed"<<"\n\n\n\n\n\n\n\n\n";

    char tt1;
    cin>>tt1;

}

void typing_test2()
{
    CLEAR_SCREEN
    time_t t1,t2;
    t1 = time(NULL); cout<<"\a";

    WHITE_BG GREEN_FG
    GREEN_BG cout<<"\n\n\n\n\n\n\n\n\t\t\t\t  "; WHITE_BG cout<<"                                                       "; GREEN_BG cout<<"  ";
    GREEN_BG cout<<"\n\t\t\t\t  "; WHITE_BG CYAN_FG cout<<"  books are the quietest and most constant of friends  "; GREEN_BG cout<<"  "<<endl;
    GREEN_BG cout<<"\t\t\t\t  "; WHITE_BG cout<<"                                                       "; GREEN_BG cout<<"  ";

    BLACK_BG WHITE_FG
    cout<<"\n\n\t\t\t\tStart Typing..."<<endl;
    string ttest;
    cout<<endl<<"\t\t\t\t";
    cin >> ws;
    getline(cin, ttest);

    t2 = time(NULL); cout<<"\a";

    int wc = ttest.length();
    cout<<"\n\n\n";

    int seconds;
    seconds = t2 - t1;
    float min = (seconds / 60.0);
    wc = wc/5;
    float wpm = (wc/min);
    wpm = ceil(wpm);

    cout<<endl<<"\t\t\t\t"<<wpm<<" WPM is your typing speed"<<"\n\n\n\n\n\n\n\n\n";

    char tt2;
    cin>>tt2;

}

void typing_test3()
{
    CLEAR_SCREEN
    time_t t1,t2;
    t1 = time(NULL); cout<<"\a";

    WHITE_BG GREEN_FG
    GREEN_BG cout<<"\n\n\n\n\n\n\n\n\t\t\t\t  "; WHITE_BG cout<<"                                                       "; GREEN_BG cout<<"  ";
    GREEN_BG cout<<"\n\t\t\t\t  "; WHITE_BG CYAN_FG cout<<"  fully autonomous cars exist and they are the future  "; GREEN_BG cout<<"  "<<endl;
    GREEN_BG cout<<"\t\t\t\t  "; WHITE_BG cout<<"                                                       "; GREEN_BG cout<<"  ";

    BLACK_BG WHITE_FG
    cout<<"\n\n\t\t\t\tStart Typing..."<<endl;
    string ttest;
    cout<<endl<<"\t\t\t\t";
    cin >> ws;
    getline(cin, ttest);

    t2 = time(NULL); cout<<"\a";

    int wc = ttest.length();
    cout<<"\n\n\n";

    int seconds;
    seconds = t2 - t1;
    float min = (seconds / 60.0);
    wc = wc/5;
    float wpm = (wc/min);
    wpm = ceil(wpm);

    cout<<endl<<"\t\t\t\t"<<wpm<<" WPM is your typing speed"<<"\n\n\n\n\n\n\n\n\n";

    char tt3;
    cin>>tt3;


}

int main()
{
    int pass_value, s_pass_value;
    bool exit_value = 0;
    winc_main();

    do{
        pass_value = main_menu();

        switch(pass_value)
        {
            case 1: s_pass_value = start_menu();
                    switch(s_pass_value)
                    {
                        case 1: typing_test1();
                                break;

                        case 2: typing_test2();
                                break;

                        case 3: typing_test3();
                                break;

                    }

                    break;

            case 2: about();
                    break;

            case 3: exit_value = exit();
                    break;


        }
    }while(!exit_value);

    return 0;
}

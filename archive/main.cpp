#include<iostream>
#include<stdio.h>
#include<time.h>
#include<string>
#include<math.h>
#include<windows.h>
#include"asciiart.h"
#include"wincolor.h"

#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||


using namespace std;

void main_menu()
{
    bool pass;
    ascii_art("        TYPING  GAME"); cout<<endl;

    do{
        for(int i = 0; i < WINDOW_HEIGHT; i++)
        {
                for (int j =0; j < WINDOW_WIDTH; j++)
                {
                    if (i == 0 OR j == 0 OR i == (WINDOW_HEIGHT-1) OR j == (WINDOW_WIDTH-1) OR i==1 OR j ==1 OR j==2 OR i == (WINDOW_HEIGHT-2) OR j == (WINDOW_WIDTH-2) OR j == (WINDOW_WIDTH-3) )
                    {
                        RED_BG printf(" "); BLACK_BG
                    }


                    else cout<<" ";
                }
                cout<<endl;
        }

        cin>>pass;
    } while(!pass);

}

void typing_test()
{

    time_t t1,t2;
    t1 = time(NULL);

    cout<<"\n\n\t\t\t\tthe quick brown fox jumped over the lazy dog\n"<<endl;
    cout<<"\n\n\t\t\t\tStart Typing..."<<endl;
    string ttest;
    cout<<endl<<"\t\t\t\t";
    cin >> ws;
    getline(cin, ttest);

    t2 = time(NULL);

    int wc = ttest.length();
    cout<<"\n\n\n";

    int seconds;
    seconds = t2 - t1;
    float min = (seconds / 60.0);
    wc = wc/5;
    float wpm = (wc/min);
    wpm = ceil(wpm);

    cout<<endl<<"\t\t\t\t"<<wpm<<" WPM is your typing speed"<<"\n\n\n\n\n\n\n\n\n";

}

int main()
{
    winc_main();
    main_menu();
    typing_test();

}

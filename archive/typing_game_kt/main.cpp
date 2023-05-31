#include<iostream>
#include<time.h>
#include<string>
#include<math.h>
#include"asciiart.h"
#include"wincolor.h"

#include"main_screen.cpp"
#include"start_screen.cpp"
#include"about_screen.cpp"
#include"easy_screen.cpp"
#include"normal_screen.cpp"
#include"hard_screen.cpp"

#define CLEAR_SCREEN cout<<"\x1b[2J \x1b[1;1H"<<flush;
#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||


using namespace std;

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

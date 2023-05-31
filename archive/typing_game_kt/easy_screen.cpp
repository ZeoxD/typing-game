#define CLEAR_SCREEN cout<<"\x1b[2J \x1b[1;1H"<<flush;
#define WINDOW_WIDTH 119
#define WINDOW_HEIGHT 22
#define AND &&
#define OR ||

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

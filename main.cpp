#include <iostream>
#include<string>


using namespace std;
class saurav{
    public:

        void cool(int x) {
            string c;
            char q[5];
            cout<<"\\CREATING PATIENT DATABASE................."<<endl;
            cout<<"START LOADING ....."<<endl;
            cout<<"Patient id num= ";
            cin>>x;
            cout<<"NAME=";
            cin>>c;
            cout<<"BLOOD GROUP=";
            cin>>q;


        }
        void data(int h, int a , int bp, int ad){
char w='a';
float d;
            cout<<"HEIGHT= ";
            cin>>h;
            cout<<"AGE= " ;
            cin>>a;
            cout<<"BLOOD PA= ";
            cin>>bp;
            cout<<"ADULT DOSE IN mg()= ";
            cin>>ad;
            if(0<a && a<2){
        cout<<"Tum chote ho "<<endl;
        cout<<"YOUNGS RULE"<<endl;
        d=((float)a/(a+12))*ad;


    }
    else if(a>2){
        cout<<"GROWN"<<endl;
        cout<<"FRIED RULE"<<endl;
        d=((float)a/12)/150*ad;

    }
    else{
        cout<<"data invalid"<<endl;
    }
    cout<<"DOSE(in mg) ="<<d<<endl;
    //............CHECK IF ANY ABNORMALITIES PERSIST............//
               cout<<".....DATABASE FOR ILLNESS....."<<endl;
            cout<<"breathing problem"<<endl;
            cout<<"headache"<<endl;
            cin>>w;

            switch(w){
                case 'a':
                    cout<<"damn"<<endl;
                    d=d+1;

                    break;
                case 'b':
                    cout<<"dec";
                    d=d*2;
                    break;
                case 'c':
                    cout<<"normal"<<endl;
                    d=d;
                default :
                    cout<<"INVALID "<<endl;
        }

         cout<<"final dose"<<d<<endl;



        }
        void mega(){
            int t,pmin,pmax,p;
            cout<<"....DATA EXTRACTION WITH ATMEGA2506...."<<endl;
            cout<<"***PROVIDE DETAILS OF INTUTTION PUMP****"<<endl;
            cout<<" "<<endl;
            cout<<"MINIMUM RATED PRESSURE= ";
            cin>>pmin;
            cout<<"MAXIMUM RATED PRESSURE= ";
            cin>>pmax;
            cout<<"CURRENT PRESSURE= ";
            cin>>p;
            cout<<" BODY TEMPRATURE USING LM35 TEMPRATURE SENSOR"<<endl;
            cin>>t;

            if(pmin<p && p<pmax && t>36 && t<38){
                cout<<"PRESSURE AND TEMPRATURE IN RANGE........"<<endl;
                cout<<"***SYSTEM WORKING GOOD***"<<endl;
                cout<<"ALARM OFF"<<endl;
            }
            else{
                cout<<"PRESSURE OR TEMPRATURE NOT IN RANGE"<<endl;
                cout<<"\\......SYSTEM SHUTDOWN....."<<endl;
                cout<<"SAFETY VALVES ACTIVATED"<<endl;
                cout<<"******ALARM ON********"<<endl;
            }

        }

};

int main()
{
int n;
char g;
cout<<"enter number of times the system has to refresh "<<endl;
cin>>n;
    saurav dude;
    for(int i=0;i<n;i++){
    dude.cool(2);
    dude.data(1,1,1,1);
    dude.mega();
    cout<<"cont?"<<endl;
    cin>>g;
    if(g=='y'){
        continue;
    }
    else{
        break;
    }
    }
    cout<<"Get well soon"<<endl;
    cout << "..... DATA AQUISITION FOR INTUTION......"<<endl;



    return 0;
}


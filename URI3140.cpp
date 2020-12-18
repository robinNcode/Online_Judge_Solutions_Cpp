#include<iostream>
using namespace std;

int main(){

    char str[1000];

    //while(1){
       for(int ptr=0; ptr<1000; ptr++){

            cin>>str[ptr];
            if(str[ptr] == '/'){
                //cout<<"output = "<<str[ptr]<<endl;
                if(str[ptr] == 'h'){
                    if(str[ptr] == 't'){
                        if(str[ptr] == 'm'){
                            if(str[ptr] == 'l'){
                                if(str[ptr] == '>') goto br;
                            }
                        }
                    }
                }
            }
            br:
                break;
        }

        /*for(int loop=0; loop<sizeof(str); loop++){
            cout<<str[loop]<<endl;
        }*/
    //}

    return 0;
}

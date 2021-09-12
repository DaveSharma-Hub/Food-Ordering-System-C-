#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include "FileOutput.h"

using namespace std;

int main()
{
    cout << "Hello!" << endl;

    char fullname[45];
    string pizza1="Pepperoni",pizza2="Cheese",pizza3="Vegetarian",pizza4="Hawaiian";
    string sandwich1="Egg Sandwich",sandwich2="BLT",sandwich3="Grilled Cheese Sandwich";
    string pasta1="Spaghetti", pasta2="Lasagne", pasta3="Linguine";
    int ppizza1=4,ppizza2=3,ppizza3=4,ppizza4=5;
    //int psandwich
    cout<<"Please enter your name\n";
   // string tmp;
    cin>>fullname;
    //fullname=tmp;
    bool check=false;
    if(fullname!=nullptr){
            check=true;
            vector<string> order;
            while(check){
                char tmp1;
                BACKSTEP:
               cout<<"Type 1 to choose out Pizzas, 2 for Sandwiches and 3 for Pastas\n";
                cin>>tmp1;
                if(tmp1=='1'){
                    BACKSTEP1:cout<<"Type 1 for "<<pizza1<<" 2 for "<<pizza2<<" 3 for "<<pizza3<<" and 4 for "<<pizza4<<"\n";
                    char tmp2;
                    cin>>tmp2;
                    if(tmp2=='1'){
                        order.push_back(pizza1);
                    }
                    else if(tmp2=='2'){
                        order.push_back(pizza2);
                    }
                    else if(tmp2=='3'){
                        order.push_back(pizza3);
                    }
                    else if(tmp2=='4'){
                        order.push_back(pizza4);
                    }
                    else{
                    cout<<"Please enter a valid choice\n";
                    goto BACKSTEP1;
                }
                }
                else if(tmp1=='2'){
                    BACKSTEP2:cout<<"Type 1 for "<<sandwich1<<" 2 for "<<sandwich2<<" and 3 for "<<sandwich3<<"\n";
                    char tmp2;
                    cin>>tmp2;
                    if(tmp2=='1'){
                        order.push_back(sandwich1);
                    }
                    else if(tmp2=='2'){
                        order.push_back(sandwich2);
                    }
                    else if(tmp2=='3'){
                        order.push_back(sandwich3);
                    }
                    else{
                    cout<<"Please enter a valid choice\n";
                    goto BACKSTEP2;
                }
                }
                else if(tmp1=='3'){
                BACKSTEP3:cout<<"Type 1 for "<<pasta1<<" 2 for "<<pasta2<<" and 3 for "<<pasta3<<"\n";
                    char tmp2;
                    cin>>tmp2;
                    if(tmp2=='1'){
                        order.push_back(pasta1);
                    }
                    else if(tmp2=='2'){
                        order.push_back(pasta2);
                    }
                    else if(tmp2=='3'){
                        order.push_back(pasta3);
                    }
                    else{
                    cout<<"Please enter a valid choice\n";
                    goto BACKSTEP3;
                }
                }
                else{
                    cout<<"Please enter a valid choice\n";
                    goto BACKSTEP;
                }

               char holder;
               cout<<"Do you want to continue ordering\n type Y for yes N for no";
               cin>>holder;
               if(holder=='N'){
                check=false;
               }
            }
        cout<<"Order for: "<<fullname<<"\n";
        for(int i=0;i<order.size();i++){
            cout<<order.at(i);
            cout<<"\n";
        }
        cout<<"Do you want to print that\nType 1 for Yes 2 for No";
        char holder_value;
        cin>>holder_value;
        if(holder_value=='1'){
        string location_holder;
        cout<<"Please type location\n";
        cin>>location_holder;
        if(!location_holder.empty()){
        FileOutput f1;
        f1.output(order,location_holder);
            }
        }
    }
   return 0;
}

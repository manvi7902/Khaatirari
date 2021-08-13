#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<time.h>
using namespace std;
int otp;
void logo()
{
    cout<<endl;
    cout<<"**     **     **    **      ********    ********  ********     *******      *****         ********    *******      ********         "<<endl;
    cout<<"**   **       **    **      **    **       **        **        **    **     **    **      **    **    **    **        **        "<<endl;
    cout<<"** **         **    **      **    **       **        **        **    **     **     **     **    **    **    **        **        "<<endl;
    cout<<"**            ********      ********       **        **        ********     **     **     ********    ********        **       "<<endl;
    cout<<"** **         **    **      **    **       **        **        **           **     **     **    **    **              **        "<<endl;
    cout<<"**  **        **    **      **    **       **        **        ** **        **    **      **    **    **  **          **        "<<endl;
    cout<<"**     **     **    **      **    **       **     ********     **    **     *****         **    **    **    **     ********    "<<endl;



}
void random_otp()
{
otp = rand()*1234;
cout<<"your otp generted is"<<otp<<endl;
}

void bill_pay(double osum)
{
    int a,online;
    double bill_amt=osum;
    long long phone;
    int otp1;
    cout<<endl;
    cout<<"would you like 1]ONLINE_PAYMENT or 2]COD"<<endl;
    cin>>a;
    if(a==1)
    {
        cout<<"Choose your preferred online wallet:\n 1)PAYTM 2)PHONEPE"<<endl;
        cin>>online;
        switch(online)
        {
        case 1:
            {
               cout<<"enter your phone number"<<endl;
               cin>>phone;
               //check whether entered number and saved number is same
               cout<<"enter the otp you received at the start"<<endl;
               cin>>otp1;
               if(otp1==otp)
               {
                   cout<<"your bill amount is Rs."<<bill_amt<<endl;
                   cout<<"your bill is successfully paid through paytm"<<endl;
                   cout<<endl;
               }
               else
                {
                    cout<<"otp entered  is incorrect"<<endl;
               cout<<"redirecting to payment page"<<endl;
               bill_pay(bill_amt);
                }
            }break;

        case 2:
            {
               cout<<"enter your phone number"<<endl;
               cin>>phone;
               cout<<"enter the otp you received at the start"<<endl;
               cin>>otp1;
               if(otp1==otp)
               {
                   cout<<"your bill is successfully paid through phonepe"<<endl;
                   cout<<endl;
               }
               else
                {
                    cout<<"otp entered  is incorrect"<<endl;
                    cout<<"redirecting to payment page"<<endl;
                    bill_pay(bill_amt);

                }
            }break;
        }

    }
    else//cod
    {
        cout<<"Please keep Rs."<<bill_amt<<"Ready!\n Exact change preferred\n Your food will be delivered shortly "<<endl;
         cout<<"thanks"<<endl;
    }
}

double offer_r(double osum)
{
    string newcode;
    double bill_amt,amt;
    cout<<"do you have additional code to get discount"<<endl;
    cin>>newcode;
    cout<<endl;
    if(newcode=="NEW_USER"|| newcode=="new_user")
    {
        amt=0.13*osum;
        bill_amt=osum-amt;
        cout<<"hence your bill after additional discount is "<<bill_amt<<endl;
        cout<<endl;
        return bill_amt;
    }
}

void time()
{
     time_t t;
       time(&t);
       cout<<"Todays date and current time is";
       cout<<ctime(&t);
}

class driver
{
    public:
    void driver1()//zomato
    {
        cout<<"\n\nDelivery Details:\n";
        cout<<"Name: Masnoon "<<endl;
        cout<<"Phone number : 9869195959"<<endl;
        cout<<"Vehicle: scooty"<<endl;
        cout<<"Vehicle Number: MH 04 DR 7865"<<endl;
    }
    void driver2()//swiggy
    {
        cout<<"\n\nDelivery Details:\n";
        cout<<"Name: Rahul Shah "<<endl;
        cout<<"Phone number : 9869145890"<<endl;
        cout<<"Vehicle: scooty"<<endl;
        cout<<"Vehicle Number: MH 02 EE 1755"<<endl;
    }
     void driver3()//uber
    {
        cout<<"\n\nDelivery Details:\n";
        cout<<"Name: Preet Gokhale "<<endl;
        cout<<"Phone number : 7862486313"<<endl;
        cout<<"Vehicle: scooty"<<endl;
        cout<<"Vehicle Number: MH 40 JK 2560"<<endl;
    }
     void driver4()//foodpanda
    {
        cout<<"\n\nDelivery Details:\n";
        cout<<"Name: Muhammed Ali "<<endl;
        cout<<"Phone number : 9574362450"<<endl;
        cout<<"Vehicle: scooty"<<endl;
        cout<<"Vehicle Number: MH 35 ML 6750"<<endl;
    }
     //extra driver
     void driver5()
    {
        cout<<"\n\nDelivery Details:\n";
        cout<<"Name: Prateek Mevad "<<endl;
        cout<<"Phone number : 7852146320"<<endl;
        cout<<"Vehicle: scooty"<<endl;
        cout<<"Vehicle Number: MH 05 YM 1890"<<endl;
    }

}driver_obj;

class Amar
{
protected:
    int a,choice;
    string ch;
    int count_1=0,count_2=0,count_3=0,count_4=0,count_5=0;
    double cgst,sgst;
    //variable list fro Zomato
    int count_tz;
    int sum_1z,sum_2z,sum_4z,sum_5z,sum_3z,sum_tz,delTime_z;
    double gst_z;
    // variable list for Swiggy
    int count_ts;
    int sum_1s,sum_2s,sum_4s,sum_5s,sum_3s,sum_ts,delTime_s;
    double gst_s;
    // variable list for Uber eats
    int count_tu;
    int sum_1u,sum_2u,sum_4u,sum_5u,sum_3u,sum_tu,delTime_u;
    double gst_u;
    // variable list for food panda
    int count_tf;
    int sum_1f,sum_2f,sum_4f,sum_5f,sum_3f,sum_tf,delTime_f;
    double gst_f;
    //offer variables
    string code;
    double osum,off;
  public:
    void Decide(int a_status)//status from choice
    {
        int lore=a_status;
      cout<<endl<<"Enter choice here"<<endl;
      cin>>choice;
      switch(choice)
      {
          case 1:
          cout<<"You have chosen to order from Zomato"<<endl;
          cout<<"Your bill amount is "<<sum_tz<<endl;
          cout<<"Delivery time will be "<<delTime_z<<"minutes"<<endl;
          cout<<endl;
          cout<<"your total bill amount after GST is Rs."<<gst_z<<endl;
          cout<<"to get 30% OFF use code 'ZOMATO'"<<endl;
          cin>>code;
          if(code=="zomato"||code=="ZOMATO")
          {
              off=(0.3*gst_z);
              osum = gst_z-off;
              cout<<"your final bill amount is Rs."<<osum<<endl;
          }
          else
          {
              cout<<"Invalid code entered"<<endl<<"Discount not applicable"<<endl;
          }
          if(lore==1)//register
          {
              offer_r(osum);
          }

          time();
          bill_pay(osum);
          cout<<"would you like to giveaway leftover food at your place to someone"<<endl;
          cin>>ch;
          if(ch=="yes" || ch=="y" || ch=="Yes")
          {

              cout<<"Please give the food to the person delivering your food"<<endl;
              cout<<"We will make sure it reaches the hungry"<<endl;
              cout<<"thanks for your service"<<endl;

          }
          driver_obj.driver1();
          break;

          case 2:
          cout<<"You have chosen to order from Swiggy"<<endl;
          cout<<"Your bill amount is Rs."<<sum_ts<<endl;
          cout<<"Delivery time will be "<<delTime_s<<"minutes"<<endl;
          cout<<endl;
          cout<<"your total bill amount after GST is Rs."<<gst_s<<endl;
          cout<<"to get 12% OFF use code 'SwIgGy'"<<endl;
          cin>>code;
          if(code=="SwIgGy")
          {
              off=(0.12*gst_z);
              osum = gst_s-off;
              cout<<"your final bill amount is Rs."<<osum<<endl;
          }
          else
          {
              cout<<"Invalid code entered"<<endl<<"Discount not applicable"<<endl;
          }

          if(lore==1)//register
          {
              osum=offer_r(osum);
          }

          time();
          bill_pay(osum);
          cout<<"would you like to giveaway leftover food at your place to someone"<<endl;
          cin>>ch;
          if(ch=="yes" || ch=="y" || ch=="Yes")
          {

              cout<<"Please give the food to the person delivering your food"<<endl;
              cout<<"We will make sure it reaches the hungry"<<endl;
              cout<<"thanks for your service"<<endl;

          }

          driver_obj.driver2();
          break;

          case 3:
          cout<<"You have chosen to order from Uber Eats"<<endl;
          cout<<"Your bill amount is Rs."<<sum_tu<<endl;
          cout<<"Delivery time will be "<<delTime_u<<"minutes"<<endl;
          cout<<endl;
          cout<<"your total bill amount after GST is Rs."<<gst_u<<endl;
          cout<<"to get 20% OFF use code 'UEats'"<<endl;
          cin>>code;
          if(code=="UEats")
          {
              off=(0.2*gst_u);
              osum = gst_u-off;
              cout<<"your final bill amount is Rs."<<osum<<endl;
          }
          else
          {
              cout<<"Invalid code entered"<<endl<<"Discount not applicable"<<endl;
          }

          if(lore==1)//register
          {
              osum=offer_r(osum);
          }

          time();
          bill_pay(osum);
          cout<<"would you like to giveaway leftover food at your place to someone"<<endl;
          cin>>ch;
          if(ch=="yes" || ch=="y" || ch=="Yes")
          {

              cout<<"Please give the food to the person delivering your food"<<endl;
              cout<<"We will make sure it reaches the hungry"<<endl;
              cout<<"thanks for your service"<<endl;

          }
          driver_obj.driver3();
          break;

          case 4:
          cout<<"You have chosen to order from Food Panda"<<endl;
          cout<<"Your bill amount is Rs."<<sum_tf<<endl;
          cout<<"Delivery time will be "<<delTime_f<<"minutes"<<endl;
          cout<<endl;
          cout<<"your total bill amount is Rs."<<gst_z<<endl;
          cout<<"to get 15% OFF use code 'FPanda'"<<endl;
          cin>>code;
          if(code=="FPanda")
          {
              off=(0.15*gst_f);
              osum = gst_f-off;
              cout<<"your final bill amount is Rs."<<osum<<endl;
          }
          else
          {
              cout<<"Invalid code entered"<<endl<<"Discount not applicable"<<endl;
          }
          if(lore==1)//register
          {
              osum=offer_r(osum);
          }

          time();
          bill_pay(osum);
          cout<<endl;
           cout<<"would you like to giveaway leftover food at your place to someone"<<endl;
          cin>>ch;
          if(ch=="yes" || ch=="y" || ch=="Yes")
          {

              cout<<"Please give the food to the person delivering your food"<<endl;
              cout<<"We will make sure it reaches the hungry"<<endl;
              cout<<"thanks for your service"<<endl;

          }
          driver_obj.driver4();

          break;

          default:
          cout<<"Enter valid choice"<<endl;
      }
    }

    void order()
    {
        cout<<"Enter '6' to exit"<<endl;
      do
      {
            cout<<"Enter your order code"<<endl;

            cin>>a;
          switch(a)
        {
          case 1:
          count_1++;
          break;
          case 2:
          count_2++;
          break;
          case 3:
          count_3++;
          break;
          case 4:
          count_4++;
          break;
          case 5:
          count_5++;
          break;
          default:
          cout<<"Enter valid choice"<<endl;
        }
        //cout<<"Do you want to add something to your existing order??"<<endl;
        //cin>>ch;
      }while(a!=6);
  }

    void Zomato()
    {
      sum_1z=count_1*99;
      sum_2z=count_2*105;
      sum_3z=count_3*300;
      sum_4z=count_4*150;
      sum_5z=count_5*205;
      sum_tz=sum_1z+sum_2z+sum_3z+sum_4z+sum_5z;
      count_tz=count_1+count_2+count_3+count_4+count_5;
      delTime_z=20+(count_tz*3);
      cgst=(2.5/100)*sum_tz;
      sgst=(2.5/100)*sum_tz;
      gst_z=sum_tz+(cgst+sgst);
      cout<<endl<<"Your bill amount from Zomato is Rs."<<sum_tz<<endl;
      cout<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_z<<"\n";
      cout<<"The time taken for delivery will be "<<delTime_z<<"minutes"<<endl;
      cout<<"to order from 'ZOMATO' enter 1"<<endl;
      cout<<endl<<endl;
  }

    void Swiggy()
    {
      sum_1s=count_1*106;
      sum_2s=count_2*199;
      sum_3s=count_3*250;
      sum_4s=count_4*100;
      sum_5s=count_5*180;
      sum_ts=sum_1s+sum_2s+sum_3s+sum_4s+sum_5s;
      count_ts=count_1+count_2+count_3+count_4+count_5;
      delTime_s=20+(count_ts*4);
      cgst=(2.5/100)*sum_ts;
      sgst=(2.5/100)*sum_ts;
      gst_s=sum_ts+(cgst+sgst);
      cout<<"Your bill amount from Swiggy is Rs."<<sum_ts<<endl;
      cout<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_s<<endl;
      cout<<"The time taken for delivery will be "<<delTime_s<<"minutes"<<endl;
      cout<<"to order from 'SWIGGY' enter 2"<<endl;
      cout<<endl<<endl;
  }

    void Uber_eats()
    {
      sum_1u=count_1*115;
      sum_2u=count_2*120;
      sum_3u=count_3*250;
      sum_4u=count_4*135;
      sum_5u=count_5*215;
      sum_tu=sum_1u+sum_2u+sum_3u+sum_4u+sum_5u;
      count_tu=count_1+count_2+count_3+count_4+count_5;
      delTime_u=20+(count_tu*5);
      cgst=(2.5/100)*sum_tu;
      sgst=(2.5/100)*sum_tu;
      gst_u=sum_tu+(cgst+sgst);
      cout<<"Your bill amount from Uber Eats is Rs."<<sum_tu<<endl;
      cout<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_u<<endl;
      cout<<"The time taken for delivery will be "<<delTime_u<<"minutes"<<endl;
      cout<<"to order from 'UBER EATS' enter 3"<<endl;
      cout<<endl<<endl;
    }

    void Food_panda()
    {
        sum_1f=count_1*135;
        sum_2f=count_2*90;
        sum_3f=count_3*200;
        sum_4f=count_4*200;
        sum_5f=count_5*199;
        sum_tf=sum_1f+sum_2f+sum_3f+sum_4f+sum_5f;
        count_tf=count_1+count_2+count_3+count_4+count_5;
        delTime_f=20+(count_tf*6);
        cgst=(2.5/100)*sum_tf;
        sgst=(2.5/100)*sum_tf;
        gst_f=sum_tf+(cgst+sgst);
        cout<<"Your bill amount from Food Panda is Rs."<<sum_tf<<endl;
        cout<<endl;
        cout<<"Your bill amount after GST is Rs."<<gst_f<<endl;
        cout<<"The time taken for delivery will be "<<delTime_f<<"minutes"<<endl;
        cout<<"to order from 'FOOD PANDA' enter 4"<<endl;
        cout<<endl<<endl;
    }

   /*  void bill()
    {
        cout<<"GENERATING BILL";
        for(long k=0;k<=1000000000;k++);
        cout<<".";
        for(long k=0;k<=1000000000;k++);
        cout<<".";
        for(long k=0;k<=1000000000;k++);
        cout<<".";
        for(long k=0;k<=1000000000;k++);
        cout<<".";
        for(long k=0;k<=1000000000;k++);
        cout<<".";
        cout<<" ";
        cout<<"\f";
        cout<<"***********************"<<endl;
        cout<<"                    KHATIRDARI                                     "<<endl;
        cout<<"             KHAATE RAHO MANGATE RAHO                              "<<endl;
        cout<<"            Customer care number: 8085213684                       "<<endl;
        cout<<"***********************"<<endl;
//        cout<<"NAME"<<"\t" "\t" "\t"<<user_name;

    }*/

}obj1;

class Prithvi:private Amar
{
  public:
  void order()
  {
      Amar::order();
  }

    void Zomato()
    {
      sum_1z=count_1*100;
      sum_2z=count_2*130;
      sum_3z=count_3*95;
      sum_4z=count_4*130;
      sum_5z=count_5*150;
      sum_tz=sum_1z+sum_2z+sum_3z+sum_4z+sum_5z;
      count_tz=count_1+count_2+count_3+count_4+count_5;
      delTime_z=count_tz*3;
      cgst=(2.5/100)*sum_tz;
      sgst=(2.5/100)*sum_tz;
      gst_z=sum_tz+(cgst+sgst);
      cout<<endl<<"Your bill amount from Zomato is Rs."<<sum_tz<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_z<<endl;;
      cout<<"The time taken for delivery will be "<<delTime_z<<"minutes"<<endl;
      cout<<"to order from Zomato enter 1"<<endl;
      cout<<endl<<endl;
  }

    void Swiggy()
    {
      sum_1s=count_1*120;
      sum_2s=count_2*140;
      sum_3s=count_3*120;
      sum_4s=count_4*105;
      sum_5s=count_5*160;
      sum_ts=sum_1s+sum_2s+sum_3s+sum_4s+sum_5s;
      count_ts=count_1+count_2+count_3+count_4+count_5;
      delTime_s=count_ts*4;
      cgst=(2.5/100)*sum_ts;
      sgst=(2.5/100)*sum_ts;
      gst_s=sum_ts+(cgst+sgst);
      cout<<"Your bill amount from Swiggy is Rs."<<sum_ts<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_s<<endl;
      cout<<"The time taken for delivery will be "<<delTime_s<<"minutes"<<endl;
      cout<<"to order from Swiggy enter 2"<<endl;
      cout<<endl<<endl;
  }

    void Uber_eats()
    {
      sum_1u=count_1*90;
      sum_2u=count_2*155;
      sum_3u=count_3*110;
      sum_4u=count_4*110;
      sum_5u=count_5*210;
      sum_tu=sum_1u+sum_2u+sum_3u+sum_4u+sum_5u;
      count_tu=count_1+count_2+count_3+count_4+count_5;
      delTime_u=count_tu*5;
      cgst=(2.5/100)*sum_tu;
      sgst=(2.5/100)*sum_tu;
      gst_u=sum_tu+(cgst+sgst);
      cout<<"Your bill amount from Uber Eats is Rs."<<sum_tu<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_u<<endl;
      cout<<"The time taken for delivery will be "<<delTime_u<<"minutes"<<endl;
      cout<<"to order from Uber Eats enter 3"<<endl;
      cout<<endl<<endl;
  }

    void Food_panda()
    {
        sum_1f=count_1*135;
        sum_2f=count_2*115;
        sum_3f=count_3*100;
        sum_4f=count_4*95;
        sum_5f=count_5*175;
        sum_tf=sum_1f+sum_2f+sum_3f+sum_4f+sum_5f;
        count_tf=count_1+count_2+count_3+count_4+count_5;
        delTime_f=count_tf*6;
        cgst=(2.5/100)*sum_tf;
        sgst=(2.5/100)*sum_tf;
        gst_f=sum_tf+(cgst+sgst);
        cout<<"Your bill amount from Food Panda is Rs."<<sum_tf<<endl;
        cout<<"Your bill amount after GST is Rs."<<gst_f<<endl;
        cout<<"The time taken for delivery will be "<<delTime_f<<"minutes"<<endl;
        cout<<"to order from Food Panda enter 4"<<endl;
        cout<<endl;
    }


  void Decide(int a_status)
  {
      int status=a_status;
      Amar::Decide(status);
  }

}obj2;

class Kailash:private Amar
{
  public:
  void order()
  {
      Amar::order();
  }

 void Zomato()
    {
      sum_1z=count_1*199;
      sum_2z=count_2*105;
      sum_3z=count_3*225;
      sum_4z=count_4*215;
      sum_5z=count_5*145;
      sum_tz=sum_1z+sum_2z+sum_3z+sum_4z+sum_5z;
      count_tz=count_1+count_2+count_3+count_4+count_5;
      delTime_z=count_tz*3;
      cgst=(2.5/100)*sum_tz;
      sgst=(2.5/100)*sum_tz;
      gst_z=sum_tz+(cgst+sgst);
      cout<<endl<<"Your bill amount from Zomato is Rs."<<sum_tz<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_z<<endl;
      cout<<"The time taken for delivery will be "<<delTime_z<<"minutes"<<endl;
      cout<<"to order from Zomato enter 1"<<endl;
      cout<<endl<<endl;
  }

    void Swiggy()
    {
      sum_1s=count_1*106;
      sum_2s=count_2*205;
      sum_3s=count_3*199;
      sum_4s=count_4*300;
      sum_5s=count_5*215;
      sum_ts=sum_1s+sum_2s+sum_3s+sum_4s+sum_5s;
      count_ts=count_1+count_2+count_3+count_4+count_5;
      delTime_s=count_ts*4;
      cgst=(2.5/100)*sum_ts;
      sgst=(2.5/100)*sum_ts;
      gst_s=sum_ts+(cgst+sgst);
      cout<<"Your bill amount from Swiggy is Rs."<<sum_ts<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_s<<endl;
      cout<<"The time taken for delivery will be "<<delTime_s<<"minutes"<<endl;
      cout<<"to order from Swiggy enter 2"<<endl;
      cout<<endl<<endl;
  }

    void Uber_eats()
    {
      sum_1u=count_1*205;
      sum_2u=count_2*115;
      sum_3u=count_3*205;
      sum_4u=count_4*255;
      sum_5u=count_5*200;
      sum_tu=sum_1u+sum_2u+sum_3u+sum_4u+sum_5u;
      count_tu=count_1+count_2+count_3+count_4+count_5;
      delTime_u=count_tu*5;
      cgst=(2.5/100)*sum_tu;
      sgst=(2.5/100)*sum_tu;
      gst_u=sum_tu+(cgst+sgst);
      cout<<"Your bill amount from Uber Eats is Rs."<<sum_tu<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_u<<endl;
      cout<<"The time taken for delivery will be "<<delTime_u<<"minutes"<<endl;
      cout<<"to order from Uber Eats enter 3"<<endl;
      cout<<endl<<endl;
  }

    void Food_panda()
    {
        sum_1f=count_1*185;
        sum_2f=count_2*190;
        sum_3f=count_3*215;
        sum_4f=count_4*225;
        sum_5f=count_5*255;
        sum_tf=sum_1f+sum_2f+sum_3f+sum_4f+sum_5f;
        count_tf=count_1+count_2+count_3+count_4+count_5;
        delTime_f=count_tf*6;
        cgst=(2.5/100)*sum_tf;
        sgst=(2.5/100)*sum_tf;
        gst_f=sum_tf+(cgst+sgst);
        cout<<"Your bill amount from Food Panda is Rs."<<sum_tf<<endl;
        cout<<"Your bill amount after GST is Rs."<<gst_f<<endl;
        cout<<"The time taken for delivery will be "<<delTime_f<<"minutes"<<endl;
        cout<<"to order from Food Panda enter 4"<<endl;
        cout<<endl;
    }

  void Decide(int a_status)
  {
      int status=a_status;
      Amar::Decide(status);
  }

}obj3;

class ChoHeaven:private Amar
{
  public:
  void order()
  {
      Amar::order();
  }

   void Zomato()
    {
      sum_1z=count_1*100;
      sum_2z=count_2*230;
      sum_3z=count_3*115;
      sum_4z=count_4*190;
      sum_5z=count_5*250;
      sum_tz=sum_1z+sum_2z+sum_3z+sum_4z+sum_5z;
      count_tz=count_1+count_2+count_3+count_4+count_5;
      delTime_z=count_tz*3;
      cgst=(2.5/100)*sum_tz;
      sgst=(2.5/100)*sum_tz;
      gst_z=sum_tz+(cgst+sgst);
      cout<<endl<<"Your bill amount from Zomato is Rs."<<sum_tz<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_z<<endl;
      cout<<"The time taken for delivery will be "<<delTime_z<<"minutes"<<endl;
      cout<<"to order from Zomato enter 1"<<endl;
      cout<<endl<<endl;
  }

    void Swiggy()
    {
      sum_1s=count_1*150;
      sum_2s=count_2*210;
      sum_3s=count_3*112;
      sum_4s=count_4*205;
      sum_5s=count_5*199;
      sum_ts=sum_1s+sum_2s+sum_3s+sum_4s+sum_5s;
      count_ts=count_1+count_2+count_3+count_4+count_5;
      delTime_s=count_ts*4;
      cgst=(2.5/100)*sum_ts;
      sgst=(2.5/100)*sum_ts;
      gst_s=sum_ts+(cgst+sgst);
      cout<<"Your bill amount from Swiggy is Rs."<<sum_ts<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_s<<endl;
      cout<<"The time taken for delivery will be "<<delTime_s<<"minutes"<<endl;
      cout<<"to order from Swiggy enter 2"<<endl;
      cout<<endl<<endl;
  }

    void Uber_eats()
    {
      sum_1u=count_1*190;
      sum_2u=count_2*199;
      sum_3u=count_3*99;
      sum_4u=count_4*170;
      sum_5u=count_5*210;
      sum_tu=sum_1u+sum_2u+sum_3u+sum_4u+sum_5u;
      count_tu=count_1+count_2+count_3+count_4+count_5;
      delTime_u=count_tu*5;
      cgst=(2.5/100)*sum_tu;
      sgst=(2.5/100)*sum_tu;
      gst_u=sum_tu+(cgst+sgst);
      cout<<"Your bill amount from Uber Eats is Rs."<<sum_tu<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_u<<endl;
      cout<<"The time taken for delivery will be "<<delTime_u<<"minutes"<<endl;
      cout<<"to order from Uber Eats enter 3"<<endl;
      cout<<endl<<endl;
  }

    void Food_panda()
    {
        sum_1f=count_1*105;
        sum_2f=count_2*215;
        sum_3f=count_3*100;
        sum_4f=count_4*115;
        sum_5f=count_5*225;
        sum_tf=sum_1f+sum_2f+sum_3f+sum_4f+sum_5f;
        count_tf=count_1+count_2+count_3+count_4+count_5;
        delTime_f=count_tf*6;
        cgst=(2.5/100)*sum_tf;
        sgst=(2.5/100)*sum_tf;
        gst_f=sum_tf+(cgst+sgst);
        cout<<"Your bill amount from Food Panda is Rs."<<sum_tf<<endl;
        cout<<"Your bill amount after GST is Rs."<<gst_f<<endl;
        cout<<"The time taken for delivery will be "<<delTime_f<<"minutes"<<endl;
        cout<<"to order from Food Panda enter 4"<<endl;
        cout<<endl;
    }

  void Decide(int a_status)
  {
      int status=a_status;
      Amar::Decide(status);
  }

}obj4;

class Aditi:private Amar
{
  public:
  void order()
  {
      Amar::order();
  }


   void Zomato()
    {
      sum_1z=count_1*199;
      sum_2z=count_2*105;
      sum_3z=count_3*225;
      sum_4z=count_4*215;
      sum_5z=count_5*145;
      sum_tz=sum_1z+sum_2z+sum_3z+sum_4z+sum_5z;
      count_tz=count_1+count_2+count_3+count_4+count_5;
      delTime_z=count_tz*3;
      cgst=(2.5/100)*sum_tz;
      sgst=(2.5/100)*sum_tz;
      gst_z=sum_tz+(cgst+sgst);
      cout<<endl<<"Your bill amount from Zomato is Rs."<<sum_tz<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_z<<endl;
      cout<<"The time taken for delivery will be "<<delTime_z<<"minutes"<<endl;
      cout<<"to order from Zomato enter 1"<<endl;
      cout<<endl<<endl;
  }

    void Swiggy()
    {
      sum_1s=count_1*106;
      sum_2s=count_2*99;
      sum_3s=count_3*199;
      sum_4s=count_4*300;
      sum_5s=count_5*205;
      sum_ts=sum_1s+sum_2s+sum_3s+sum_4s+sum_5s;
      count_ts=count_1+count_2+count_3+count_4+count_5;
      delTime_s=count_ts*4;
      cgst=(2.5/100)*sum_ts;
      sgst=(2.5/100)*sum_ts;
      gst_s=sum_ts+(cgst+sgst);
      cout<<"Your bill amount from Swiggy is Rs."<<sum_ts<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_s<<endl;
      cout<<"The time taken for delivery will be "<<delTime_s<<"minutes"<<endl;
      cout<<"to order from Swiggy enter 2"<<endl;
      cout<<endl<<endl;
  }

    void Uber_eats()
    {
      sum_1u=count_1*205;
      sum_2u=count_2*215;
      sum_3u=count_3*205;
      sum_4u=count_4*225;
      sum_5u=count_5*200;
      sum_tu=sum_1u+sum_2u+sum_3u+sum_4u+sum_5u;
      count_tu=count_1+count_2+count_3+count_4+count_5;
      delTime_u=count_tu*5;
      cgst=(2.5/100)*sum_tu;
      sgst=(2.5/100)*sum_tu;
      gst_u=sum_tu+(cgst+sgst);
      cout<<"Your bill amount from Uber Eats is Rs."<<sum_tu<<endl;
      cout<<"Your bill amount after GST is Rs."<<gst_u<<endl;
      cout<<"The time taken for delivery will be "<<delTime_u<<"minutes"<<endl;
      cout<<"to order from Uber Eats enter 3"<<endl;
      cout<<endl<<endl;
  }

    void Food_panda()
    {
        sum_1f=count_1*185;
        sum_2f=count_2*190;
        sum_3f=count_3*215;
        sum_4f=count_4*225;
        sum_5f=count_5*225;
        sum_tf=sum_1f+sum_2f+sum_3f+sum_4f+sum_5f;
        count_tf=count_1+count_2+count_3+count_4+count_5;
        delTime_f=count_tf*6;
        cgst=(2.5/100)*sum_tf;
        sgst=(2.5/100)*sum_tf;
        gst_f=sum_tf+(cgst+sgst);
        cout<<"Your bill amount from Food Panda is Rs."<<sum_tf<<endl;
        cout<<"Your bill amount after GST is Rs."<<gst_f<<endl;
        cout<<"The time taken for delivery will be "<<delTime_f<<"minutes"<<endl;
        cout<<"to order from Food Panda enter 4"<<endl;
        cout<<endl;
    }
  void Decide(int a_status)
  {
      int status=a_status;
      Amar::Decide(status);
  }

}obj5;

 void choice(int a)
{
    int status =a;
    int rest_choice;
    cout<<"1. Amar"<<endl;
    cout<<"2. Prithvi cafe"<<endl;
    cout<<"3. Kailash Parbat"<<endl;
    cout<<"4. Chocolate Heaven"<<endl;
    cout<<"5. Aditi"<<endl;

    cin>>rest_choice;
    string explore;
    switch(rest_choice)
    {
        case 1:
        {
        cout<<"You have chosen to order from Amar"<<endl;

        string lines_a;
        ifstream menu_amar;
        menu_amar.open("menu1fin.txt");
        while(!menu_amar.eof())
        {
        getline(menu_amar, lines_a);
        //cout<<lines<<endl;
        std::cout<<lines_a<<endl;
        }
        cout<<"To switch another restaurant enter 'explore' else enter any key"<<endl;
        cin>>explore;
        if(explore=="Explore" || explore=="explore")
        {
            choice(status);
        }
        else
        {

        obj1.order();
        obj1.Zomato();
        obj1.Swiggy();
        obj1.Uber_eats();
        obj1.Food_panda();
        obj1.Decide(status);
        }
        }
        break;

        case 2:
        {
        cout<<"You have chosen to order from Prithvi"<<endl;

        string lines_p;
        ifstream menu_prithvi;
        menu_prithvi.open("prithvi.txt");
        while(!menu_prithvi.eof())
        {
        getline(menu_prithvi, lines_p);
        //cout<<lines<<endl;
        std::cout<<lines_p<<endl;
        }
        cout<<"To switch another restaurant enter 'explore' else enter any key"<<endl;
        cin>>explore;
        if(explore=="Explore" || explore=="explore")
        {
            choice(status);
        }
        else
        {
        obj2.order();
        obj2.Zomato();
        obj2.Swiggy();
        obj2.Uber_eats();
        obj2.Food_panda();
        obj2.Decide(status);
        }
        }
        break;

        case 3:
        {
        cout<<"You have chosen to order from Kailash Parbat"<<endl;

        string lines_kp;
        ifstream menu_kp;
        menu_kp.open("kp.txt");
        while(!menu_kp.eof())
        {
        getline(menu_kp, lines_kp);
        //cout<<lines<<endl;
        std::cout<<lines_kp<<endl;
        }
        cout<<"To switch another restaurant enter 'explore' else enter any key"<<endl;
        cin>>explore;
        if(explore=="Explore" || explore=="explore")
        {
            choice(status);
        }
        else
        {

        obj3.order();
        obj3.Zomato();
        obj3.Swiggy();
        obj3.Uber_eats();
        obj3.Food_panda();
        obj3.Decide(status);
        }
        }
        break;

        case 4:
        {
        cout<<"You have chosen to order from Chocolate Heaven"<<endl;

        string lines_ch;
        ifstream menu_ch;
        menu_ch.open("ch.txt");
        while(!menu_ch.eof())
        {
        getline(menu_ch, lines_ch);
        //cout<<lines<<endl;
        std::cout<<lines_ch<<endl;
        }
        cout<<"To switch another restaurant enter 'explore' else enter any key"<<endl;
        cin>>explore;
        if(explore=="Explore" || explore=="explore")
        {
            choice(status);
        }
        else
        {

        obj4.order();
        obj4.Zomato();
        obj4.Swiggy();
        obj4.Uber_eats();
        obj4.Food_panda();
        obj4.Decide(status);
        }
        }
        break;

        case 5:
        {
        cout<<"You have chosen to order from Aditi"<<endl;

        string lines_ad;
        ifstream menu_aditi;
        menu_aditi.open("aditi.txt");
        while(!menu_aditi.eof())
        {
        getline(menu_aditi, lines_ad);
        //cout<<lines<<endl;
        std::cout<<lines_ad<<endl;
        }
        cout<<"To switch another restaurant enter 'explore' else enter any key"<<endl;
        cin>>explore;
        if(explore=="Explore" || explore=="explore")
        {
            choice(status);
        }
        else
        {
        obj5.order();
        obj5.Zomato();
        obj5.Swiggy();
        obj5.Uber_eats();
        obj5.Food_panda();
        obj5.Decide(status);
        }
        }
        break;

        default:
            cout<<"Wrong choice"<<endl;
            choice(status);
    }
}


class LoRe
{

    string user_name,user_password,address;
    long long user_phone;
    string names,passwords;
    int counter_n=0,counter_p=0;
    int i=0;
    public:
    int u_register()
        {

            cout<<"Enter your name"<<endl;
            cin>>user_name;
            ofstream save;
            save.open("name.txt",ios::app);
            save<<endl<<user_name;
            save.close();

            cout<<"Create a password (alphabets only)"<<endl;
            cin>>user_password;
            save.open("password.txt",ios::app);
            save<<endl<<user_password;
            save.close();

            cout<<"Enter your Phone no."<<endl;
            cin>>user_phone;
            ofstream phone;
            phone.open("phone.txt",ios::app);
            phone<<endl<<user_phone;
            phone.close();


            cout<<"Enter your delivery address"<<endl;
            cin>>address;
            ofstream address1;
            address1.open("address.txt",ios::app);
            address1<<endl<<address;
            address1.close();
            cout<<endl;


            cout<<"WELCOME"<<endl<<" You have new code 'NEW_USER' use it to get 13% of on any order"<<endl;
            return 1;
        }

    int login()
        {
            ifstream name;
            int y;
        cout<<"Enter username"<<endl;
        cin>>user_name;
        cout<<"Enter password"<<endl;
        cin>>user_password;
        name.open("name.txt");
        while(!name.eof())
            {
                   getline(name,names);
                   if(names==user_name)
                   {break;}
                   else{
                    counter_n++;

                   }

            }
            name.close();

        ifstream pass;
        pass.open("password.txt");
        while(pass.good())
        {

           getline(pass,passwords);
                   if(passwords==user_password)
                   {
                       break;}
                   else{
                    counter_p++;
                   }
        }


        if(counter_n==counter_p)
        {
            cout<<"Successfully logged in!! "<<endl;
        }
        else
        {
            cout<<"Login error"<<endl;
            cout<<"Redirecting to registration page"<<endl;
            u_register();
        }
        }
}obj;


void ratings()
    {
        int rating;
        cout<<endl;
        char feedback[100];
    cout<<"Did we make ordering food easier?"<<endl;
    cout<<"Rate us NOW!(0-5)"<<endl;
    cin>>rating;
        if(rating>5)
        {
        cout<<"Please rate out of five"<<endl;
        ratings();
        }
        else
        {
            if(rating<=3)
            {
                cout<<"Help us improve our service by giving us feedback"<<endl;
                cin>>feedback;
                cout<<"Thank you fro your feedback :)"<<endl;
                cout<<"We will make sure to look into it"<<endl;
            }
            cout<<endl;
            cout<<"Enjoy your meal"<<endl;
            cout<<"Hope to see you again:)"<<endl;
            cout<<"                        --KHATIR DARI"<<endl<<endl<<endl<<endl;

        }
    }

int main()
{
int status;
logo();
cout<<endl;
    cout<<"Welcome to KHATIRDARI--'Khate Raho Mangaate Raho!!'"<<endl;
    cout<<endl;
    random_otp();
    string lore;
    cout<<endl;
    cout<<"Do you want to login or register?";
    cin>>lore;
    if(lore == "Login" || lore== "login" )
    {
        status=obj.login();
    }

    else if(lore=="register" || lore=="Register")
    {
        status=obj.u_register();
    }
    cout<<"Choose Your Restaurant"<<endl;
    choice(status);

    ratings();

    return 0;
}




#include<iostream>
#include<string>
using namespace std;

class movie
{
protected:
          int genre;
public:
          void getgenre()
          {
                    cout<<" Enter the number of genre :";
                    cin>>genre;
                    cout<<endl;
          }
          int firstline()
          {
                    return genre;
          }
};
class action:public movie
{
protected:
          string name; float rate;
          float timeAc=30.40;

public:
          static int y;
          void setnames(string s, float r)
          {
                    this->name=s;
                    this->rate=r;
          }
          void displaynames()
          {

                    cout<<y++<<" "<<name<<endl<<" Rate :"<<rate<<endl;
          }
          void getmovie()
          {
              cout<<endl<<" Enter the serial numbers :";
              int x;
              cin>>x;
              cout<<endl;
              if(x==1)
              {
                        cout<<" The Dark Knight"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==2)
              {
                        cout<<" Jason Bourne"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==3)
              {
                        cout<<" The Matrix"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else {cout<<"Please enter numbers correctly";}
          }
          friend class timeMeasurement;
};
class comedy:public movie
{
protected:
          string name; float rate;
          float timeAc=25.30;

public:
          static int y;
          void setnames(string s, float r)
          {
                    this->name=s;
                    this->rate=r;
          }
          void displaynames()
          {

                    cout<<y++<<" "<<name<<endl<<" Rate :"<<rate<<endl;
          }
          void getmovie()
          {
              cout<<endl<<" Enter the serial numbers :";
              int x;
              cin>>x;
              cout<<endl;
              if(x==1)
              {
                        cout<<" The Hangover Trilogy"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==2)
              {
                        cout<<" Parasite"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==3)
              {
                        cout<<" Superbad"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else {cout<<"Please enter numbers correctly";}
          }
          friend class timeMeasurement;
};
class tvseries
{
protected:
          int genre;
public:
          void getgenre()
          {
                    cout<<" Enter the number of genre :";
                    cin>>genre;
                    cout<<endl;
          }
          int firstline()
          {
                    return genre;
          }
};
class crime:public tvseries
{
protected:
          string name; float rate;
          float timeAc=1.50;

public:
          static int y;
          void setnames(string s, float r)
          {
                    this->name=s;
                    this->rate=r;
          }
          void displaynames()
          {

                    cout<<y++<<" "<<name<<endl<<" Rate :"<<rate<<endl;
          }
          void getmovie()
          {
              cout<<endl<<" Enter the serial numbers :";
              int x;
              cin>>x;
              cout<<endl;
              if(x==1)
              {
                        cout<<" Breaking Bad"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==2)
              {
                        cout<<" Peaky Blinders"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==3)
              {
                        cout<<" Narcos"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else {cout<<"Please enter numbers correctly";}
          }
          friend class timeMeasurement;
};
class comedydrama:public tvseries
{
protected:
          string name; float rate;
          float timeAc=2.10;

public:
          static int y;
          void setnames(string s, float r)
          {
                    this->name=s;
                    this->rate=r;
          }
          void displaynames()
          {

                    cout<<y++<<" "<<name<<endl<<" Rate :"<<rate<<endl;
          }
          void getmovie()
          {
              cout<<endl<<" Enter the serial numbers :";
              int x;
              cin>>x;
              cout<<endl;
              if(x==1)
              {
                        cout<<" Silicon Valley"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==2)
              {
                        cout<<" Brooklyn Nine-Nine"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else if(x==3)
              {
                        cout<<" Young Sheldon"<<endl;
                        cout<<" Download torrent"<<endl<<" Enter y or n as yes/no"<<endl;
              }
              else {cout<<"Please enter numbers correctly";}
          }
          friend class timeMeasurement;
};
int action::y=1;
int comedy::y=1;
int crime::y=1;
int comedydrama::y=1;
class timeMeasurement
{
      public:
                void time(action obj)
                {
                         cout<<endl<<"Download started \a"<<endl<<"Remaining Time :"<< obj.timeAc<<" minutes"<<endl;
                }
                void time(comedy obj)
                {
                         cout<<endl<<"Download started \a"<<endl<<"Remaining Time :"<< obj.timeAc<<" minutes"<<endl;
                }
                void time(crime obj)
                {
                         cout<<endl<<"Download started \a"<<endl<<"Remaining Time :"<< obj.timeAc<<" hours"<<endl;
                }
                void time(comedydrama obj)
                {
                         cout<<endl<<"Download started \a"<<endl<<"Remaining Time :"<< obj.timeAc<<" hours"<<endl;
                }
};

int main()
{
          cout<<"          TorrentBD"<<endl;
          cout<<"    Movies          TV-series"<<endl;
          cout<<" Enter your choice (1 for Movies & 2 for TV-series):";
          int z;
          cin>>z;
          if(z==1)
          {

                    cout<<"  Genre :"<<endl;
                    cout<<"    1.Action"<<endl;
                    cout<<"    2.Comedy"<<endl;
                    movie mv;
                    mv.getgenre();
                    if(mv.firstline()==1)
                    {
                              action mv1;
                              mv1.setnames("The Dark Knite", 9.0);
                              mv1.displaynames();
                              mv1.setnames("Jason Bourne", 8.5);
                              mv1.displaynames();
                              mv1.setnames("The Matrix", 8.7);
                              mv1.displaynames();
                              mv1.getmovie();
                              char ch;
                              cin>>ch;
                              if(ch=='y')
                              {
                                        timeMeasurement tm;
                                        tm.time(mv1);
                              }
                              else
                              {
                                  try
                                        {
                                        if (ch = 'n')
                                        {
                                        throw ch;
                                        }
                                        }
                                        catch (char ch )
                                        {
                                        cout <<endl<< " Thank you for visiting our website"<<endl;
                                        }
                              }
                    }
                    else if(mv.firstline()==2)
                    {
                              comedy mv2;
                              mv2.setnames("The Hangover Trilogy", 7.7);
                              mv2.displaynames();
                              mv2.setnames("Parasite", 8.6);
                              mv2.displaynames();
                              mv2.setnames("Superbad", 7.6);
                              mv2.displaynames();
                              mv2.getmovie();
                              char ch;
                              cin>>ch;
                              if(ch=='y')
                              {
                                        timeMeasurement tm;
                                        tm.time(mv2);
                              }
                              else
                              {
                                  try
                                        {
                                        if (ch = 'n')
                                        {
                                        throw ch;
                                        }
                                        }
                                        catch (char ch )
                                        {
                                        cout <<endl<< " Thank you for visiting our website"<<endl;
                                        }
                              }
                    }
                    else {cout<<"Please enter words correctly";}
          }
          else if(z==2)
          {
                    cout<<"  Genre :"<<endl;
                    cout<<"    1.Crime"<<endl;
                    cout<<"    2.Comedy & Drama"<<endl;
                    tvseries mv;
                    mv.getgenre();
                    if(mv.firstline()==1)
                    {
                              crime mv1;
                              mv1.setnames("Breaking Bad", 9.5);
                              mv1.displaynames();
                              mv1.setnames("Peaky Blinders", 8.8);
                              mv1.displaynames();
                              mv1.setnames("Narcos", 8.8);
                              mv1.displaynames();
                              mv1.getmovie();
                              char ch;
                              cin>>ch;
                              if(ch=='y')
                              {
                                        timeMeasurement tm;
                                        tm.time(mv1);
                              }
                              else
                              {
                                  try
                                        {
                                        if (ch = 'n')
                                        {
                                        throw ch;
                                        }
                                        }
                                        catch (char ch )
                                        {
                                        cout <<endl<< " Thank you for visiting our website"<<endl;
                                        }
                              }
                    }
                    else if(mv.firstline()==2)
                    {
                              comedydrama mv2;
                              mv2.setnames("Silicon Vally", 8.5);
                              mv2.displaynames();
                              mv2.setnames("Brooklyn Nine-Nine", 8.4);
                              mv2.displaynames();
                              mv2.setnames("Young Sheldon", 7.4);
                              mv2.displaynames();
                              mv2.getmovie();
                              char ch;
                              cin>>ch;
                              if(ch=='y')
                              {
                                        timeMeasurement tm;
                                        tm.time(mv2);
                              }
                              else
                              {
                                  try
                                        {
                                        if (ch = 'n')
                                        {
                                        throw ch;
                                        }
                                        }
                                        catch (char ch )
                                        {
                                        cout <<endl<< " Thank you for visiting our website"<<endl;
                                        }
                              }
                    }
                    else {cout<<"Please enter numbers correctly";}
          }
          else {cout<<"Please enter numbers correctly";}

          return 0;
}


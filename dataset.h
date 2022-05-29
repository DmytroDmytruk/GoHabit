#ifndef DATASET_H
#define DATASET_H
#include <QString>
#include <QDateTime>

class Singleton
{
  private:
    static Singleton * p_instance;
    Singleton() {}
    Singleton( const Singleton& );
    Singleton& operator=( Singleton& );
    int thisUserId;
    int habitId;
    int screenX;
    int screenY;
    int arrOfId[5];
    QDateTime timeOfCheck;
  public:
    static Singleton * getInstance() {
        if(!p_instance)
            p_instance = new Singleton();
        return p_instance;
    }
    void SetThisUserId(int S);
    int GetThisUserId();
    void SettimeOfCheck(QDateTime T);
    QDateTime GettimeOfCheck();
    void SetHabitId(int S);
    int GetHabitId();
    int getScreenY();
    int getScreenX();
    void setScreen(int x, int y);
    void setarrOfId(int arr[]);
    int* getarrOfId();


};

#endif // DATASET_H

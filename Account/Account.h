

#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account {
  private:
    int id;
    user applicant;
    string date;
    string status
    public:
      Account();
      Account(int id, user applicant, string date);
      int getId();
      user getApplicant();
      string getDate();
      int getStatus();
    }
class Solution {
public:
     bool isLeap(int year) {
        if(year%400==0) {
            return true;
        }
        if(year%4==0 && year%100!=0) {
            return true;
        }
        return false;
     }

     int getDays(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int days=stoi(date.substr(8,2));
        int total=0;

        for(int y=1971;y<year;y++) {
            if(isLeap(y)) {
                total=total+366;
            }
            else {
                total=total+365;
            }

        }
        int daysInMonth[] ={
            31,28,31,30,31,30,
            31,31,30,31,30,31
        };

        if(isLeap(year)) {
            daysInMonth[1]=29;

        }
        for(int m=1;m<month;m++) {
            total=total+daysInMonth[m-1];
        }
        total=total+days;

return total;        
     }
    int daysBetweenDates(string date1, string date2) {
     int days1=getDays(date1);
     int days2=getDays(date2);
     return abs(days1-days2);
    }
};
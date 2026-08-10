int dayOfYear(char* date) {
    int num,sum=0;
    int year = 1000 *( (*date)-'0') + 100 * (*(date + 1) -'0') + 10 *(*(date + 2)-'0') + (*(date + 3)) -'0' ;
    date+=5;
    num = 10 *( (*date)-'0' ) + *(date + 1)-'0' ;
    num = num - 1;

    for (int m = 1; m <= num; m++) {

if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||
            m == 12)
            sum += 31;
   else if (m == 4 || m == 6 || m == 9 || m == 11)
            sum += 30;
        else {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    sum += 29;
else
    sum += 28;
        }
    }
    date+=3;
    sum += ((*date)-'0')* 10 + (*(date + 1)-'0');
    return sum;
}

